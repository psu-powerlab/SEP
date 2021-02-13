#include "include/sep/reactive_power.hpp"

namespace sep
{
ReactivePower::ReactivePower(
    sep::PowerOfTenMultiplierType* multiplier,
    uint16_t value) 
{
    multiplier_ = multiplier;
    value_ = value;
}

ReactivePower::~ReactivePower() 
{
    delete multiplier_;
}
} // namespace