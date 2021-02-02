#include "power_factor_with_excitation.hpp"

namespace sep
{
PowerFactorWithExcitation::PowerFactorWithExcitation(
    uint16_t displacment,
    bool excitation,
    sep::PowerOfTenMultiplierType* multiplier) 
{
    displacement_ = displacment;
    excitation_ = excitation;
    multiplier_ = multiplier;
}

PowerFactorWithExcitation::~PowerFactorWithExcitation() 
{
    delete multiplier_;
}
} // namespace