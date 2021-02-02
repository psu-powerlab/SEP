#include "der_control.hpp"

namespace sep
{
DERControl::DERControl(
    sep::RandomizableEvent* randomize_event,
    sep::DERControlBase* der_control_base,
    sep::DeviceCategoryType* device_category) 
{
    randomize_event_ = randomize_event;
    der_control_base_ = der_control_base;
    device_category_ = device_category;
}

DERControl::~DERControl() 
{
    delete randomize_event_;
    delete der_control_base_;
    delete device_category_;
}
} // namespace