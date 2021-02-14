#ifndef __FLOW_RESERVATION_RESPONSE_H__
#define __FLOW_RESERVATION_RESPONSE_H__
#include <string>
#include "event.hpp"
#include "signed_real_energy.hpp"
#include "active_power.hpp"

namespace sep
{
    // The server may modify the charging or discharging parameters and interval
    // to provide a lower aggregated demand at the premises, or within a larger
    // part of the distribution system.
    class FlowReservationResponse
    {
    public:
        FlowReservationResponse(
            sep::Event *event,
            sep::SignedRealEnergy *signed_real_energy,
            sep::ActivePower *active_power,
            std::string mrid_type);
        ~FlowReservationResponse();

    public:
        sep::Event *event_;
        sep::SignedRealEnergy *signed_real_energy_; // energy in watt-hours
        sep::ActivePower *active_power_;            // power in watts
        std::string mrid_type_;                    // match event
    };
};     // namespace sep
#endif // __FLOW_RESERVATION_RESPONSE_H__