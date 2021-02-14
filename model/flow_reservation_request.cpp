#include "include/sep/flow_reservation_request.hpp"

namespace sep
{
    FlowReservationRequest::FlowReservationRequest(
        sep::TimeType creation_time,
        uint16_t duration_requested,
        sep::SignedRealEnergy energy_requested,
        sep::DateTimeInterval interval_requested,
        sep::ActivePower power_requested,
        sep::RequestStatus request_status)
    {
        creation_time_ = creation_time;
        duration_requested_ = duration_requested;
        energy_requested_ = energy_requested;
        interval_requested_ = interval_requested;
        power_requested_ = power_requested;
        request_status_ = request_status;
    }

    FlowReservationRequest::~FlowReservationRequest()
    {
        //do nothing
    }
} // namespace sep