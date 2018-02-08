#pragma once
#include <atomic>
#include <thread>
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <sstream>
#include <boost/iostreams/device/back_inserter.hpp>
#include <boost/iostreams/filter/gzip.hpp>
#include <boost/iostreams/filtering_stream.hpp>
#include <boost/interprocess/ipc/message_queue.hpp>
#include "D5Messager.hpp"
#include "Common.h"

namespace D5
{
const int MAX_MSG_COUNT(1000000);
typedef boost::interprocess::message_queue interop_message_queue;
enum ED5IPC_MESSAGER_TYPE
{
    MESSAGER_TYPE_ONLY_SEND = 0,
    MESSAGER_TYPE_SEND_AND_RECIEVE,
};


class CD5IPC: public CD5Messager
{
    // First eight bytes to identify our proto stream format.
    const long long kMagicBeg = 0x7b1d1f7b5bf501db;
    // Last eight bytes to identify our proto stream format.
    const long long kMagicEnd = 0x8b1d1f7b5bf501db;
public:
    CD5IPC(const std::string strMQName, ED5IPC_MESSAGER_TYPE eType, int nMsgCount = MAX_MSG_COUNT, int nBufSize = RECEIVE_BUF_SIZE) :
        m_strMQName(strMQName), m_eType(eType), m_nMsgCount(nMsgCount), m_nBufSize(nBufSize), m_bDestroyed(false)
    {
    }
    virtual ~CD5IPC()
    {
    }

protected:
    virtual void t_Create()
    {
        try
        {
            if(m_eType == MESSAGER_TYPE_SEND_AND_RECIEVE)
            {
                boost::interprocess::message_queue::remove(m_strMQName.c_str());
                m_pMQ = std::make_shared<interop_message_queue>(boost::interprocess::create_only, m_strMQName.c_str(), m_nMsgCount, m_nBufSize);
            }
            else
            {
                m_pMQ = std::make_shared<interop_message_queue>(boost::interprocess::open_only, m_strMQName.c_str());
            }
        }
        catch (const std::exception& e)
        {
            std::string str = e.what();
            std::cout << str << std::endl;
        }

    }
    virtual void t_Destory()
    {
        if(m_eType == MESSAGER_TYPE_SEND_AND_RECIEVE)
        {
            boost::interprocess::message_queue::remove(m_strMQName.c_str());
        }
        m_bDestroyed = true;
    }

    virtual void t_Recieve(std::string& str)
    {
        if(!m_pMQ)
        {
            return;
        }

        try
        {
            std::lock_guard<std::recursive_mutex> lck(m_RecieverMtx);
            {
                unsigned int priority = 0;
                char buffer[RECEIVE_BUF_SIZE]= {0};
                memset(buffer, 0, RECEIVE_BUF_SIZE*sizeof(char));
                interop_message_queue::size_type recvd_size;
                if(m_pMQ->try_receive(buffer, RECEIVE_BUF_SIZE, recvd_size, priority))
                {
                    std::stringstream ss;
                    ss.write(buffer, (recvd_size < RECEIVE_BUF_SIZE ? recvd_size: RECEIVE_BUF_SIZE));

                    boost::uint64_t magic = 0;
                    if (!ReadSizeAsLittleEndian(&ss, &magic) || magic != kMagicBeg)
                    {
                        return;
                    }
                }
                else
                {
                    return;
                }
            }

            {
                std::stringstream ssAll;
                do
                {
                    if(m_bDestroyed)
                    {
                        return;
                    }
                    unsigned int priority = 0;
                    char buffer[RECEIVE_BUF_SIZE]= {0};
                    memset(buffer, 0, RECEIVE_BUF_SIZE*sizeof(char));
                    interop_message_queue::size_type recvd_size;
                    if(!m_pMQ->try_receive(buffer, RECEIVE_BUF_SIZE, recvd_size, priority))
                    {
                        continue;
                    }
                    std::stringstream ss;
                    ss.write(buffer, (recvd_size < RECEIVE_BUF_SIZE ? recvd_size: RECEIVE_BUF_SIZE));
                    boost::uint64_t magic = 0;
                    if (ReadSizeAsLittleEndian(&ss, &magic) && magic == kMagicEnd)
                    {
                        break;
                    }
                    else
                    {
                        ssAll.write(buffer, (recvd_size < RECEIVE_BUF_SIZE ? recvd_size: RECEIVE_BUF_SIZE));
                    }
                }
                while(1);

                boost::uint64_t compressed_size;
                if (!ReadSizeAsLittleEndian(&ssAll, &compressed_size))
                {
                    return;
                }

                if(MAX_MSG_COUNT*RECEIVE_BUF_SIZE < compressed_size)
                {
                    return;
                }
                /*str.resize(compressed_size, '\0');
                if (!ssAll.read(&str.front(), compressed_size))
                {
                    return;
                }*/
                std::string compressed_data(compressed_size, '\0');
                if (!ssAll.read(&compressed_data.front(), compressed_size))
                {
                    return;
                }
                FastGunzipString(compressed_data, &str);
            }
        }
        catch(boost::interprocess::interprocess_exception &ex)
        {
            std::cout << "ipc recieve" << ex.what() << std::endl;
        }
    }

