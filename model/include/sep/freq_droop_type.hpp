#ifndef __FREQ_DROOP_TYPE_H__
#define __FREQ_DROOP_TYPE_H__
#include <cstdint>

namespace sep
{
    // Type for Frequency-Droop (Frequency-Watt) operation.
    class FreqDroopType
    {
    public:
        FreqDroopType(
            uint32_t dbof,
            uint32_t dbuf,
            uint16_t kof,
            uint16_t kuf,
            uint16_t open_loop_tms);
        ~FreqDroopType();

    public:
        uint32_t dbof_;          // over-freq thousandths of Hz
        uint32_t dbuf_;          // under-freq thousandths of Hz
        uint16_t kof_;           // per-unit change over-freq
        uint16_t kuf_;           // per-unit change under-freq
        uint16_t open_loop_tms_; // A value of 0 is used to mean no limit
    };
};     // namespace sep
#endif // __FREQ_DROOP_TYPE_H__