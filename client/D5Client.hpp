#pragma once
#include <atomic>
#include <thread>
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <map>
#include <functional>
#include "D5Messager.hpp"
#include "D5IPC.hpp"
#include "D5Asio.hpp"
#include "message_keepalive.pb.h"

namespace D5
{
    class CD5Client
    {
    public:
        CD5Client(int nPort) :
            m_nPort(nPort),
            m_eType(CLIENT_TYPE_ASIO),
            m_defaultCallback(CD5Client::discardProtobufMessage)
        {
        }

        CD5Client(const std::string& strMQ) : m_strRecvMsgQueueName(strMQ), m_eType(CLIENT_TYPE_IPC),
            m_defaultCallback(CD5Client::discardProtobufMessage)
        {

        }
        virtual ~CD5Client()
        {
        }
        void Create()
        {
            if(m_eType == CLIENT_TYPE_IPC)
            {
                m_Messager = std::make_shared<CD5IPC>(m_strRecvMsgQueueName, ED5IPC_MESSAGER_TYPE::MESSAGER_TYPE_ONLY_SEND);
            }
            else if(m_eType == CLIENT_TYPE_ASIO)
            {
                m_Messager = std::make_shared<CD5Asio>("127.0.0.1", m_nPort);
            }

            if(m_Messager)
            {
                m_Messager->Create();
            }
        }
        void Destroy()
        {
            if(m_Messager)
            {
                m_Messager->Destroy();
            }
        }

        template<typename T>
        int RegisterMsgHandle(const typename CallbackT<T>::ProtobufMessageCallback& callback, void* pData)
        {
            std::shared_ptr<CallbackT<T> > pd(new CallbackT<T>(callback, pData));
            m_msgHandleMap[T::descriptor()] = pd;
            return 0;
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
            return m_Messager->Send(strBuf);
        }

        bool Recieve()
        {
            std::shared_ptr<D5::CD5Message> recvMsg;
            return Recieve(recvMsg);
        }

        bool Recieve(std::shared_ptr<CD5Message>& pMsg)
        {
            if(!m_Messager)
            {
                return false;
            }

            //send alive
            std::shared_ptr<d5::CMessageKeeyAlive> pAliveMsg(new d5::CMessageKeeyAlive());
            pAliveMsg->set_uuid(CCommonTools::instance()->GenerateUUID());
            Send(pAliveMsg);

            //recieve
            std::string strBuf("");
            m_Messager->Recieve(strBuf);

            if(strBuf.size() > 0)
            {
                pMsg = m_GenerateMsg(strBuf);

                if(pMsg)
                {
                    auto it = m_msgHandleMap.find(pMsg->GetDescriptor());

                    if(it != m_msgHandleMap.end())
                    {
                        it->second->onMessage(pMsg);
                    }
                    else
                    {
                        m_defaultCallback(pMsg);
                    }
                }

                return true;
            }

            return false;
        }

    private:
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
                pMsg->ParseFromString(strContent);
                return pMsg;
            }

            return std::shared_ptr<CD5Message>();
        }

    private:
        int m_nPort;
        std::string m_strRecvMsgQueueName;
        std::shared_ptr<CD5Messager> m_Messager;
        ED5_CLIENT_TYPE m_eType;
        std::map<const google::protobuf::Descriptor*, std::shared_ptr<Callback> > m_msgHandleMap;
        std::function<void(std::shared_ptr<::google::protobuf::Message> message)> m_defaultCallback;
    };
}
