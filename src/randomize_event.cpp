#include "randomize_event.hpp"

namespace sep
{
RandomizeEvent::RandomizeEvent(
    sep::Event* event,
    unsigned int randomize_duration,
    unsigned int randomize_start) 
{
    event_ = event;
    randomize_duration_ = randomize_duration;
    randomize_start_ = randomize_start;
}

RandomizeEvent::~RandomizeEvent() 
{
    delete event_;
}
} // namespace