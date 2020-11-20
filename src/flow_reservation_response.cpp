#include "flow_reservation_response.hpp"


namespace sep
{
FlowReservationResponse::FlowReservationResponse(
    sep::Event* event,
    sep::SignedRealEnergy* signed_real_energy,
    sep::ActivePower* active_power,
    std::string mrid_type)
{
    event_ = event;
    signed_real_energy_ = signed_real_energy;
    active_power_ = active_power;
    mrid_type_ = mrid_type;
}

FlowReservationResponse::~FlowReservationResponse() 
{
    delete event_;
    delete signed_real_energy_;
    delete active_power_;
}
} // namespace