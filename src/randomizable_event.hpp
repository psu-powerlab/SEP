#ifndef __RANDOMIZE_EVENT_H__
#define __RANDOMIZE_EVENT_H__
#include <cstdint>
#include "event.hpp"
#include "one_hour_range_type.hpp"

namespace sep
{
// An Event that can indicate time ranges over which the start time 
// and duration SHALL be randomized.    
class RandomizableEvent
{
    public:
        RandomizableEvent (
            sep::Event* event,
            sep::OneHourRangeType randomize_duration = 0,
            sep::OneHourRangeType randomize_start = 0
        );
        ~RandomizableEvent ();
    public:
        sep::Event* event_;
        sep::OneHourRangeType randomize_duration_;  
        sep::OneHourRangeType randomize_start_; 
};
}; // namespace
#endif // __RANDOMIZE_EVENT_H__