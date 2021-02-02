#ifndef __SIGNED_REAL_ENERGY_H__
#define __SIGNED_REAL_ENERGY_H__
#include <cstdint>
#include "power_of_ten_multiplier_type.hpp"

namespace sep
{
    // Real electrical energy, signed
    class SignedRealEnergy
    {
        public:
            SignedRealEnergy (sep::PowerOfTenMultiplierType* multiplier, int64_t value);
            ~SignedRealEnergy ();
        public:
            sep::PowerOfTenMultiplierType* multiplier_;
            int64_t value_ : 48;       // Watt-hours
    };
}; // namespace
#endif // __SIGNED_REAL_ENERGY_H__