#ifndef __ACTIVE_POWER_ADAPTER_H__
#define __ACTIVE_POWER_ADAPTER_H__

#include "sep/active_power.hpp"
#include "adapter_interface.hpp"

namespace xml
{
    class ActivePowerAdapter : public AdapterInterface
    {
    public:
        ActivePowerAdapter(const sep::ActivePower& active_power);
        ~ActivePowerAdapter();
        std::string& serialize ();
    };
} // namespace xml

#endif // __ACTIVE_POWER_ADAPTER_H__