#ifndef __RANDOMIZE_EVENT_H__
#define __RANDOMIZE_EVENT_H__
#include "event.hpp"

namespace sep
{
// An Event that can indicate time ranges over which the start time 
// and duration SHALL be randomized.    
class RandomizeEvent
{
    public:
        RandomizeEvent (
            sep::Event* event,
            unsigned int randomize_duration = 0,
            unsigned int randomize_start = 0
        );
        ~RandomizeEvent ();
    private:
        sep::Event* event_;
        unsigned int randomize_duration_;
        unsigned int randomize_start_;
};
}; // namespace
#endif // __RANDOMIZE_EVENT_H__