#ifndef __ACTIVE_POWER_H__
#define __ACTIVE_POWER_H__

namespace sep
{
// The active (real) power P (in W) is the product of root-mean-square (RMS) 
// voltage, RMS current, and cos(theta) where theta is the phase angle of 
// current relative to voltage.  It is the primary measure of the rate of 
// flow of energy.    
class ActivePower
{
    public:
        ActivePower (unsigned int multiplier, int value);
        ~ActivePower ();
    private:
        unsigned int multiplier_;
        int value_;
};
}; // namespace sep

#endif // __ACTIVE_POWER_H__