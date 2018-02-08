#pragma once
#include <iostream>
#include <string>

namespace D5
{
    class CD5Messager
    {
    public:
        CD5Messager()
        {
        }
        virtual ~CD5Messager()
        {
        }
        void Create()
        {
            t_Create();
        }
        void Destroy()
        {
            t_Destory();
        }
        void Recieve ( std::string& str )
        {
            t_Recieve ( str );
        }
        bool Send ( const std::string& str )
        {
            return t_Send ( str );
        }
        void Restart()
        {
            t_Restart();
        }
        bool IsConnect()
        {
            return t_IsConnect();
        }
    protected:
        virtual void t_Create() = 0;
        virtual void t_Destory() = 0;
        virtual void t_Recieve ( std::string& str ) = 0;
        virtual bool t_Send ( const std::string& str ) = 0;
        virtual void t_Restart() = 0;
        virtual bool t_IsConnect() = 0;
    };
}
