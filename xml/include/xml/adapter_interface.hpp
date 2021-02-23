#ifndef __ADAPTER_INTERFACE_H__
#define __ADAPTER_INTERFACE_H__
#include <string>
#include <boost/property_tree/ptree.hpp>

namespace xml
{
    class AdapterInterface
    {
    public:
        virtual std::string serialize() = 0; // pure virtual
        virtual boost::property_tree::ptree getTree() = 0; // pure virtual
    };
} // namespace xml

#endif // __ADAPTER_INTERFACE_H__