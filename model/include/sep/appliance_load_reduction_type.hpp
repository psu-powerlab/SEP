#ifndef __APPLIANCE_LOAD_REDUCTION_TYPE_H__
#define __APPLIANCE_LOAD_REDUCTION_TYPE_H__
#include <cstdint>

namespace sep
{
    enum class ApplianceLoadReductionType : uint8_t
    {
        DELAY_APPLIANCE_LOAD,
        TEMPORARY_APPLIANCE_LOAD_REDUCTION
    };
}; // namespace sep

#endif // __APPLIANCE_LOAD_REDUCTION_TYPE_H__