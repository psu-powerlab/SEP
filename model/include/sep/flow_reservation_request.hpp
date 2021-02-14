#ifndef __FLOW_RESERVATION_REQUEST_H__
#define __FLOW_RESERVATION_REQUEST_H__
#include <cstdint>
#include "time_type.hpp"
#include "signed_real_energy.hpp"
#include "date_time_interval.hpp"
#include "active_power.hpp"
#include "request_status.hpp"

namespace sep
{
    // Used to request flow transactions. Client EndDevices submit a request for
    // charging or discharging from the server. The server creates an associated
    // FlowReservationResponse containing the charging parameters and interval to
    // provide a lower aggregated demand at the premises, or within a larger part
    // of the distribution system
    class FlowReservationRequest
    {
    public:
        FlowReservationRequest(
            sep::TimeType creation_time,
            uint16_t duration_requested,
            sep::SignedRealEnergy energy_requested,
            sep::DateTimeInterval interval_requested,
            sep::ActivePower power_requested,
            sep::RequestStatus request_status);
        ~FlowReservationRequest();

    public:
        sep::TimeType creation_time_;
        uint16_t duration_requested_;
        sep::SignedRealEnergy energy_requested_;
        sep::DateTimeInterval interval_requested_;
        sep::ActivePower power_requested_;
        sep::RequestStatus request_status_;
    };
} // namespace sep

#endif // __FLOW_RESERVATION_REQUEST_H__