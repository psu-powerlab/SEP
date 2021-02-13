#include "include/sep/fixed_var.hpp"

namespace sep
{
    FixedVAR::FixedVAR(sep::DERUnitRefType* ref_type, sep::SignedPerCent* value) 
    {
        ref_type_ = ref_type;
        value_ = value;
    }

    FixedVAR::~FixedVAR() 
    {
        delete ref_type_;
        delete value_;
    }
} // namespace