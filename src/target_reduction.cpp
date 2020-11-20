#include "target_reduction.hpp"


namespace sep
{
TargetReduction::TargetReduction(
    sep::UnitType* unit_type,
    unsigned int value) 
{
    unit_type_ = unit_type;
    value_ = value;
}

TargetReduction::~TargetReduction() 
{
    delete unit_type_;
}
}