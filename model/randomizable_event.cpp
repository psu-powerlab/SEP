#include "include/sep/randomizable_event.hpp"

namespace sep
{
    RandomizableEvent::RandomizableEvent(
        sep::Event *event,
        sep::OneHourRangeType randomize_duration,
        sep::OneHourRangeType randomize_start)
    {
        event_ = event;
        randomize_duration_ = randomize_duration;
        randomize_start_ = randomize_start;
    }

    RandomizableEvent::~RandomizableEvent()
    {
        delete event_;
    }
} // namespace sep