#pragma once
#include "D5Message.hpp"
namespace D5
{
	class CMessageTest : public CD5Message
	{
	public:
		CMessageTest() :CD5Message(ED5_MESSAGE_TYPE::MESSAGE_TYPE_TEST), m_Name("")
		{

		}
		CMessageTest(const std::string& strName) :CD5Message(ED5_MESSAGE_TYPE::MESSAGE_TYPE_TEST), m_Name(strName)
		{

		}

		virtual ~CMessageTest()
		{

		}
		std::string GetName()
		{
			return m_Name;
		}

		void SetName(const std::string& strName)
		{
			m_Name = strName;
		}

	protected:
		virtual bool t_Parse(const boost::property_tree::wptree& parser)
		{
			std::wstring wStr = parser.get<std::wstring>(CCommonTools::instance()->s2ws(NAME));
			m_Name = std::string(wStr.begin(), wStr.end());
			return true;
                }

		virtual bool t_Generate(boost::property_tree::ptree& parser)
		{
			parser.put(NAME, m_Name);
			return true;
                }
	private:
		std::string m_Name;
	};
}
