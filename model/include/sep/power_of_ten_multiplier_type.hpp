#ifndef __POWER_OF_TEN_MULTIPLIER_TYPE_H__
#define __POWER_OF_TEN_MULTIPLIER_TYPE_H__
#include <cstdint>

namespace sep
{
    // This is not a complete list. Any integer between -9 and 9 SHALL be
    // supported, indicating the power of ten multiplier for the units.
    enum class PowerOfTenMultiplierType : int8_t
    {
        NANO = -9,
        MICRO = -6,
        MILLI = -3,
        NONE = 0,
        DECA = 1,
        HECTO = 2,
        KILO = 3,
        MEGA = 6,
        GIGA = 9
    };
};     // namespace sep
#endif // __POWER_OF_TEN_MULTIPLIER_TYPE_H__