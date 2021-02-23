#ifndef __EVENT_STATUS_H__
#define __EVENT_STATUS_H__
#include <cstdint>
#include <string>
#include "time_type.hpp"
#include "date_time_interval.hpp"

namespace sep
{
    enum class CurrentStatus : uint8_t
    {
        SCHEDULED,
        ACTIVE,
        CANCELLED,
        CANCELLED_WITH_RANDOMIZATION,
        SUPERSEDED
    };

    bool checkCurrentStatus(uint8_t value)
    {
        switch (value)
        {
            case 0: 
                return true;
                break;
            case 1:
                return true;
                break;
            case 2: 
                return true;
                break;
            case 3:
                return true;
                break;
            case 4:
                return true;
                break;              
            default:
                return false;
                break;
        }
    };

    // Current status information relevant to a specific object.
    // The Status object is used to indicate the current status of an Event.
    // Devices can read the containing resource (e.g. TextMessage) to get
    // the most up to date status of the event.  Devices can also subscribe
    // to a specific resource instance to get updates when any of its
    // attributes change, including the Status object.
    class EventStatus
    {
    public:
        EventStatus(
            sep::CurrentStatus current_status,
            sep::TimeType date_time,
            bool potentially_superseded,
            sep::TimeType potentially_superseded_time = 0,
            std::string reason = "");
        ~EventStatus();

    public:
        sep::CurrentStatus current_status_;
        sep::TimeType date_time_;
        bool potentially_superseded_;
        sep::TimeType potentially_superseded_time_;
        std::string reason_;
    };
};     // namespace sep
#endif // __EVENT_STATUS_H__