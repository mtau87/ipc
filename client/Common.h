#pragma once
#include <iostream>
#include <string>
#include <memory>
#include <mutex>
#include <locale>
#include <codecvt>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/function.hpp>
#include <boost/noncopyable.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/algorithm/string.hpp>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>

#ifndef BOOST_INTERPROCESS_SHARED_DIR_PATH
#define BOOST_INTERPROCESS_SHARED_DIR_PATH "./"
#endif

namespace D5
{
enum MESSAGE_STATE
{
    MESSAGE_STATE_INVALID = -1,
    MESSAGE_STATE_OK = 0,
    MESSAGE_STATE_SUCCESS = 200,
    MESSAGE_STATE_FAILED = 401,
    MESSAGE_STATE_DOWNLOAD_FILE_NOTEXIST = 402,
    MESSAGE_STATE_NEED_LOGIN = 10000,
    MESSAGE_STATE_PARAMETER_ERROR = 10001,
    MESSAGE_STATE_DB_BEGIN = 20000,
    MESSAGE_STATE_DB_ERROR,
    MESSAGE_STATE_DB_ERROR_LOCAL_PLANGROUP_DELETE,
    MESSAGE_STATE_DB_ERROR_LOCAL_PLANDESIGN_DELETE,
    MESSAGE_STATE_DB_ERROR_LOCAL_PRODUCT_DELETE,
    MESSAGE_STATE_DB_ERROR_LOCAL_MATERIAL_DELETE,
    MESSAGE_STATE_DB_ERROR_LOCAL_PLANDESIGN_SYNCSTATUS,
    MESSAGE_STATE_DB_ERROR_LOCAL_PRODUCT_SYNCSTATUS,
    MESSAGE_STATE_DB_ERROR_LOCAL_GET_DEPENDENTFILES,
    MESSAGE_STATE_DOWNLOAD_FILES,
    MESSAGE_STATE_UPLOAD_FILES,
    MESSAGE_STATE_DB_ERROR_DEFAULT_PRODUCT,
    MESSAGE_STATE_MATERIAL_IN_DOWNLOADING_OR_UPLOADING,
    MESSAGE_STATE_PLANDESIGN_IN_DOWNLOADING_OR_UPLOADING,
    MESSAGE_STATE_PRODUCT_IN_DOWNLOADING_OR_UPLOADING,
    MESSAGE_STATE_CAD_CONVERTER_ERROR,
    MESSAGE_STATE_SKP_LOADER_ERROR,
    MESSAGE_STATE_FILES_LATEST,
};

enum PLAN_DESIGN_SOURCE_TYPE
{
    NORMAL = 0,
    SKP,
};

enum SAVE_STATE
{
    CLOUD = 0,
    LOCAL = 1,
};

enum
{
    SOCKET_PORT = 8888,
    RECEIVE_BUF_SIZE = 8,
    //RECEIVE_BUF_SIZE = 1024000*2,
    MAX_THREADS = 8,
};
enum ED5_CLIENT_TYPE
{
    CLIENT_TYPE_IPC = 0,
    CLIENT_TYPE_ASIO,
};
enum ED5_MAINLOOP_TYPE
{
    MAINLOOP_TYPE_IPC = 0,
    MAINLOOP_TYPE_ASIO
};
enum ED5_MESSAGE_TYPE
{
    MESSAGE_TYPE_INVALID = -1,
    MESSAGE_TYPE_TEST = 0,
    MESSAGE_TYPE_TEST1 = 1,
    MESSAGE_TYPE_LOGIN_REQUEST = 100,
    MESSAGE_TYPE_LOGIN_RESPONSE,
    MESSAGE_TYPE_DOWNLOAD_REQUEST,
    MESSAGE_TYPE_DOWNLOAD_RESPONSE,
    MESSAGE_TYPE_DOWNLOAD_PROCESS,
    MESSAGE_TYPE_UPLOAD_REQUEST,
    MESSAGE_TYPE_UPLOAD_RESPONSE,
    MESSAGE_TYPE_UPLOAD_PROCESS,
    MESSAGE_TYPE_TERMINATE_REQUEST,
    MESSAGE_TYPE_TERMINATE_RESPONSE
};

const std::string D5_UUID("uuid");
const std::string TYPE("type");
const std::string ROOTNAME("d5");
const std::string NAME("name");
const std::string USER("user");
const std::string PASSWORD("password");
const std::string STATE("state");
const std::string URL("url");
const std::string PATH("path");
const std::string SIZE("size");
const std::string TOTAL("total");
const std::string UID("uid");
const std::string TOKEN("token");
const std::string COMPANYID("companyid");
const std::string ROLEID("roleid");

const std::string D5_VIEW_SERVICE_NAME("D5_VIEW_SERVICE.mem");
const std::string D5_SERVICE_NAME("D5_SERVICE.mem");
const std::string D5_IMMERSE_NAME("D5_FUSION.mem");
const std::string D5_CLIENT_NAME("D5_CLIENT.mem");

const std::string D5_SOCKET_PORT("SOCKET_PORT.mem");

template <class T>
class CSingleton
{
public:
    static inline T* instance()
    {
        if(0 == m_instance.get())
        {
            std::lock_guard<std::mutex> lck(m_mtx);

            if(0 == m_instance.get())
            {
                m_instance.reset(new T);
            }
        }

        return m_instance.get();
    }

