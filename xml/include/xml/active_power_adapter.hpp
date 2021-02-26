#ifndef __ACTIVE_POWER_ADAPTER_H__
#define __ACTIVE_POWER_ADAPTER_H__
#include <string>
#include <memory>
#include <boost/property_tree/ptree.hpp>
#include <sep/active_power.hpp>
#include "adapter.hpp"

namespace xml
{
    class ActivePowerAdapter : public Adapter
    {
    public:
        ActivePowerAdapter();
        ActivePowerAdapter(std::shared_ptr<sep::ActivePower> active_power);
        ~ActivePowerAdapter();
        void parse(const std::string &xml);
        ParseError translate(boost::property_tree::ptree &pt);

    public:
        std::shared_ptr<sep::ActivePower> active_power_;
    };
} // namespace xml

#endif // __ACTIVE_POWER_ADAPTER_H__