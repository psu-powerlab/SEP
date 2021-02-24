#ifndef __ACTIVE_POWER_ADAPTER_H__
#define __ACTIVE_POWER_ADAPTER_H__
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <sep/active_power.hpp>
#include "adapter_interface.hpp"

namespace xml
{
    class ActivePowerAdapter : public AdapterInterface
    {
    public:
        ActivePowerAdapter(const sep::ActivePower& active_power);
        ActivePowerAdapter(const std::string& active_power_str);
        ~ActivePowerAdapter();
        std::string serialize ();
        boost::property_tree::ptree getTree ();
    private:
        boost::property_tree::ptree tree_;
    };
} // namespace xml

#endif // __ACTIVE_POWER_ADAPTER_H__