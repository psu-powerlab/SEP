#include "event.hpp"

namespace sep
{
    Event::Event(sep::TimeType* creation_time,
                sep::EventStatus* event_status,
                sep::DateTimeInterval* interval,
                sep::TimeType* date_time,
                bool potentially_superseded,
                sep::TimeType* potentially_superseded_time,
                std::string reason) 
    {
        
    }

    Event::~Event() 
    {
        delete creation_time_;
        delete event_status_;
        delete interval_;
        delete date_time_;
        delete potentially_superseded_time_;
    }
} // namespace sep