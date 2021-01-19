#ifndef __SIGNED_PER_CENT_H__
#define __SIGNED_PER_CENT_H__

namespace sep
{
// Used for signed percentages, specified in hundredths of a percent, 
// -10000 to 10000. (10000 = 100%)
class SignedPerCent
{
    public:
        SignedPerCent (int value);
        ~SignedPerCent ();
    public:
        unsigned int max_percent_ = 10000;
        int value_;
};
}; // namespace
#endif // __SIGNED_PER_CENT_H__