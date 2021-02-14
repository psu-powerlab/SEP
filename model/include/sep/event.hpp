#ifndef __EVENT_H__
#define __EVENT_H__
#include <string>
#include "event_status.hpp"
#include "time_type.hpp"
#include "date_time_interval.hpp"

namespace sep
{
    // An Event indicates information that applies to a particular period of time.
    // Events SHALL be executed relative to the time of the server,
    // as described in the Time function set section 11.1.
    class Event
    {
    public:
        Event(
            sep::TimeType creation_time,
            sep::EventStatus *event_status,
            sep::DateTimeInterval *interval);
        ~Event();

    public:
        sep::TimeType creation_time_;
        sep::EventStatus *event_status_;
        sep::DateTimeInterval *interval_;
    };    
} // namespace sep
#endif // __EVENT_H__