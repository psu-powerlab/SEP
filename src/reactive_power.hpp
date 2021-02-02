#ifndef __REACTIVE_POWER_H__
#define __REACTIVE_POWER_H__
#include "power_of_ten_multiplier_type.hpp"
#include <cstdint>

namespace sep
{
// The reactive power Q (in var) is the product of root mean square (RMS) 
// voltage, RMS current, and sin(theta) where theta is the phase angle of 
// current relative to voltage.    
class ReactivePower
{
    public:
        ReactivePower (
            sep::PowerOfTenMultiplierType* multiplier,
            uint16_t value
        );
        ~ReactivePower ();
    public:
        sep::PowerOfTenMultiplierType* multiplier_;
        uint16_t value_;
};
}; // namespace
#endif // __REACTIVE_POWER_H__