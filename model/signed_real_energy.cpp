#include "include/sep/signed_real_energy.hpp"

namespace sep
{
    SignedRealEnergy::SignedRealEnergy(sep::PowerOfTenMultiplierType multiplier, int64_t value)
    {
        multiplier_ = multiplier;
        value_ = value;
    }

    SignedRealEnergy::~SignedRealEnergy()
    {
        delete multiplier_;
    }
} // namespace sep