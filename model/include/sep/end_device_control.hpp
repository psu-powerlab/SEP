#ifndef __END_DEVICE_CONTROL_H__
#define __END_DEVICE_CONTROL_H__
#include <cstdint>
#include "randomizable_event.hpp"
#include "appliance_load_reduction_type.hpp"
#include "device_category_type.hpp"
#include "duty_cycle.hpp"
#include "offset.hpp"
#include "set_point.hpp"

namespace sep
{
    // Instructs an EndDevice to perform a specified action.
    class EndDeviceControl
    {
    public:
        EndDeviceControl(
            sep::RandomizableEvent *randomize_event,
            sep::ApplianceLoadReductionType appliance_load_reduction,
            sep::DeviceCategoryType device_category,
            bool dr_program_mandatory,
            bool load_shift_forward,
            sep::DutyCycle *duty_cycle = nullptr,
            sep::Offset *offset = nullptr,
            uint16_t override_duration = 0,
            sep::SetPoint *set_point = nullptr);
        ~EndDeviceControl();

    public:
        sep::RandomizableEvent *randomize_event_;
        sep::ApplianceLoadReductionType appliance_load_reduction_;
        sep::DeviceCategoryType device_category_;
        bool dr_program_mandatory_;
        bool load_shift_forward_;
        sep::DutyCycle *duty_cycle_;
        sep::Offset *offset_;
        uint16_t override_duration_;
        sep::SetPoint *set_point_;
    };    
};     // namespace sep
#endif // __END_DEVICE_CONTROL_H__