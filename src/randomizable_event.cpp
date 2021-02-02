#include "randomizable_event.hpp"

namespace sep
{
    RandomizableEvent::RandomizableEvent(
        sep::Event* event,
        sep::OneHourRangeType* randomize_duration = 0,
        sep::OneHourRangeType* randomize_start = 0) 
    {
        event_ = event;
        randomize_duration_ = randomize_duration;
        randomize_start_ = randomize_start;
    }

    RandomizableEvent::~RandomizableEvent() 
    {
        delete event_;
        delete randomize_duration_;
        delete randomize_start_;
    }
} // namespace