#include "freq_droop_type.hpp"

namespace sep
{
FreqDroopType::FreqDroopType(
    unsigned long int dbof,
    unsigned long int dbuf,
    unsigned int kof,
    unsigned int kuf,
    unsigned int open_loop_tms) 
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