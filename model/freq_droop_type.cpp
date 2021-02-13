#include "include/sep/freq_droop_type.hpp"

namespace sep
{
FreqDroopType::FreqDroopType(
    uint32_t dbof,
    uint32_t dbuf,
    uint16_t kof,
    uint16_t kuf,
    uint16_t open_loop_tms) 
{
    dbof_ = dbof;
    dbuf_ = dbuf;
    kof_ = kof;
    kuf_ = kuf;
    open_loop_tms_ = open_loop_tms;
}

FreqDroopType::~FreqDroopType() 
{
    // dtor
}
} // namespace