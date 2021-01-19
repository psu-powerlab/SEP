#ifndef __EVENT_H__
#define __EVENT_H__
#include <string>
#include "event_status.hpp"

namespace sep
{
// An Event indicates information that applies to a particular period of time. 
// Events SHALL be executed relative to the time of the server, 
// as described in the Time function set section 11.1.
class Event
{
    public:
        Event (
            unsigned long int creation_time,
            sep::EventStatus* event_status,
            unsigned int interval,
            unsigned long long int date_time,
            bool potentially_superseded,
            unsigned long long int potentially_superseded_time = 0,
            std::string reason = ""
        );
        ~Event ();
    public:
        unsigned long long int creation_time_;
        sep::EventStatus* event_status_;
        unsigned int interval_;
        unsigned long long int date_time_;
        bool potentially_superseded_;
        unsigned long long int potentially_superseded_time_;
        std::string reason_;
};
} // namespace
#endif // __EVENT_H__