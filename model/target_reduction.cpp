#include "include/sep/target_reduction.hpp"

namespace sep
{
    TargetReduction::TargetReduction(
        sep::UnitType* unit_type,
        uint16_t value) 
    {
        unit_type_ = unit_type;
        value_ = value;
    }

    TargetReduction::~TargetReduction() 
    {
        delete unit_type_;
    }
}  // namespace sep