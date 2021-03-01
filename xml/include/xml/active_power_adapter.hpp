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
        ActivePowerAdapter(const std::shared_ptr<sep::ActivePower> &model);
        ~ActivePowerAdapter();
        boost::property_tree::ptree Treeify();
        void Translate(const boost::property_tree::ptree &pt);

    private:
        std::shared_ptr<sep::ActivePower> active_power_;
    };
} // namespace xml

#endif // __ACTIVE_POWER_ADAPTER_H__