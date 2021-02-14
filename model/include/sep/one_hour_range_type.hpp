#ifndef __ONE_HOUR_RANGE_TYPE_H__
#define __ONE_HOUR_RANGE_TYPE_H__
#include <cstdint>

namespace sep
{
    // A signed time offset, typically applied to a Time value, expressed in seconds, with range -3600 to 3600.

    typedef int16_t OneHourRangeType;

} // namespace sep

#endif // __ONE_HOUR_RANGE_TYPE_H__