#include "include/sep/event_status.hpp"

namespace sep
{
    EventStatus::EventStatus(
        sep::CurrentStatus current_status,
        sep::TimeType date_time,
        bool potentially_superseded,
        sep::TimeType potentially_superseded_time,
        std::string reason)
    {
        current_status_ = current_status;
        date_time_ = date_time;
        potentially_superseded_ = potentially_superseded;
        potentially_superseded_time_ = potentially_superseded_time;
    }

    EventStatus::~EventStatus()
    {
        // do nothing
    }
} // namespace sep