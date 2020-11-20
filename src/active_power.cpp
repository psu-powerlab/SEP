#include "active_power.hpp"

namespace sep
{
ActivePower::ActivePower(unsigned int multiplier, int value) 
{
    multiplier_ = multiplier;
    value_ = value;
}

ActivePower::~ActivePower() 
{
    // dtor
}
} // namespace