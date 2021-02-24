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
        virtual ParseError parse(const std::string& xml) = 0;                    // pure virtual
        std::string serialize(){
            std::stringstream ss;
            boost::property_tree::xml_parser::write_xml(ss, tree_);
            return ss.str();
        };
        boost::property_tree::ptree getTree() {
            return tree_
        };
    private:
        boost::property_tree::ptree tree_;
    };
} // namespace xml

#endif // __ADAPTER_H__