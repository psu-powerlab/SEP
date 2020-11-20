
#include "offset.hpp"

namespace sep
{
Offset::Offset(
    sep::PerCent* load_adjustment_percentage_offset,
    unsigned int cooling_offset,
    unsigned int heating_offset
    ) 
{
    load_adjustment_percentage_offset_ = load_adjustment_percentage_offset;
    cooling_offset_ = cooling_offset;
    heating_offset_ = heating_offset;
}

Offset::~Offset() 
{
    delete load_adjustment_percentage_offset_;
}
} // namespace