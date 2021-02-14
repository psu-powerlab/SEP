#ifndef __PER_CENT_H__
#define __PER_CENT_H__
#include <cstdint>

namespace sep
{
    // Used for percentages, specified in hundredths of a percent, 0 - 10000.
    // (10000 = 100%)

    class PerCent
    {
    public:
        PerCent(uint16_t value);
        ~PerCent();

    public:
        uint16_t max_percent_ = 10000;
        uint16_t value_;
    };
};     // namespace sep
#endif // __PER_CENT_H__