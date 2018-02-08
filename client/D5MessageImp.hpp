#pragma once
#include "D5Message.hpp"
namespace D5
{
    class CMessageLoginRequest : public CD5Message
    {
    public:
        CMessageLoginRequest() : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_LOGIN_REQUEST ), m_strUser ( "" ), m_strPwd ( "" )
        {

        }
        CMessageLoginRequest ( const std::string& strUser, const std::string& strPwd ) : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_LOGIN_REQUEST ), m_strUser ( strUser ), m_strPwd ( strPwd )
        {

        }

        virtual ~CMessageLoginRequest()
        {

        }
        std::string GetUser()
        {
            return m_strUser;
        }

        void SetUser ( const std::string& strUser )
        {
            m_strUser = strUser;
        }

        std::string GetPwd()
        {
            return m_strPwd;
        }

        void SetPwd ( const std::string& strPwd )
        {
            m_strPwd = strPwd;
        }
    protected:
        virtual bool t_Parse ( const boost::property_tree::wptree& parser )
        {
            std::wstring wStr = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( USER ) );
            m_strUser = std::string ( wStr.begin(), wStr.end() );
            wStr = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( PASSWORD ) );
            m_strPwd = std::string ( wStr.begin(), wStr.end() );
            return true;
        }

        virtual bool t_Generate ( boost::property_tree::ptree& parser )
        {
            parser.put ( USER, m_strUser );
            parser.put ( PASSWORD, m_strPwd );
            return true;
        }
    private:
        std::string m_strUser;
        std::string m_strPwd;
    };

    class CMessageLoginResponse : public CD5Message
    {
    public:
        CMessageLoginResponse() : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_LOGIN_RESPONSE ), m_bState ( false )
        {

        }
        CMessageLoginResponse ( bool bState ) : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_LOGIN_RESPONSE ), m_bState ( bState )
        {

        }

        virtual ~CMessageLoginResponse()
        {

        }

        bool GetState()
        {
            return m_bState;
        }

        void SetState ( bool bState )
        {
            m_bState = bState;
        }

        std::string GetUID()
        {
            return m_strUID;
        }

        void SetUID ( const std::string& strUID )
        {
            m_strUID = strUID;
        }

        std::string GetToken()
        {
            return m_strToken;
        }

        void SetToken ( const std::string& strToken )
        {
            m_strToken = strToken;
        }

        std::string GetCompanyID()
        {
            return m_strCompanyID;
        }

        void SetCompanyID ( const std::string& strCompanyID )
        {
            m_strCompanyID = strCompanyID;
        }

        std::string GetRoleID()
        {
            return m_strRoleID;
        }

        void SetRoleID ( const std::string& strRoleID )
        {
            m_strRoleID = strRoleID;
        }
    protected:
        virtual bool t_Parse ( const boost::property_tree::wptree& parser )
        {
            m_bState = parser.get<bool> ( CCommonTools::instance()->s2ws ( STATE ) );
            std::wstring wStrUID = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( UID ) );
            m_strUID = std::string ( wStrUID.begin(), wStrUID.end() );
            std::wstring wStrToken = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( TOKEN ) );
            m_strToken = std::string ( wStrToken.begin(), wStrToken.end() );
            std::wstring wStrCompanyID = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( COMPANYID ) );
            m_strCompanyID = std::string ( wStrCompanyID.begin(), wStrCompanyID.end() );
            std::wstring wStrRoleID = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( ROLEID ) );
            m_strRoleID = std::string ( wStrRoleID.begin(), wStrRoleID.end() );
            return true;
        }

        virtual bool t_Generate ( boost::property_tree::ptree& parser )
        {
            parser.put ( STATE, m_bState );
            parser.put ( UID, m_strUID );
            parser.put ( TOKEN, m_strToken );
            parser.put ( COMPANYID, m_strCompanyID );
            parser.put ( ROLEID, m_strRoleID );
            return true;
        }
    private:
        bool m_bState;
        std::string m_strUID;
        std::string m_strToken;
        std::string m_strCompanyID;
        std::string m_strRoleID;
    };



    ///////////////////////////////////////////////////////////////////////////////////////////
    ///
    /// \brief The CMessageDownloadRequest class
    ///
    class CMessageDownloadRequest : public CD5Message
    {
    public:
        CMessageDownloadRequest()
            : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_DOWNLOAD_REQUEST )
            , m_strUrl ( "" )
            , m_strPath ( "" )
        {}

        CMessageDownloadRequest ( const std::string &strUrl, const std::string &strPath )
            : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_DOWNLOAD_REQUEST )
            , m_strUrl ( strUrl )
            , m_strPath ( strPath )
        {}

        virtual ~CMessageDownloadRequest()
        {}

        std::string GetUrl()
        {
            return m_strUrl;
        }

        void SetUrl ( const std::string &url )
        {
            m_strUrl = url;
        }

        std::string GetPath()
        {
            return m_strPath;
        }

        void setPath ( const std::string &path )
        {
            m_strPath = path;
        }

    protected:
        virtual bool t_Parse ( const boost::property_tree::wptree& parser )
        {
            std::wstring wStr = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( URL ) );
            m_strUrl = std::string ( wStr.begin(), wStr.end() );
            wStr = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( PATH ) );
            m_strPath = std::string ( wStr.begin(), wStr.end() );
            return true;
        }

        virtual bool t_Generate ( boost::property_tree::ptree& parser )
        {
            parser.put ( URL, m_strUrl );
            parser.put ( PATH, m_strPath );
            return true;
        }

    private:
        std::string m_strUrl;
        std::string m_strPath;
    };

    ///
    /// \brief The CMessageDownloadResponse class
    ///
    class CMessageDownloadResponse : public CD5Message
    {
    public:
        CMessageDownloadResponse()
            : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_DOWNLOAD_RESPONSE )
            , m_strUrl ( "" )
            , m_bState ( false )
        {}

        CMessageDownloadResponse ( const std::string &url, bool state )
            : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_DOWNLOAD_RESPONSE )
            , m_strUrl ( url )
            , m_bState ( state )
        {}

        virtual ~CMessageDownloadResponse()
        {}

        std::string GetUrl()
        {
            return m_strUrl;
        }

        void SetUrl ( const std::string &url )
        {
            m_strUrl = url;
        }

        bool GetState()
        {
            return m_bState;
        }

        void SetState ( bool state )
        {
            m_bState = state;
        }

    protected:
        virtual bool t_Parse ( const boost::property_tree::wptree &parser )
        {
            std::wstring wStr = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( URL ) );
            m_strUrl = std::string ( wStr.begin(), wStr.end() );
            m_bState = parser.get<bool> ( CCommonTools::instance()->s2ws ( STATE ) );
            return true;
        }

        virtual bool t_Generate ( boost::property_tree::ptree &parser )
        {
            parser.put ( URL, m_strUrl );
            parser.put ( STATE, m_bState );
            return true;
        }

    private:
        std::string m_strUrl;
        bool m_bState;
    };

    ///
    /// \brief The CMessageDownloadProcessResponse class
    ///
    class CMessageDownloadProcessResponse : public CD5Message
    {
    public:
        CMessageDownloadProcessResponse()
            : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_DOWNLOAD_PROCESS )
            , m_strUrl ( "" )
            , m_ulSize ( 0 )
            , m_ulTotal ( 0 )
        {}

        CMessageDownloadProcessResponse ( const std::string &url, unsigned long int size, unsigned long int total )
            : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_DOWNLOAD_PROCESS )
            , m_strUrl ( url )
            , m_ulSize ( size )
            , m_ulTotal ( total )
        {

        }

        std::string GetUrl()
        {
            return m_strUrl;
        }

        void SetUrl ( const std::string &url )
        {
            m_strUrl = url;
        }

        unsigned long int GetSize()
        {
            return m_ulSize;
        }

        void SetSize ( unsigned long int size )
        {
            m_ulSize = size;
        }

        unsigned long int GetTotal()
        {
            return m_ulTotal;
        }

        void SetTotal ( unsigned long int total )
        {
            m_ulTotal = total;
        }

    protected:
        virtual bool t_Parse ( const boost::property_tree::wptree &parser )
        {
            std::wstring wStr = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( URL ) );
            m_strUrl = std::string ( wStr.begin(), wStr.end() );
            m_ulSize = parser.get<unsigned long int> ( CCommonTools::instance()->s2ws ( SIZE ) );
            m_ulTotal = parser.get<unsigned long int> ( CCommonTools::instance()->s2ws ( TOTAL ) );
            return true;
        }

        virtual bool t_Generate ( boost::property_tree::ptree &parser )
        {
            parser.put ( URL, m_strUrl );
            parser.put ( SIZE, m_ulSize );
            parser.put ( TOTAL, m_ulTotal );
            return true;
        }

    private:
        std::string m_strUrl;
        unsigned long int m_ulSize;
        unsigned long int m_ulTotal;
    };


    ///////////////////////////////////////////////////////////////////////////////////////////////

    ///
    /// \brief The CMessageUploadRequest class
    ///
    class CMessageUploadRequest : public CD5Message
    {
    public:
        CMessageUploadRequest()
            : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_UPLOAD_REQUEST )
            , m_strUrl ( "" )
            , m_strPath ( "" )
        {}

        CMessageUploadRequest ( const std::string &url, const std::string &path )
            : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_UPLOAD_REQUEST )
            , m_strUrl ( url )
            , m_strPath ( path )
        {}

        std::string GetUrl()
        {
            return m_strUrl;
        }

        void SetUrl ( const std::string &url )
        {
            m_strUrl = url;
        }

        std::string GetPath()
        {
            return m_strPath;
        }

        void SetPath ( const std::string &path )
        {
            m_strPath = path;
        }

    protected:
        virtual bool t_Parse ( const boost::property_tree::wptree &parser )
        {
            std::wstring wStr = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( URL ) );
            m_strUrl = std::string ( wStr.begin(), wStr.end() );
            wStr = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( PATH ) );
            m_strPath = std::string ( wStr.begin(), wStr.end() );

            return true;
        }

        virtual bool t_Generate ( boost::property_tree::ptree &parser )
        {
            parser.put ( URL, m_strUrl );
            parser.put ( PATH, m_strPath );
            return true;
        }

    private:
        std::string m_strUrl;
        std::string m_strPath;
    };

    ///
    /// \brief The CMessageUploadResponse class
    ///
    class CMessageUploadResponse : public CD5Message
    {
    public:
        CMessageUploadResponse()
            : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_UPLOAD_RESPONSE )
            , m_strUrl ( "" )
            , m_bState ( false )
        {}

        CMessageUploadResponse ( const std::string &url, bool state )
            : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_UPLOAD_RESPONSE )
            , m_strUrl ( url )
            , m_bState ( state )
        {}

        std::string GetUrl()
        {
            return m_strUrl;
        }

        void SetUrl ( const std::string &url )
        {
            m_strUrl = url;
        }

        bool GetState()
        {
            return m_bState;
        }

        void SetState ( bool state )
        {
            m_bState = state;
        }

    protected:
        virtual bool t_Parse ( const boost::property_tree::wptree &parser )
        {
            std::wstring wStr = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( URL ) );
            m_strUrl = std::string ( wStr.begin(), wStr.end() );
            m_bState = parser.get<bool> ( CCommonTools::instance()->s2ws ( STATE ) );

            return true;
        }

        virtual bool t_Generate ( boost::property_tree::ptree &parser )
        {
            parser.put ( URL, m_strUrl );
            parser.put ( STATE, m_bState );
            return true;
        }

    private:
        std::string m_strUrl;
        bool m_bState;

    };

    ///
    /// \brief The CMessageUploadProcessResponse class
    ///
    class CMessageUploadProcessResponse : public CD5Message
    {
    public:
        CMessageUploadProcessResponse()
            : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_UPLOAD_PROCESS )
            , m_strUrl ( "" )
            , m_ulSize ( 0 )
            , m_ulTotal ( 0 )
        {}

        CMessageUploadProcessResponse ( const std::string &url, unsigned long int size, unsigned long int total )
            : CD5Message ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_UPLOAD_PROCESS )
            , m_strUrl ( url )
            , m_ulSize ( size )
            , m_ulTotal ( total )
        {}

        std::string GetUrl()
        {
            return m_strUrl;
        }

        void SetUrl ( const std::string &url )
        {
            m_strUrl = url;
        }

        unsigned long int GetSize()
        {
            return m_ulSize;
        }

        void SetSize ( unsigned long int size )
        {
            m_ulSize = size;
        }

        unsigned long int GetTotal()
        {
            return m_ulTotal;
        }

        void SetTotal ( unsigned long int total )
        {
            m_ulTotal = total;
        }

    protected:
        virtual bool t_Parse ( const boost::property_tree::wptree &parser )
        {
            std::wstring wStr = parser.get<std::wstring> ( CCommonTools::instance()->s2ws ( URL ) );
            m_strUrl = std::string ( wStr.begin(), wStr.end() );
            m_ulSize = parser.get<unsigned long int> ( CCommonTools::instance()->s2ws ( SIZE ) );
            m_ulTotal = parser.get<unsigned long int> ( CCommonTools::instance()->s2ws ( TOTAL ) );
            return true;
        }

        virtual bool t_Generate ( boost::property_tree::ptree &parser )
        {
            parser.put ( URL, m_strUrl );
            parser.put ( SIZE, m_ulSize );
            parser.put ( TOTAL, m_ulTotal );
            return true;
        }

    private:
        std::string m_strUrl;
        unsigned long int m_ulSize;
        unsigned long int m_ulTotal;
    };
	
	
    ///////////////////////////////////////////////////////////////////////////////////////////////

    ///
    /// \brief The CMessageTerminateRequest class
    ///
    class CMessageTerminateRequest : public CD5Message
    {
    public:
        CMessageTerminateRequest()
            : CD5Message( ED5_MESSAGE_TYPE::MESSAGE_TYPE_TERMINATE_REQUEST )
        {}
    };

    class CMessageTerminateResponse : public CD5Message
    {
    public:
        CMessageTerminateResponse()
            : CD5Message( ED5_MESSAGE_TYPE::MESSAGE_TYPE_TERMINATE_RESPONSE )
        {}
    };
}
