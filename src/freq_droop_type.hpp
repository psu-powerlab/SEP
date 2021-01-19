#ifndef __FREQ_DROOP_TYPE_H__
#define __FREQ_DROOP_TYPE_H__

namespace sep
{
// Type for Frequency-Droop (Frequency-Watt) operation.
class FreqDroopType
{
    public:
        FreqDroopType (
            unsigned long int dbof,
            unsigned long int dbuf,
            unsigned int kof,
            unsigned int kuf,
            unsigned int open_loop_tms
        );
        ~FreqDroopType ();
    public:
        unsigned long int dbof_;        // over-freq thousandths of Hz
        unsigned long int dbuf_;        // under-freq thousandths of Hz
        unsigned int kof_;              // per-unit change over-freq
        unsigned int kuf_;              // per-unit change under-freq
        unsigned int open_loop_tms_;    // A value of 0 is used to mean no limit
};
}; // namespace
#endif // __FREQ_DROOP_TYPE_H__