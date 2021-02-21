#ifndef __ACTIVE_POWER_XML_H__
#define __ACTIVE_POWER_XML_H__
#include "include/xml/adapter_interface.hpp"
#include "sep/active_power.hpp"

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

#endif // __ACTIVE_POWER_XML_H__