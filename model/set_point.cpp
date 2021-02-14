#include "include/sep/set_point.hpp"

namespace sep
{
    SetPoint::SetPoint(
        int16_t cooling_set_point,
        int16_t heating_set_point)
    {
        cooling_set_point_ = cooling_set_point;
        heating_set_point_ = heating_set_point;
    }

    SetPoint::~SetPoint()
    {
        // dtor
    }
} // namespace sep