#include "include/sep/event.hpp"

namespace sep
{
    Event::Event(
        sep::TimeType creation_time,
        sep::EventStatus *event_status,
        sep::DateTimeInterval *interval)
    {
        creation_time_ = creation_time;
        event_status_ = event_status;
        interval_ = interval;
    }

    Event::~Event()
    {
        delete event_status_;
        delete interval_;
    }
} // namespace sep