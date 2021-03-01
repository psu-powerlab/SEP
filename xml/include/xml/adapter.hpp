#ifndef __ADAPTER_H__
#define __ADAPTER_H__
#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

namespace xml
{
    class Adapter
    {
    public:
        // Treeify(): will take the internal model and convert it into a ptree
        // so that the child nodes can be combined and then serialized
        virtual boost::property_tree::ptree Treeify() = 0; // pure virtual
        // Translate(ptree): will convert a property tree into its the
        // models member varialbes that it has a pointer to.
        virtual void Translate(const boost::property_tree::ptree &tree) = 0; // pure virtual

        std::string Serialize(const boost::property_tree::ptree &tree)
        {
            std::stringstream ss;
            boost::property_tree::xml_parser::write_xml(ss, tree);
            return ss.str();
        };

        boost::property_tree::ptree Parse(const std::string &xml)
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