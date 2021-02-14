#include "include/sep/fixed_var.hpp"

namespace sep
{
    FixedVAR::FixedVAR(sep::DERUnitRefType ref_type, sep::SignedPerCent *value)
    {
        ref_type_ = ref_type;
        value_ = value;
    }

    FixedVAR::~FixedVAR()
    {
        delete value_;
    }
} // namespace sep