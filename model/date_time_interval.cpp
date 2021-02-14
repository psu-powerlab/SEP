#include "include/sep/date_time_interval.hpp"

namespace sep
{
    DateTimeInterval::DateTimeInterval(uint32_t duration, sep::TimeType start)
    {
        duration_ = duration;
        start_ = start;
    }

    DateTimeInterval::~DateTimeInterval()
    {
        // do nothing
    }
} // namespace sep