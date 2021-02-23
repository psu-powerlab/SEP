#ifndef __REQUEST_STATUS_H__
#define __REQUEST_STATUS_H__
#include <cstdint>
#include "time_type.hpp"


namespace sep
{
    // Field representing the request status type.
    enum class Status : uint8_t
    {
        REQUESTED,
        CANCELLED
    };

    bool checkStatus (uint8_t value)
    {
        switch (value)
        {
            case 0: 
                return true;
                break;
            case 1:
                return true;
                break;
            default:
                return false;
                break;
        }
    };

    // The RequestStatus object is used to indicate the current status of a Flow Reservation Request.
    class RequestStatus
    {
    public:

    public:
        RequestStatus(sep::TimeType datetime, Status status);
        ~RequestStatus();

    public:
        sep::TimeType datetime_;
        Status status_;
    };
} // namespace sep

#endif // __REQUEST_STATUS_H__