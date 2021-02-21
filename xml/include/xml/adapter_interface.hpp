#ifndef __ADAPTER_INTERFACE_H__
#define __ADAPTER_INTERFACE_H__
#include <string>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/foreach.hpp>

namespace xml
{
    class AdapterInterface
    {
    public:
        virtual std::string& serialize() = 0; // pure virtual

    private:

    };
} // namespace xml

#endif // __ADAPTER_INTERFACE_H__