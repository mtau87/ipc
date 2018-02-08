#pragma once
#include <boost/asio.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/thread.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/interprocess/managed_shared_memory.hpp>
#include <boost/interprocess/mapped_region.hpp>

#include <atomic>
#include <thread>
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <thread>

#include "D5Messager.hpp"
#include "D5IPC.hpp"
#include "D5Asio.hpp"
#include "message_keepalive.pb.h"

namespace D5
{
class CD5Service
{
public:
    CD5Service(const std::string strRecvMsgQueueName) :
        m_strRecvMsgQueueName(strRecvMsgQueueName),
        m_Messager(NULL),
        m_bRunFlag(false),
        m_eType(ED5_MAINLOOP_TYPE::MAINLOOP_TYPE_IPC),
        m_Work(m_WorkService),
        m_ServiceIOTimer(m_ServiceIO, boost::posix_time::milliseconds(10)),
        m_ServiceIOAliveCheckTimer(m_ServiceIO, boost::posix_time::seconds(5)),
        m_bAliveCheckFlag(false),
        m_ServiceWork(m_ServiceIO),
        m_defaultCallback(CD5Service::discardProtobufMessage)
    {
    }
    CD5Service(int nPort) :
        m_nPort(nPort),
        m_strRecvMsgQueueName(""),
        m_Messager(NULL),
        m_bRunFlag(false),
        m_eType(ED5_MAINLOOP_TYPE::MAINLOOP_TYPE_ASIO),
        m_Work(m_WorkService),
        m_ServiceIOTimer(m_ServiceIO, boost::posix_time::milliseconds(10)),
        m_ServiceIOAliveCheckTimer(m_ServiceIO, boost::posix_time::seconds(5)),
        m_bAliveCheckFlag(false),
        m_ServiceWork(m_ServiceIO),
        m_defaultCallback(CD5Service::discardProtobufMessage)
    {

    }
    virtual ~CD5Service()
    {
    }

    void Create()
    {
        if(m_eType == MAINLOOP_TYPE_IPC)
        {
            m_Messager = std::make_shared<CD5IPC> (m_strRecvMsgQueueName, ED5IPC_MESSAGER_TYPE::MESSAGER_TYPE_SEND_AND_RECIEVE);
        }
        else if(m_eType == MAINLOOP_TYPE_ASIO)
        {
            while(1)
            {
                try
                {
                    // creating our first shared memory object.
                    boost::interprocess::shared_memory_object sharedmem1(boost::interprocess::open_or_create, D5::D5_SOCKET_PORT.c_str(), boost::interprocess::read_write);

                    // setting the size of the shared memory
                    sharedmem1.truncate(256);
                    // map the shared memory to current process
                    boost::interprocess::mapped_region mmap(sharedmem1, boost::interprocess::read_write);

                    // access the mapped region using get_address
                    char t[256] = {0};
                    sprintf(t, "%d\n", m_nPort);
                    std::strcpy(static_cast<char* >(mmap.get_address()), t);
                    break;
                }
                catch(boost::interprocess::interprocess_exception& e)
                {
                    std::cout << e.what() << std::endl;
                    boost::interprocess::shared_memory_object::remove(D5::D5_SOCKET_PORT.c_str());
                }
            }

            m_Messager = std::make_shared<CD5Asio> (m_nPort);
        }

        if(m_Messager)
        {
            m_Messager->Create();
        }

        t_Create();
    }
    void Destroy()
    {
        if(m_Messager)
        {
            m_Messager->Destroy();
        }

        t_Destory();
    }

    void Run()
    {
        //m_bRunFlag = true;
        //m_loop = std::thread(&CD5Service::m_RunLoop, this);
        m_ServiceIOTimer.async_wait(std::bind(&CD5Service::m_ServiceOnceHandler, this, std::placeholders::_1));
        m_ServiceIOAliveCheckTimer.async_wait(std::bind(&CD5Service::m_ServiceAliveConfirmHandler, this, std::placeholders::_1));
        std::thread(boost::bind(&boost::asio::io_service::run, &m_ServiceIO)).detach();

        std::thread(boost::bind(&boost::asio::io_service::run, &m_WorkService)).detach();
    }

    void Terminate()
    {
        m_WorkService.stop();
        m_ServiceIO.stop();
        //m_bRunFlag = false;
        //m_loop.join();
    }
    void Wait()
    {
        //m_loop.join();
    }

    bool Call()
    {
        return true;
    }

    bool Send(std::shared_ptr<CD5Message> pMsg)
    {
        if(!pMsg)
        {
            return false;
        }

        if(!m_Messager)
        {
            return false;
        }

        std::string strBuf = pMsg->GetTypeName() + "\t" + pMsg->SerializeAsString();
        m_Messager->Send(strBuf);
        return true;
    }

