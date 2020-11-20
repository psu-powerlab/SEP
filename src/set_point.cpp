#include "set_point.hpp"


namespace sep
{
SetPoint::SetPoint(
    unsigned int cooling_set_point,
    unsigned int heating_set_point) 
{
    cooling_set_point_ = cooling_set_point;
    heating_set_point_ = heating_set_point;
}

SetPoint::~SetPoint() 
{
    // dtor
}
} // namespace