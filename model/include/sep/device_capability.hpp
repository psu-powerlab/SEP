#ifndef __DEVICE_CAPABILITY_H__
#define __DEVICE_CAPABILITY_H__
#include <cstdint>
#include <string>
#include "function_set_assignments_base.hpp"

namespace sep
{
    struct DeviceCapability : FunctionSetAssignmentsBase
    {
        uint32_t pool_rate = 900;
        std::string end_device_list_link;
        std::string mirror_usage_point_list_link;
        std::string self_device_link;
    };
} // namespace sep

#endif // __DEVICE_CAPABILITY_H__