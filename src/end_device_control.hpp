#ifndef __END_DEVICE_CONTROL_H__
#define __END_DEVICE_CONTROL_H__
#include "randomize_event.hpp"
#include "device_category_type.hpp"
#include "offset.hpp"
#include "set_point.hpp"

namespace sep
{
// Instructs an EndDevice to perform a specified action.
class EndDeviceControl
{
    public:
        EndDeviceControl (
            sep::RandomizeEvent* randomize_event,
            unsigned int appliance_load_reduction,
            sep::DeviceCategoryType* device_category,
            bool dr_program_mandatory,
            bool load_shift_forward,
            unsigned int duty_cycle = 0,
            sep::Offset* offset = nullptr,
            unsigned int override_duration = 0,
            sep::SetPoint* set_point = nullptr
        );
        ~EndDeviceControl ();
    public:
        sep::RandomizeEvent* randomize_event_;
        unsigned int appliance_load_reduction_;
        sep::DeviceCategoryType* device_category_;
        bool dr_program_mandatory_;
        bool load_shift_forward_;
        unsigned int duty_cycle_;
        sep::Offset* offset_;
        unsigned int override_duration_;
        sep::SetPoint* set_point_;
};
}; // namespace
#endif // __END_DEVICE_CONTROL_H__