#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include "D5Service.hpp"
#include "D5MessageTest.hpp"
#include "D5MessageImp.hpp"
#include "D5Client.hpp"
#include "D5MainLoop.hpp"

namespace D5
{
    class CGenerateMsg
    {
    public:
        std::shared_ptr<CD5Message> operator() ( int type, const std::string& strBuf )
        {
            switch ( type )
            {
            case MESSAGE_TYPE_TEST:
            {
                auto msg = CD5Message::GenerateMessage<CMessageTest>();
                msg->Parse ( strBuf );
                return msg;
            }

            case MESSAGE_TYPE_LOGIN_REQUEST:
            {
                auto msg = CD5Message::GenerateMessage<CMessageLoginRequest>();
                msg->Parse ( strBuf );
                return msg;
            }

            case MESSAGE_TYPE_LOGIN_RESPONSE:
            {
                auto msg = CD5Message::GenerateMessage<CMessageLoginResponse>();
                msg->Parse ( strBuf );
                return msg;
            }

            case MESSAGE_TYPE_DOWNLOAD_REQUEST:
            {
                auto msg = CD5Message::GenerateMessage<CMessageDownloadRequest>();
                msg->Parse ( strBuf );
                return msg;
            }

            case MESSAGE_TYPE_DOWNLOAD_RESPONSE:
            {
                auto msg = CD5Message::GenerateMessage<CMessageDownloadResponse>();
                msg->Parse ( strBuf );
                return msg;
            }

            case MESSAGE_TYPE_DOWNLOAD_PROCESS:
            {
                auto msg = CD5Message::GenerateMessage<CMessageDownloadProcessResponse>();
                msg->Parse ( strBuf );
                return msg;
            }

            case MESSAGE_TYPE_UPLOAD_REQUEST:
            {
                auto msg = CD5Message::GenerateMessage<CMessageUploadRequest>();
                msg->Parse ( strBuf );
                return msg;
            }

            case MESSAGE_TYPE_UPLOAD_RESPONSE:
            {
                auto msg = CD5Message::GenerateMessage<CMessageUploadResponse>();
                msg->Parse ( strBuf );
                return msg;
            }

            case MESSAGE_TYPE_UPLOAD_PROCESS:
            {
                auto msg = CD5Message::GenerateMessage<CMessageUploadProcessResponse>();
                msg->Parse ( strBuf );
                return msg;
            }

            case MESSAGE_TYPE_TERMINATE_REQUEST:
            {
                auto msg = CD5Message::GenerateMessage<CMessageTerminateRequest>();
                msg->Parse ( strBuf );
                return msg;
            }

            case MESSAGE_TYPE_TERMINATE_RESPONSE:
            {
                auto msg = CD5Message::GenerateMessage<CMessageTerminateResponse>();
                msg->Parse ( strBuf );
                return msg;
            }

            default:
                return std::make_shared<CD5Message>();
            }
        }
    };

    class CD5ImmerseService : public CD5Service
    {
    public:
        CD5ImmerseService() : CD5Service(SOCKET_PORT)
        {
        }
        virtual ~CD5ImmerseService()
        {
        }
    protected:
        virtual std::shared_ptr<CD5Message> t_GenerateMsg ( int type, const std::string& strBuf )
        {
            CGenerateMsg msg;
            return msg ( type, strBuf );
        }
    };

    class CD5ImmerseClient : public CD5Client
    {
    public:
        CD5ImmerseClient() : CD5Client(SOCKET_PORT)
        {
        }
        virtual ~CD5ImmerseClient()
        {
        }
    protected:
        virtual std::shared_ptr<CD5Message> t_GenerateMsg ( int type, const std::string& strBuf )
        {
            CGenerateMsg msg;
            return msg ( type, strBuf );
        }
    };

    class CD5MainLoopSender : public CD5Client
    {
    public:
        CD5MainLoopSender ( const std::string& strMQ ) : CD5Client ( strMQ )
        {
            this->Create();
        }
        virtual ~CD5MainLoopSender()
        {
            this->Destroy();
        }
    protected:
        virtual std::shared_ptr<CD5Message> t_GenerateMsg ( int type, const std::string& strBuf )
        {
            CGenerateMsg msg;
            return msg ( type, strBuf );
        }
    };

    class CD5ImmerseMainLoop : public CD5MainLoop
    {
    public:
        CD5ImmerseMainLoop ( const std::string& strMQ ) : CD5MainLoop ( strMQ )
        {
        }
        CD5ImmerseMainLoop() : CD5MainLoop ( CCommonTools::instance()->GenerateUUID() )
        {
        }
        virtual ~CD5ImmerseMainLoop()
        {
        }
    protected:
        virtual std::shared_ptr<CD5Message> t_GenerateMsg ( int type, const std::string& strBuf )
        {
            CGenerateMsg msg;
            return msg ( type, strBuf );
        }
    };
}
