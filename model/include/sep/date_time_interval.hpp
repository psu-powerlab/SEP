#ifndef __DATE_TIME_INTERVAL_H__
#define __DATE_TIME_INTERVAL_H__
#include <cstdint>
#include "time_type.hpp"

namespace sep
{
    // Interval of date and time
    class DateTimeInterval
    {
    public:
        DateTimeInterval(uint32_t duration, sep::TimeType start);
        ~DateTimeInterval();

    public:
        uint32_t duration_;
        sep::TimeType start_;
    };
} // namespace sep

#endif // __DATE_TIME_INTERVAL_H__