    template<typename T>
    int RegisterMsgHandle(const typename CallbackT<T>::ProtobufMessageCallback& callback, void* pData)
    {
        std::shared_ptr<CallbackT<T> > pd(new CallbackT<T>(callback, pData));
        m_msgHandleMap[T::descriptor()] = pd;
        return 0;
    }

protected:
    virtual void t_Create() {};
    virtual void t_Destory() {};
    virtual void t_RunLoop() {};

private:
    void m_ServiceAliveCheckHandler(const boost::system::error_code& error)
    {
        //check alive
        m_bAliveCheckFlag = true;
        //std::shared_ptr<D5::CD5Message> pAliveMsg ( new CD5Message() );
        //Send ( pAliveMsg );

        m_ServiceIOAliveCheckTimer.expires_at(m_ServiceIOAliveCheckTimer.expires_at() + boost::posix_time::seconds(5));
        m_ServiceIOAliveCheckTimer.async_wait(std::bind(&CD5Service::m_ServiceAliveConfirmHandler, this, std::placeholders::_1));
    }

    void m_ServiceAliveConfirmHandler(const boost::system::error_code& error)
    {
        //check alive
        if(m_bAliveCheckFlag)
        {
            //not alive
            if(m_Messager && m_Messager->IsConnect())
            {
                //m_Messager->Destroy();
                //m_Messager->Create();
                m_Messager->Restart();
            }
        }

        m_bAliveCheckFlag = true;

        m_ServiceIOAliveCheckTimer.expires_at(m_ServiceIOAliveCheckTimer.expires_at() + boost::posix_time::seconds(5));
        m_ServiceIOAliveCheckTimer.async_wait(std::bind(&CD5Service::m_ServiceAliveConfirmHandler, this, std::placeholders::_1));
    }

    void m_ServiceOnceHandler(const boost::system::error_code& error)
    {
        while(true)
        {
            if(m_Messager)
            {
                std::string strBuf("");
                m_Messager->Recieve(strBuf);

                if(strBuf.size() > 0)
                {
                    m_bAliveCheckFlag = false;
                    auto msg = m_GenerateMsg(strBuf);
                    m_DispathMessage(msg);
                }
                else
                {
                    break;
                }
            }
        }

        t_RunLoop();

        m_ServiceIOTimer.expires_at(m_ServiceIOTimer.expires_at() + boost::posix_time::milliseconds(10));
        m_ServiceIOTimer.async_wait(std::bind(&CD5Service::m_ServiceOnceHandler, this, std::placeholders::_1));
    }

    void m_RunLoop()
    {
        while(m_bRunFlag)
        {
            while(true)
            {
                if(m_Messager)
                {
                    //check alive
                    //std::shared_ptr<D5::CD5Message> pAliveMsg ( new CD5Message() );
                    //Send ( pAliveMsg );

                    std::string strBuf("");
                    m_Messager->Recieve(strBuf);

                    if(strBuf.size() > 0)
                    {
                        auto msg = m_GenerateMsg(strBuf);
                        m_DispathMessage(msg);
                    }
                    else
                    {
                        break;
                    }
                }
            }

            t_RunLoop();
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    }

    static void discardProtobufMessage(std::shared_ptr<::google::protobuf::Message> message)
    {
        std::cout << "Discarding " << message->GetTypeName() << std::endl;
    }

    std::shared_ptr<CD5Message> m_GenerateMsg(const std::string& strBuf)
    {
        std::size_t pos = strBuf.find_first_of('\t');

        if(pos != std::string::npos)
        {
            std::string strTypeName(strBuf.substr(0, pos));
            std::string strContent = strBuf.substr(pos + 1);
            std::shared_ptr<CD5Message> pMsg(CCommonTools::instance()->CreateMessage(strTypeName));

            if(pMsg)
            {
                pMsg->ParseFromString(strContent);
            }

            return pMsg;
        }

        return std::shared_ptr<CD5Message>();
    }

    void m_DispathMessage(const std::shared_ptr<CD5Message> message)
    {
        m_WorkService.post(std::bind(&CD5Service::m_DispathMessageIMPL, this, message));
    }

    void m_DispathMessageIMPL(std::shared_ptr<CD5Message> message)
    {
        if(!message)
        {
            return;
        }

        auto it = m_msgHandleMap.find(message->GetDescriptor());

        if(it != m_msgHandleMap.end())
        {
            it->second->onMessageProtobuf(message);
        }
        else
        {
            m_defaultCallback(message);
        }
    }

private:
    int m_nPort;
    std::string m_strRecvMsgQueueName;
    std::thread m_loop;
    std::shared_ptr<CD5Messager> m_Messager;
    std::atomic<bool> m_bRunFlag;
    ED5_MAINLOOP_TYPE m_eType;
    boost::asio::io_service  m_WorkService;
    boost::asio::io_service::work m_Work;
    std::map<const google::protobuf::Descriptor*, std::shared_ptr<Callback> > m_msgHandleMap;
    std::function<void(std::shared_ptr<::google::protobuf::Message> message)> m_defaultCallback;

    boost::asio::io_service m_ServiceIO;
    boost::asio::deadline_timer m_ServiceIOTimer;
    boost::asio::deadline_timer m_ServiceIOAliveCheckTimer;
    std::atomic<bool> m_bAliveCheckFlag;
    boost::asio::io_service::work m_ServiceWork;
};
}
