#include "event.hpp"

namespace sep
{
Event::Event(unsigned long int creation_time,
            sep::EventStatus* event_status,
            unsigned int interval,
            unsigned long long int date_time,
            bool potentially_superseded,
            unsigned long long int potentially_superseded_time,
            std::string reason) 
{
    creation_time_ = creation_time;
    event_status_ = event_status;
    interval_ = interval;
    date_time_ = date_time;
    potentially_superseded_ = potentially_superseded;
    potentially_superseded_time_ = potentially_superseded_time;
    reason_ = reason;
}

Event::~Event() 
{
    delete event_status_;
}
} // namespace