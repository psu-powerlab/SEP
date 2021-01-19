#ifndef __DER_CONTROL_H__
#define __DER_CONTROL_H__
#include "randomize_event.hpp"
#include "der_control_base.hpp"
#include "device_category_type.hpp"

namespace sep
{
// Distributed Energy Resource (DER) time/event-based control.
class DERControl
{
    public:
        DERControl (
            sep::RandomizeEvent* randomize_event,
            sep::DERControlBase* der_control_base,
            sep::DeviceCategoryType* device_category = nullptr
        );
        ~DERControl ();
    public:
        sep::RandomizeEvent* randomize_event_;
        sep::DERControlBase* der_control_base_;
        sep::DeviceCategoryType* device_category_;
};
}; // namespace
#endif // __DER_CONTROL_H__