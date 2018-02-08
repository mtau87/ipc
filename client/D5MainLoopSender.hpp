#pragma once
#include "D5MainLoop.hpp"

namespace D5
{

class CD5MainLoopSender
{
public:
    CD5MainLoopSender(const std::string& strMQ)
    {
        m_Messager = std::make_shared<CD5IPC>(strMQ, ED5IPC_MESSAGER_TYPE::MESSAGER_TYPE_ONLY_SEND);
        if(m_Messager)
        {
            m_Messager->Create();
        }
    }
    virtual ~CD5MainLoopSender()
    {
        if(m_Messager)
        {
            m_Messager->Destroy();
        }
    }

    template<class T>
    bool Send(std::shared_ptr<T> pMsg, bool bRequest = false)
    {
        if(!pMsg)
        {
            return false;
        }

        if(!m_Messager)
        {
            return false;
        }

        std::string uuid = pMsg->uuid();
        if(bRequest)
        {
            uuid = pMsg->GetTypeName();
        }
        std::string strBuf = pMsg->GetTypeName() + "\t" + uuid + "\n" + pMsg->SerializeAsString();
        return m_Messager->Send(strBuf);
    }

private:
    std::shared_ptr<CD5Messager> m_Messager;
};
}
