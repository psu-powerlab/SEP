#ifndef __SIGNED_REAL_ENERGY_H__
#define __SIGNED_REAL_ENERGY_H__

namespace sep
{
class SignedRealEnergy
{
    public:
        SignedRealEnergy (unsigned int multiplier, long long int value);
        ~SignedRealEnergy ();
    public:
        unsigned int multiplier_;
        long long int value_;       // Watt-hours
};
}; // namespace
#endif // __SIGNED_REAL_ENERGY_H__