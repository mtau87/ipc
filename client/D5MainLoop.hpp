#pragma once
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/thread.hpp>
#include <boost/threadpool.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

#include <atomic>
#include <thread>
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <thread>
#include <map>

#include "D5Messager.hpp"
#include "D5IPC.hpp"

namespace D5
{
class CD5MainLoop
{
public:
    CD5MainLoop(const std::string strRecvMsgQueueName, bool bMultiThread = false, int nMsgCount = MAX_MSG_COUNT, int nBufSize = RECEIVE_BUF_SIZE) :
        m_strRecvMsgQueueName(strRecvMsgQueueName),
        m_Messager(NULL),
        m_bRunFlag(false),
        m_defaultCallback(CD5MainLoop::discardProtobufMessage),
        m_bMutiThread(bMultiThread), m_nMsgCount(nMsgCount), m_nBufSize(nBufSize)
    {
    }
    virtual ~CD5MainLoop()
    {
    }

    void Create()
    {
        m_Messager = std::make_shared<CD5IPC>(m_strRecvMsgQueueName, ED5IPC_MESSAGER_TYPE::MESSAGER_TYPE_SEND_AND_RECIEVE, m_nMsgCount, m_nBufSize);

        if(m_Messager)
        {
            m_Messager->Create();
        }

        if(m_bMutiThread)
        {
            //m_tp.reset(new boost::threadpool::pool(MAX_THREADS));
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

    void Spin()
    {
        m_bRunFlag = true;
        m_Spin();
    }

    void SpinOnce()
    {
        m_SpinOnce();
    }

    void Terminate()
    {
        m_bRunFlag = false;
    }

    template<typename T>
    int RegisterMsgHandle(const typename CallbackT<T>::ProtobufMessageCallback& callback, void* pData)
    {
        std::shared_ptr<CallbackT<T> > pd(new CallbackT<T>(callback, pData, T::descriptor()->full_name()));
        m_msgHandleMap[T::descriptor()->full_name()] = pd;
        return 0;
    }

protected:
    virtual void t_Create() {};
    virtual void t_Destory() {};
    virtual void t_RunLoop() {};

private:
    static void discardProtobufMessage(std::shared_ptr<::google::protobuf::Message> message)
    {
        std::cout << "Discarding " << message->GetTypeName() << std::endl;
    }

    void m_SpinOnce(void)
    {
        while(true)
        {
            if(m_Messager)
            {
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
            else
            {
                break;
            }
        }

        t_RunLoop();
    }

    void m_Spin()
    {
        while(m_bRunFlag)
        {
            m_SpinOnce();
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    }

    std::shared_ptr<CD5Message> m_GenerateMsg(const std::string& strBuf)
    {
        std::size_t pos = strBuf.find_first_of('\t');
        std::size_t posUUID = strBuf.find_first_of('\n');

        if(pos != std::string::npos && posUUID != std::string::npos && pos+1 < posUUID)
        {
            std::string strTypeName(strBuf.substr(0, pos));
            std::string strUUID = strBuf.substr(pos + 1, posUUID - (pos+1));
            std::string strContent = strBuf.substr(posUUID + 1);
            std::shared_ptr<CD5Message> pMsg(CCommonTools::instance()->CreateMessage(strTypeName));
            if(pMsg)
            {
                pMsg->ParseFromString(strContent);
            }
            return pMsg;
        }

        return std::shared_ptr<CD5Message>();
    }

    void m_DispathMessage(std::shared_ptr<CD5Message> message)
    {
        if(!message)
        {
            return;
        }

        auto it = m_msgHandleMap.find(message->GetDescriptor()->full_name());

        if(it != m_msgHandleMap.end())
        {
            if(m_bMutiThread /*&& m_tp*/)
            {
                std::thread(std::bind(&Callback::onMessageProtobuf, it->second.get(), message)).detach();
                //m_tp->schedule(std::bind(&Callback::onMessage, it->second.get(), message));
            }
            else
            {
                it->second->onMessageProtobuf(message);
            }
        }
        else
        {
            m_defaultCallback(message);
        }
    }

private:
    std::string m_strRecvMsgQueueName;
    std::shared_ptr<CD5Messager> m_Messager;
    std::atomic<bool> m_bRunFlag;
    std::map<std::string, std::shared_ptr<Callback> > m_msgHandleMap;
    std::function<void(std::shared_ptr<::google::protobuf::Message> message)> m_defaultCallback;
    std::shared_ptr<boost::threadpool::pool> m_tp;
    bool m_bMutiThread;
    int m_nMsgCount;
    int m_nBufSize;
};

class CD5MainLoopClient
{
public:
    CD5MainLoopClient(const std::string& strSendMsgQueueName, const std::string& strRecvMsgQueueName, bool bMultiThread = false, int nMsgCount = MAX_MSG_COUNT, int nBufSize = RECEIVE_BUF_SIZE) :
        m_strSendMsgQueueName(strSendMsgQueueName),
        m_strRecvMsgQueueName(strRecvMsgQueueName),
        m_MessagerSender(NULL),
        m_Messager(NULL),
        m_bRunFlag(false),
        m_defaultCallback(CD5MainLoopClient::discardProtobufMessage),
        m_bMutiThread(bMultiThread), m_nMsgCount(nMsgCount), m_nBufSize(nBufSize)
    {
    }
    virtual ~CD5MainLoopClient()
    {
    }

    void Create()
    {
        m_Messager = std::make_shared<CD5IPC>(m_strRecvMsgQueueName, ED5IPC_MESSAGER_TYPE::MESSAGER_TYPE_SEND_AND_RECIEVE, m_nMsgCount, m_nBufSize);

        if(m_Messager)
        {
            m_Messager->Create();
        }

        if(m_bMutiThread)
        {
            //m_tp.reset(new boost::threadpool::pool(MAX_THREADS));
        }
        t_Create();
    }

    void Destroy()
    {
        if(m_Messager)
        {
            m_Messager->Destroy();
        }

        if(m_MessagerSender)
        {
            m_MessagerSender->Destroy();
        }
        t_Destory();
    }

    void Spin()
    {
        m_bRunFlag = true;
        m_Spin();
    }

    void SpinOnce()
    {
        m_SpinOnce();
    }

    void Terminate()
    {
        m_bRunFlag = false;
    }

    template<typename T, typename M>
    bool CallAsync(std::shared_ptr<T> pMsg, const typename CallbackT<M>::ProtobufMessageCallback& callback, void* pData)
    {
        if(!pMsg)
        {
            return false;
        }

        if(!m_MessagerSender)
        {
            if(!m_strSendMsgQueueName.empty())
            {
                m_MessagerSender = std::make_shared<CD5IPC>(m_strSendMsgQueueName, ED5IPC_MESSAGER_TYPE::MESSAGER_TYPE_ONLY_SEND);
                if(m_MessagerSender)
                {
                    m_MessagerSender->Create();
                }
            }
        }

        if(!m_MessagerSender)
        {
            return false;
        }

        std::string strBuf = pMsg->GetTypeName() + "\t" + pMsg->uuid() + "\n" + pMsg->SerializeAsString();
        if(!m_MessagerSender->Send(strBuf))
        {
            return false;
        }
        std::shared_ptr<CallbackT<M> > pd(new CallbackT<M>(callback, pData, pMsg->uuid()));
        std::string key = M::descriptor()->full_name() + pMsg->uuid();
        m_msgHandleMap[key] = pd;
        return true;
    }

    template<typename T, typename M, typename N>
    bool CallAsync(std::shared_ptr<T> pMsg, const typename CallbackT<M>::ProtobufMessageCallback& callback, const typename CallbackT<N>::ProtobufMessageCallback& callback_2, void* pData)
    {
        if(!pMsg)
        {
            return false;
        }

        if(!m_MessagerSender)
        {
            if(!m_strSendMsgQueueName.empty())
            {
                m_MessagerSender = std::make_shared<CD5IPC>(m_strSendMsgQueueName, ED5IPC_MESSAGER_TYPE::MESSAGER_TYPE_ONLY_SEND);
                if(m_MessagerSender)
                {
                    m_MessagerSender->Create();
                }
            }
        }

        if(!m_MessagerSender)
        {
            return false;
        }

        std::string strBuf = pMsg->GetTypeName() + "\t" + pMsg->uuid() + "\n" + pMsg->SerializeAsString();
        if(!m_MessagerSender->Send(strBuf))
        {
            return false;
        }

        {
            std::shared_ptr<CallbackT<M> > pd(new CallbackT<M>(callback, pData, pMsg->uuid()));
            std::string key = M::descriptor()->full_name() + pMsg->uuid();
            m_msgHandleMap[key] = pd;
        }

        {
            std::shared_ptr<CallbackT<N> > pd(new CallbackT<N>(callback_2, pData, pMsg->uuid()));
            std::string key = N::descriptor()->full_name() + pMsg->uuid();
            m_msgHandleMap[key] = pd;
        }
        return true;
    }

    bool CallAsync(const std::string& requestName,
                   const std::string& uuid,
                   const std::string& msg,
                   const std::string& obj,
                   const std::string& fun,
                   const std::string& responseName,
                   const typename CallbackV::ValueMessageCallback& callback,
                   void* pData)
    {
        if(msg.empty())
        {
            return false;
        }

        if(!m_MessagerSender)
        {
            if(!m_strSendMsgQueueName.empty())
            {
                m_MessagerSender = std::make_shared<CD5IPC>(m_strSendMsgQueueName, ED5IPC_MESSAGER_TYPE::MESSAGER_TYPE_ONLY_SEND);
                if(m_MessagerSender)
                {
                    m_MessagerSender->Create();
                }
            }
        }

        if(!m_MessagerSender)
        {
            return false;
        }

        std::string strBuf = requestName + "\t" + uuid + "\n" + msg;
        if(!m_MessagerSender->Send(strBuf))
        {
            return false;
        }
        std::shared_ptr<CallbackV> pd(new CallbackV(callback, pData, uuid, obj, fun));
        std::string key = responseName + uuid;
        m_msgHandleMap[key] = pd;
        return true;
    }

    bool CallAsync(const std::string& requestName,
                   const std::string& uuid,
                   const std::string& msg,
                   const std::string& obj,
                   const std::string& fun_1,
                   const std::string& fun_2,
                   const std::string& responseName_1,
                   const std::string& responseName_2,
                   const typename CallbackV::ValueMessageCallback& callback_1,
                   const typename CallbackV::ValueMessageCallback& callback_2,
                   void* pData)
    {
        if(msg.empty())
        {
            return false;
        }

        if(!m_MessagerSender)
        {
            if(!m_strSendMsgQueueName.empty())
            {
                m_MessagerSender = std::make_shared<CD5IPC>(m_strSendMsgQueueName, ED5IPC_MESSAGER_TYPE::MESSAGER_TYPE_ONLY_SEND);
                if(m_MessagerSender)
                {
                    m_MessagerSender->Create();
                }
            }
        }

        if(!m_MessagerSender)
        {
            return false;
        }

        std::string strBuf = requestName + "\t" + uuid + "\n" + msg;
        if(!m_MessagerSender->Send(strBuf))
        {
            return false;
        }

        {
            std::shared_ptr<CallbackV> pd(new CallbackV(callback_1, pData, uuid, obj, fun_1));
            std::string key = responseName_1 + uuid;
            m_msgHandleMap[key] = pd;
        }

        {
            std::shared_ptr<CallbackV> pd(new CallbackV(callback_2, pData, uuid, obj, fun_2));
            std::string key = responseName_2 + uuid;
            m_msgHandleMap[key] = pd;
        }
        return true;
    }

    template<class T>
    bool Send(std::shared_ptr<T> pMsg, bool isGenerateUUIDFromType = false)
    {
        if(!pMsg)
        {
            return false;
        }

        if(!m_MessagerSender)
        {
            if(!m_strSendMsgQueueName.empty())
            {
                m_MessagerSender = std::make_shared<CD5IPC>(m_strSendMsgQueueName, ED5IPC_MESSAGER_TYPE::MESSAGER_TYPE_ONLY_SEND);
                if(m_MessagerSender)
                {
                    m_MessagerSender->Create();
                }
            }
        }

        if(!m_MessagerSender)
        {
            return false;
        }
        std::string uuid = pMsg->uuid();
        if(isGenerateUUIDFromType)
        {
            uuid = pMsg->GetTypeName();
        }
        std::string strBuf = pMsg->GetTypeName() + "\t" + uuid + "\n" + pMsg->SerializeAsString();
        if(!m_MessagerSender->Send(strBuf))
        {
            return false;
        }
        return true;
    }

    bool Send(const std::string& typeName, const std::string& uuid_, const std::string& msg, bool isGenerateUUIDFromType = false)
    {
        if(msg.empty())
        {
            return false;
        }

        if(!m_MessagerSender)
        {
            if(!m_strSendMsgQueueName.empty())
            {
                m_MessagerSender = std::make_shared<CD5IPC>(m_strSendMsgQueueName, ED5IPC_MESSAGER_TYPE::MESSAGER_TYPE_ONLY_SEND);
                if(m_MessagerSender)
                {
                    m_MessagerSender->Create();
                }
            }
        }

        if(!m_MessagerSender)
        {
            return false;
        }
        std::string uuid = uuid_;
        if(isGenerateUUIDFromType)
        {
            uuid = typeName;
        }
        std::string strBuf = typeName + "\t" + uuid + "\n" + msg;
        if(!m_MessagerSender->Send(strBuf))
        {
            return false;
        }
        return true;
    }

    template<typename T>
    std::string RegisterMsgHandle(const typename CallbackT<T>::ProtobufMessageCallback& callback, void* pData)
    {
        std::shared_ptr<CallbackT<T> > pd(new CallbackT<T>(callback, pData, T::descriptor()->full_name()));
        std::string key = T::descriptor()->full_name() + T::descriptor()->full_name();
        m_msgHandleMap[key] = pd;
        return key;
    }

    template<typename T>
    void UnRegisterMsgHandle(const std::string& uuid)
    {
        std::string key = T::descriptor()->full_name() + uuid;
        auto it = m_msgHandleMap.find(key);
        if(it != m_msgHandleMap.end())
        {
            m_msgHandleMap.erase(it);
        }
    }

    void UnRegisterMsgHandle(const std::string& responseName, const std::string& uuid)
    {
        std::string key = responseName + uuid;
        auto it = m_msgHandleMap.find(key);
        if(it != m_msgHandleMap.end())
        {
            m_msgHandleMap.erase(it);
        }
    }

protected:
    virtual void t_Create() {};
    virtual void t_Destory() {};
    virtual void t_RunLoop() {};

private:
    static void discardProtobufMessage(std::shared_ptr<::google::protobuf::Message> message)
    {
        std::cout << "Discarding " << message->GetTypeName() << std::endl;
    }

    void m_SpinOnce(void)
    {
        while(true)
        {
            if(m_Messager)
            {
                std::string strBuf("");
                m_Messager->Recieve(strBuf);
                if(strBuf.size() > 0)
                {
                    std::string strUUID("");
                    std::string strContent("");
                    auto msg = m_GenerateMsg(strBuf, strUUID, strContent);
                    m_DispathMessage(msg, strUUID, strContent);
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }

        t_RunLoop();
    }

    void m_Spin()
    {
        while(m_bRunFlag)
        {
            m_SpinOnce();
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    }

    std::shared_ptr<CD5Message> m_GenerateMsg(const std::string& strBuf, std::string& strUUID, std::string& strContent)
    {
        std::size_t pos = strBuf.find_first_of('\t');
        std::size_t posUUID = strBuf.find_first_of('\n');

        if(pos != std::string::npos && posUUID != std::string::npos && pos < posUUID)
        {
            std::string strTypeName(strBuf.substr(0, pos));
            strUUID = strBuf.substr(pos + 1, posUUID - (pos+1));
            strContent = strBuf.substr(posUUID + 1);
            std::shared_ptr<CD5Message> pMsg(CCommonTools::instance()->CreateMessage(strTypeName));
            if(pMsg)
            {
                pMsg->ParseFromString(strContent);
            }
            return pMsg;
        }

        return std::shared_ptr<CD5Message>();
    }

    void m_DispathMessage(std::shared_ptr<CD5Message> message, const std::string& strUUID, const std::string& strContent)
    {
        if(!message)
        {
            return;
        }
        std::string key = message->GetDescriptor()->full_name() + strUUID;
        auto it = m_msgHandleMap.find(key);

        if(it != m_msgHandleMap.end())
        {
            if(it->second->getType() == Callback::CALLBACK_FUN)
            {
                if(m_bMutiThread)
                {
                    std::thread(std::bind(&Callback::onMessageProtobuf, it->second.get(), message)).detach();
                }
                else
                {
                    it->second->onMessageProtobuf(message);
                }
            }
            else if(it->second->getType() == Callback::CALLBACK_VALUE)
            {
                if(m_bMutiThread)
                {
                    std::thread(std::bind(&Callback::onMessage, it->second.get(), strContent)).detach();
                }
                else
                {
                    it->second->onMessage(strContent);
                }
            }
        }
        else
        {
            m_defaultCallback(message);
        }
    }

private:
    std::string m_strRecvMsgQueueName;
    std::string m_strSendMsgQueueName;
    std::shared_ptr<CD5Messager> m_MessagerSender;
    std::shared_ptr<CD5Messager> m_Messager;
    std::atomic<bool> m_bRunFlag;
    std::map<std::string, std::shared_ptr<Callback> > m_msgHandleMap;
    std::function<void(std::shared_ptr<::google::protobuf::Message> message)> m_defaultCallback;
    std::shared_ptr<boost::threadpool::pool> m_tp;
    bool m_bMutiThread;
    int m_nMsgCount;
    int m_nBufSize;
};

class CD5MainLoopMulti
{
public:
    CD5MainLoopMulti(const std::string strRecvMsgQueueName, bool bMultiThread = false) :
        m_strRecvMsgQueueName(strRecvMsgQueueName),
        m_Messager(NULL),
        m_bRunFlag(false),
        m_defaultCallback(CD5MainLoopMulti::discardProtobufMessage),
        m_tp(MAX_THREADS),
        m_bMutiThread(bMultiThread)
    {
    }
    virtual ~CD5MainLoopMulti()
    {
    }

    void Create()
    {
        m_Messager = std::make_shared<CD5IPC>(m_strRecvMsgQueueName, ED5IPC_MESSAGER_TYPE::MESSAGER_TYPE_SEND_AND_RECIEVE);

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

    void Spin()
    {
        m_Spin();
    }

    void SpinOnce()
    {
        m_SpinOnce();
    }

    void Terminate()
    {
        m_bRunFlag = false;
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
        m_msgHandleMap.insert(std::pair<const google::protobuf::Descriptor*, std::shared_ptr<Callback> >(T::descriptor(), pd));
        return 0;
    }

    template<typename T>
    int UnRegisterMsgHandle(const typename CallbackT<T>::ProtobufMessageCallback& callback, void* pData)
    {
        std::shared_ptr<CallbackT<T> > pd(new CallbackT<T>(callback, pData));

        auto it = m_msgHandleMap.equal_range(T::descriptor());
        for(auto itF = it.first; itF != it.second; itF++)
        {
            if(*(itF->second) == *pd)
            {
                m_msgHandleMap.erase(itF);
                break;
            }
        }
        return 0;
    }

protected:
    virtual void t_Create() {};
    virtual void t_Destory() {};
    virtual void t_RunLoop() {};

private:
    static void discardProtobufMessage(std::shared_ptr<::google::protobuf::Message> message)
    {
        std::cout << "Discarding " << message->GetTypeName() << std::endl;
    }

    void m_SpinOnce(void)
    {
        while(true)
        {
            if(m_Messager)
            {
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
            else
            {
                break;
            }
        }

        t_RunLoop();
    }

    void m_Spin()
    {
        while(m_bRunFlag)
        {
            m_SpinOnce();
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    }

    std::shared_ptr<CD5Message> m_GenerateMsg(const std::string& strBuf)
    {
        std::size_t pos = strBuf.find_first_of('\t');

        if(pos != std::string::npos)
        {
            std::string strTypeName(strBuf.substr(0, pos));
            std::string strContent = strBuf.substr(pos + 1);
            std::shared_ptr<CD5Message> pMsg(CCommonTools::instance()->CreateMessage(strTypeName));
            pMsg->ParseFromString(strContent);
            return pMsg;
        }

        return std::shared_ptr<CD5Message>();
    }

    void m_DispathMessage(std::shared_ptr<CD5Message> message)
    {
        if(!message)
        {
            return;
        }

        auto it = m_msgHandleMap.equal_range(message->GetDescriptor());
        for(auto itF = it.first; itF != it.second; itF++)
        {
            if(m_bMutiThread)
            {
                m_tp.schedule(std::bind(&Callback::onMessageProtobuf, itF->second.get(), message));
            }
            else
            {
                itF->second->onMessageProtobuf(message);
            }
        }
    }

private:
    std::string m_strRecvMsgQueueName;
    std::shared_ptr<CD5Messager> m_Messager;
    std::atomic<bool> m_bRunFlag;
    std::multimap<const google::protobuf::Descriptor*, std::shared_ptr<Callback> > m_msgHandleMap;
    std::function<void(std::shared_ptr<::google::protobuf::Message> message)> m_defaultCallback;
    boost::threadpool::pool m_tp;
    bool m_bMutiThread;
};
}
