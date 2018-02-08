#pragma once
#include <iostream>
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/program_options/detail/utf8_codecvt_facet.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <sstream>
#include <codecvt>
#include "Common.h"

namespace D5
{
    class CD5Message
    {
    public:
        CD5Message() : m_type ( ED5_MESSAGE_TYPE::MESSAGE_TYPE_INVALID ), m_strUUID ( "" )
        {
        }
        CD5Message ( int type ) : m_type ( type ), m_strUUID ( "" )
        {

        }
        virtual ~CD5Message()
        {
        }

        int type()
        {
            return m_type;
        }

        void SetUUID ( const std::string& strUUID )
        {
            m_strUUID = strUUID;
        }

        std::string GetUUID()
        {
            return m_strUUID;
        }

        void GenerateUUID()
        {
            if ( m_strUUID != "" )
            {
                return;
            }

            boost::uuids::random_generator rgen;
            boost::uuids::uuid u4 = rgen();
            m_strUUID = boost::uuids::to_string ( u4 );
        }

        bool Parse ( const std::string& jsonStr )
        {
            if ( jsonStr.size() <= 0 )
            {
                return false;
            }

            std::locale oldLocale;
            std::locale utf8Locale ( oldLocale,
                                     new boost::program_options::detail::utf8_codecvt_facet() );

            std::wstringstream ss;
            ss.imbue ( utf8Locale );
            ss.str ( CCommonTools::instance()->s2ws ( jsonStr ).c_str() );

            boost::property_tree::wptree  parser;
            boost::property_tree::json_parser::read_json ( ss, parser );
            boost::property_tree::wptree d5 = parser.get_child ( CCommonTools::instance()->s2ws ( ROOTNAME ) );
            boost::property_tree::wptree p = d5.front().second;
            m_type = p.get<int> ( CCommonTools::instance()->s2ws ( TYPE ) );
            std::wstring wStrUUID = p.get<std::wstring> ( CCommonTools::instance()->s2ws ( D5_UUID ) );
            m_strUUID = std::string ( wStrUUID.begin(), wStrUUID.end() );

            return t_Parse ( p );
        }

        std::string Generate()
        {
            boost::property_tree::ptree pt_root;
            boost::property_tree::ptree children;
            boost::property_tree::ptree child;
            child.put ( TYPE, m_type );
            child.put ( D5_UUID, m_strUUID );
            t_Generate ( child );
            children.push_back ( std::make_pair ( "", child ) );
            pt_root.add_child ( ROOTNAME, children );
            std::stringstream ss;
            boost::property_tree::write_json ( ss, pt_root );
            std::string s = ss.str();
            return s;
        }

        template<class T>
        static std::shared_ptr<T> GenerateMessage()
        {
            return std::make_shared<T>();
        }
    protected:
        virtual bool t_Parse ( const boost::property_tree::wptree& parser ) {
            return true;
        }
        virtual bool t_Generate ( boost::property_tree::ptree& parser ) {
            return true;
        }

    private:
        int m_type;
        std::string m_strUUID;
    };
}

