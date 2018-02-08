#pragma once
#include "D5Messager.hpp"
#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <memory>
#include <functional>
#include <thread>
#include <atomic>
#include <algorithm>
#include "Common.h"

namespace D5
{
    const std::string END_FLAG ( "D5END#123!\n" );

    class CD5Asio :
        public CD5Messager
    {
        enum ED5_ASIO_TYPE
        {
            ASIO_TYPE_SERVICE = 0,
            ASIO_TYPE_CLIENT,
        };
    public:
        CD5Asio ( int nPort ) :
            m_eType ( ASIO_TYPE_SERVICE ),
            m_nPort ( nPort ),
            m_Work ( m_Service ),
            m_EndPoint ( boost::asio::ip::tcp::v4(), nPort ),
            m_Acceptor ( NULL ),
            m_LastBuf ( "" ),
            m_bAcceptedOrConnected ( false ),
            m_bWaiting ( false )
        {

        }

        CD5Asio ( std::string strIP, int nPort ) :
            m_eType ( ASIO_TYPE_CLIENT ),
            m_strIP ( strIP ),
            m_nPort ( nPort ),
            m_Work ( m_Service ),
            m_EndPoint ( boost::asio::ip::address::from_string ( strIP ), nPort ),
            m_Acceptor ( NULL ),
            m_LastBuf ( "" ),
            m_bAcceptedOrConnected ( false ),
            m_bWaiting ( false )
        {

        }
        virtual ~CD5Asio()
        {
        }

    protected:
        virtual void t_Create()
        {
            try
            {
                if ( m_eType == ASIO_TYPE_SERVICE )
                {
                    m_Acceptor = std::make_shared<boost::asio::ip::tcp::acceptor> ( m_Service, m_EndPoint );
                    m_Socket = std::make_shared<boost::asio::ip::tcp::socket> ( m_Service );

                    m_Accept();
                    std::thread ( boost::bind ( &boost::asio::io_service::run, &m_Service ) ).detach();
                }
                else
                {
                    m_Socket = std::make_shared<boost::asio::ip::tcp::socket> ( m_Service );

                    m_Connect();
                }
            }
            catch ( const std::exception& e )
            {
                std::cerr << e.what() << std::endl;
                m_bAcceptedOrConnected = false;
                m_bWaiting = false;
            }
        }
        virtual void t_Destory()
        {
            m_Service.stop();

            if ( m_eType == ASIO_TYPE_SERVICE )
            {
                if ( m_Socket->is_open() )
                {
                    m_Socket->close();
                }

                if ( m_Acceptor->is_open() )
                {
                    m_Acceptor->close();
                }
            }
            else
            {
                if ( m_Socket->is_open() )
                {
                    m_Socket->close();
                }
            }
        }
        virtual void t_Recieve ( std::string& str )
        {
            if ( !m_Socket )
            {
                return;
            }

            if ( !m_bAcceptedOrConnected )
            {
                if ( m_eType == ASIO_TYPE_SERVICE )
                {
                    m_Accept();
                }
                else
                {
                    m_Connect();
                }
            }

            if ( !m_bAcceptedOrConnected )
            {
                return;
            }

            try
            {
                std::string strLastBuf ( "" );

                while ( m_Socket->available() > 0  || m_LastBuf.size() > 0 )
                {
                    memset(m_buf, 0, RECEIVE_BUF_SIZE);
                    std::size_t nSize = 0;

                    if ( m_Socket->available() > 0 )
                    {
                        nSize = m_Socket->receive ( boost::asio::buffer ( m_buf, RECEIVE_BUF_SIZE ) );
                    }

                    std::string strBuf ( m_buf, nSize );
                    strBuf = m_LastBuf + strBuf;
                    std::size_t found = strBuf.find ( END_FLAG );

                    if ( found != std::string::npos )
                    {
                        strLastBuf += strBuf.substr ( 0, found );
                        str = strLastBuf;

                        if ( found + END_FLAG.size() < strBuf.size() - 1 )
                        {
                            m_LastBuf = strBuf.substr ( found + END_FLAG.size() );
                        }
                        else
                        {
                            m_LastBuf = "";
                        }

                        break;
                    }
                    else
                    {
                        strLastBuf += strBuf;
                    }

                    if ( strLastBuf.size() > RECEIVE_BUF_SIZE )
                    {
                        m_LastBuf = strLastBuf;
                        break;
                    }
                }
            }
            catch ( const std::exception& e )
            {
                std::cerr << e.what() << std::endl;
                m_bAcceptedOrConnected = false;
                m_bWaiting = false;
            }
        }
        virtual bool t_Send ( const std::string& str )
        {
            if ( !m_Socket )
            {
                return false;
            }

            if ( !m_bAcceptedOrConnected )
            {
                if ( m_eType == ASIO_TYPE_SERVICE )
                {
                    m_Accept();
                }
                else
                {
                    m_Connect();
                }
            }

            if ( !m_bAcceptedOrConnected )
            {
                return false;
            }

            try
            {
                std::string strBuf ( str );
                strBuf += END_FLAG;
                std::shared_ptr<std::vector<char> > data ( new std::vector<char> ( strBuf.size() ) );
                std::copy ( strBuf.begin(), strBuf.end(), data->begin() );

                if ( m_eType == ASIO_TYPE_SERVICE )
                {
                    m_Socket->async_send ( boost::asio::buffer ( *data ), std::bind ( [&] ( const boost::system::error_code & error, std::size_t bytes_transferred, std::shared_ptr<std::vector<char> > data ) {
                        if ( error )
                        {
                            // Attempt a connection to each endpoint in the list until we
                            // successfully establish a connection.
                            m_bAcceptedOrConnected = false;
                            m_bWaiting = false;
                        }
                    }, std::placeholders::_1, std::placeholders::_2, data ) );
                }
                else
                {
                    std::size_t bytes_transferred = m_Socket->send ( boost::asio::buffer ( *data ) );

                    if ( bytes_transferred == 0 )
                    {
                        m_bAcceptedOrConnected = false;
                        m_bWaiting = false;
                    }
                }
            }
            catch ( const std::exception& e )
            {
                std::cerr << e.what() << std::endl;
                m_bAcceptedOrConnected = false;
                m_bWaiting = false;
                return false;
            }
            return true;
        }

        virtual void t_Restart()
        {
            std::cout << "restart" << std::endl;
            if ( m_Socket->is_open() )
            {
                m_Socket->close();
            }

            m_bAcceptedOrConnected = false;
            m_bWaiting = false;
        }

        virtual bool t_IsConnect()
        {
            return m_bAcceptedOrConnected;
        }
    private:
        void m_Accept()
        {
            try
            {
                if ( m_bWaiting )
                {
                    return;
                }

                m_bWaiting = true;
                m_Socket->close();
                m_Acceptor->async_accept ( *m_Socket, [&] ( const boost::system::error_code & error ) {
                    if ( error )
                    {
                        // Attempt a connection to each endpoint in the list until we
                        // successfully establish a connection.
                        m_bAcceptedOrConnected = false;
                    }
                    else
                    {
                        m_bAcceptedOrConnected = true;
                    }

                    m_bWaiting = false;
                } );
            }
            catch ( const std::exception& e )
            {
                std::cout << e.what() << std::endl;
                m_bAcceptedOrConnected = false;
                m_bWaiting = false;
            }
        }
        void m_Connect()
        {
            try
            {
                if ( m_bWaiting )
                {
                    return;
                }

                m_bWaiting = true;
                m_Socket->close();
                m_Socket->connect ( m_EndPoint );
                m_bWaiting = false;
                m_bAcceptedOrConnected = true;
            }
            catch ( const std::exception& e )
            {
                std::cout << e.what() << std::endl;
                m_bAcceptedOrConnected = false;
                m_bWaiting = false;
            }
        }

    private:
        ED5_ASIO_TYPE m_eType;
        std::string m_strIP;
        int m_nPort;
        boost::asio::io_service m_Service;
        boost::asio::io_service::work m_Work;
        boost::asio::ip::tcp::endpoint m_EndPoint;
        std::shared_ptr<boost::asio::ip::tcp::acceptor> m_Acceptor;
        std::shared_ptr<boost::asio::ip::tcp::socket> m_Socket;
        std::string m_LastBuf;
        std::atomic<bool> m_bAcceptedOrConnected;
        std::atomic<bool> m_bWaiting;
        char m_buf[RECEIVE_BUF_SIZE];
    };
}