    virtual bool t_Send(const std::string& str)
    {
        if(!m_pMQ)
        {
            return false;
        }

        try
        {
            std::lock_guard<std::recursive_mutex> lck(m_SenderMtx);
            {
                std::stringstream ss;
                WriteSizeAsLittleEndian(kMagicBeg, &ss);
                std::string strBuf = ss.str();
                m_pMQ->send(strBuf.c_str(), strBuf.size(), 0);
            }

            std::string compressed_data;
            FastGzipString(str, &compressed_data);
            {

                std::stringstream ss;
                WriteSizeAsLittleEndian(compressed_data.size(), &ss);
                //WriteSizeAsLittleEndian(str.size(), &ss);
                std::string strBuf = ss.str();
                m_pMQ->send(strBuf.c_str(), strBuf.size(), 0);
            }

            {
                std::stringstream ss;
                ss.write(compressed_data.data(), compressed_data.size());
                //ss.write(str.data(), str.size());
                char buffer[RECEIVE_BUF_SIZE]= {0};
                while(ss)
                {
                    memset(buffer, 0, RECEIVE_BUF_SIZE*sizeof(char));
                    ss.read(buffer, RECEIVE_BUF_SIZE);
                    m_pMQ->send(buffer, RECEIVE_BUF_SIZE, 0);
                }
            }

            {
                std::stringstream ss;
                WriteSizeAsLittleEndian(kMagicEnd, &ss);
                std::string strBuf = ss.str();
                m_pMQ->send(strBuf.c_str(), strBuf.size(), 0);
            }
        }
        catch(boost::interprocess::interprocess_exception &ex)
        {
            std::cout << "ipc send" << ex.what() << std::endl;
            return false;
        }
        return true;
    }
    virtual void t_Restart() {}
    virtual bool t_IsConnect()
    {
        return true;
    }
private:

    inline void FastGzipString(const std::string& uncompressed,
                               std::string* compressed)
    {
        boost::iostreams::filtering_ostream out;
        out.push(
            boost::iostreams::gzip_compressor(boost::iostreams::zlib::best_speed));
        out.push(boost::iostreams::back_inserter(*compressed));
        boost::iostreams::write(out,
                                reinterpret_cast<const char*>(uncompressed.data()),
                                uncompressed.size());
    }

    inline void FastGunzipString(const std::string& compressed,
                                 std::string* decompressed)
    {
        boost::iostreams::filtering_ostream out;
        out.push(boost::iostreams::gzip_decompressor());
        out.push(boost::iostreams::back_inserter(*decompressed));
        boost::iostreams::write(out, reinterpret_cast<const char*>(compressed.data()),
                                compressed.size());
    }

    void WriteSizeAsLittleEndian(boost::uint64_t size, std::ostream* out)
    {
        for (int i = 0; i != 8; ++i)
        {
            out->put(size & 0xff);
            size >>= 8;
        }
    }

    bool ReadSizeAsLittleEndian(std::istream* in, boost::uint64_t* size)
    {
        *size = 0;
        for (int i = 0; i != 8; ++i)
        {
            *size >>= 8;
            *size += static_cast<boost::uint64_t>(in->get()) << 56;
        }
        return !in->fail();
    }
private:
    std::shared_ptr<interop_message_queue> m_pMQ;
    ED5IPC_MESSAGER_TYPE m_eType;
    std::string m_strMQName;
    char m_buff[RECEIVE_BUF_SIZE];
    int m_nMsgCount;
    int m_nBufSize;
    bool m_bDestroyed;
    std::recursive_mutex m_RecieverMtx;
    std::recursive_mutex m_SenderMtx;
};
}


