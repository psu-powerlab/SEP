#ifndef __TIME_TYPE_H__
#define __TIME_TYPE_H__
#include <cstdint>

namespace sep
{
    // Time is a signed 64 bit value representing the number of seconds since 0 hours, 
    // 0 minutes, 0 seconds, on the 1st of January, 1970, in UTC, not counting leap seconds
    typedef int64_t TimeType;
} // namespace sep

#endif // __TIME_TYPE_H__