    static inline void unInstance()
    {
        if(NULL != m_instance.get())
        {
            std::lock_guard<std::mutex> lck(m_mtx);

            m_instance.reset();
        }
    }

protected:
    CSingleton(void) {}
    ~CSingleton(void) {}
private:
    CSingleton(const CSingleton&) {}
    CSingleton & operator= (const CSingleton &) {}

    static std::unique_ptr<T> m_instance;
    static std::mutex m_mtx;
};
template <class T>
std::unique_ptr<T> CSingleton<T>::m_instance;

template <class T>
std::mutex CSingleton<T>::m_mtx;

class CCommonTools: public CSingleton<CCommonTools>
{
public:
    std::string GenerateUUID()
    {
        boost::uuids::random_generator rgen;
        boost::uuids::uuid u4 = rgen();
        std::string uuid = boost::uuids::to_string(u4);
        boost::erase_all(uuid, "-");
        return uuid;
    }

    std::wstring s2ws(const std::string& str)
    {
        std::wstring wstr(str.length(), L' ');
        std::copy(str.begin(), str.end(), wstr.begin());
        return wstr;
    }

    std::string ws2s(const std::wstring& wstr)
    {
        std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
        return converter.to_bytes(wstr);
    }

    void UTF_8ToUnicode(wchar_t* pOut, char *pText)
    {
        char* uchar = (char *) pOut;
        uchar[1] = ((pText[0] & 0x0F) << 4) + ((pText[1] >> 2) & 0x0F);
        uchar[0] = ((pText[1] & 0x03) << 6) + (pText[2] & 0x3F);
        return;
    }

    void UnicodeToUTF_8(char* pOut, wchar_t* pText)
    {
        // 注意 WCHAR高低字的顺序,低字节在前，高字节在后
        char* pchar = (char *) pText;
        pOut[0] = (0xE0 | ((pchar[1] & 0xF0) >> 4));
        pOut[1] = (0x80 | ((pchar[1] & 0x0F) << 2)) + ((pchar[0] & 0xC0) >> 6);
        pOut[2] = (0x80 | (pchar[0] & 0x3F));
        return;
    }

    ::google::protobuf::Message* CreateMessage(const std::string& typeName)
    {
        ::google::protobuf::Message* message = NULL;
        const ::google::protobuf::Descriptor* descriptor = ::google::protobuf::DescriptorPool::generated_pool()->FindMessageTypeByName(typeName);

        if(descriptor)
        {
            const ::google::protobuf::Message* prototype = ::google::protobuf::MessageFactory::generated_factory()->GetPrototype(descriptor);

            if(prototype)
            {
                message = prototype->New();
            }
        }

        return message;
    }
};

class Callback : boost::noncopyable
{
public:
    enum
    {
        CALLBACK_FUN = 0,
        CALLBACK_VALUE
    };
    virtual ~Callback() {};
    virtual void onMessageProtobuf(std::shared_ptr<::google::protobuf::Message> message) const = 0;
    virtual void onMessage(const std::string& strMsg) const = 0;
    virtual int getType() const = 0;
};

template <typename T>
class CallbackT : public Callback
{
public:
    typedef boost::function<void(const std::shared_ptr<T> message, void*)> ProtobufMessageCallback;

    CallbackT(const ProtobufMessageCallback& callback, void* data, const std::string& uuid = std::string(""))
        : callback_(callback), data_(data), uuid_(uuid)
    {
    }

    virtual void onMessageProtobuf(std::shared_ptr<::google::protobuf::Message> message) const
    {
        std::shared_ptr<T> t = std::static_pointer_cast<T>(message);
        if(t)
        {
            callback_(t, data_);
        }
    }

    virtual void onMessage(const std::string& strMsg) const
    {
        return;
    }

    virtual int getType() const
    {
        return Callback::CALLBACK_FUN;
    }

    bool operator==(const CallbackT<T>& other) const
    {
        if(callback_ == other.callback_ && data_ == other.data_ && uuid_ == other.uuid_)
        {
            return true;
        }
        return false;
    }
private:
    ProtobufMessageCallback callback_;
    void* data_;
    std::string uuid_;
};

class CallbackV : public Callback
{
public:
    typedef boost::function<void(const std::string& strObj, const std::string& strFun, const std::string& strMsg, void*)> ValueMessageCallback;
    CallbackV(const ValueMessageCallback& callback, void* data, const std::string& uuid, const std::string& obj, const std::string& fun)
        : callback_(callback), data_(data), uuid_(uuid), obj_(obj), fun_(fun)
    {
    }

    virtual void onMessageProtobuf(std::shared_ptr<::google::protobuf::Message> message) const
    {
    }

    virtual void onMessage(const std::string& strMsg) const
    {
        callback_(obj_, fun_, strMsg, data_);
    }

    virtual int getType() const
    {
        return Callback::CALLBACK_VALUE;
    }
private:
    ValueMessageCallback callback_;
    void* data_;
    std::string uuid_;
    std::string obj_;
    std::string fun_;
};

typedef ::google::protobuf::Message CD5Message;
}
