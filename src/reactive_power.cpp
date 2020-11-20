#include "reactive_power.hpp"

namespace sep
{
ReactivePower::ReactivePower(
    sep::PowerOfTenMultiplierType* multiplier,
    unsigned int value) 
{
    multiplier_ = multiplier;
    value_ = value;
}

ReactivePower::~ReactivePower() 
{
    delete multiplier_;
}
} // namespace