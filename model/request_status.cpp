#include "include/sep/request_status.hpp"


namespace sep
{
    RequestStatus::RequestStatus(sep::TimeType* datetime, Status status) 
    {
        datetime_ = datetime;
        status_ = status;
    }
    
    RequestStatus::~RequestStatus() 
    {
        delete datetime_;
    }
}