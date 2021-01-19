#ifndef __POWER_FACTOR_WITH_EXCITATION_H__
#define __POWER_FACTOR_WITH_EXCITATION_H__
#include "power_of_ten_multiplier_type.hpp"

namespace sep
{
// Specifies a setpoint for Displacement Power Factor, the ratio between 
// apparent and active powers at the fundamental frequency (e.g. 60 Hz) and 
// includes an excitation flag.    
class PowerFactorWithExcitation
{
    public:
        PowerFactorWithExcitation (
            unsigned int displacment,
            bool excitation,
            sep::PowerOfTenMultiplierType* multiplier
        );
        ~PowerFactorWithExcitation ();
    public:
        unsigned int displacement_;
        bool excitation_;
        sep::PowerOfTenMultiplierType* multiplier_;
};
}; // namespace
#endif // __POWER_FACTOR_WITH_EXCITATION_H__