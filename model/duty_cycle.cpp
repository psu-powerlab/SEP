#include "include/sep/duty_cycle.hpp"

namespace sep
{
    DutyCycle::DutyCycle(uint8_t normal_value)
    {
        normal_value_ = normal_value;
    }

    DutyCycle::~DutyCycle()
    {
        // do nothing
    }
} // namespace sep
