#ifndef __ACTIVE_POWER_XML_H__
#define __ACTIVE_POWER_XML_H__

#include "sep/active_power.hpp"
namespace sep
{
    class ActivePowerXML
    {
    public:
        ActivePowerXML(const sep::ActivePower& active_power);
        ~ActivePowerXML();
    };
} // namespace sep

#endif // __ACTIVE_POWER_XML_H__