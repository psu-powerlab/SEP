#ifndef __EVENT_STATUS_H__
#define __EVENT_STATUS_H__

namespace sep
{
enum class CurrentStatus
{
    SCHEDULED,
    ACTIVE,
    CANCELLED,
    SUPERSEDED
};
// Current status information relevant to a specific object. 
// The Status object is used to indicate the current status of an Event. 
// Devices can read the containing resource (e.g. TextMessage) to get 
// the most up to date status of the event.  Devices can also subscribe 
// to a specific resource instance to get updates when any of its 
// attributes change, including the Status object.    
class EventStatus
{
    public:
        EventStatus (sep::CurrentStatus* current_status);
        ~EventStatus ();
    private:
        sep::CurrentStatus* current_status_;
};
}; // namespace
#endif // __EVENT_STATUS_H__