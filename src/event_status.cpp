#include "event_status.hpp"

namespace sep
{
    EventStatus::EventStatus(sep::CurrentStatus* current_status) 
    {
        current_status_ = current_status;
    }

    EventStatus::~EventStatus() 
    {
        delete current_status_;
    }
} // namespace