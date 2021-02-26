#ifndef __ADAPTER_H__
#define __ADAPTER_H__
#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>

namespace xml
{
    enum class ParseError : int8_t
    {
        NONE,
        INCOMPLETE,
        VALUE_TYPE,
        VALUE_BOUNDS
    };

    class Adapter
    {
    public:
        virtual void parse(const std::string &xml) = 0; // pure virtual
        virtual ParseError translate(boost::property_tree::ptree &tree) = 0;    // pure virtual
        std::string serialize(boost::property_tree::ptree &tree)
        {
            std::stringstream ss;
            boost::property_tree::xml_parser::write_xml(ss, tree);
            return ss.str();
        };
        boost::property_tree::ptree treeify (const std::string &xml)
        {
            std::stringstream ss;
            ss << xml;
            boost::property_tree::ptree pt;
            boost::property_tree::xml_parser::read_xml(ss, pt);
            return pt;
        };
    };
} // namespace xml

#endif // __ADAPTER_H__