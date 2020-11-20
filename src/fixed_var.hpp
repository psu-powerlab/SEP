#ifndef __FIXED_VAR_H__
#define __FIXED_VAR_H__
#include "der_unit_ref_type.hpp"
#include "signed_per_cent.hpp"

namespace sep
{
// Specifies a signed setpoint for reactive power.
class FixedVAR
{
    public:
        FixedVAR (sep::DERUnitRefType* ref_type, sep::SignedPerCent* value);
        ~FixedVAR ();
    private:
        sep::DERUnitRefType* ref_type_;
        sep::SignedPerCent* value_;
};
}; // namespace
#endif // __FIXED_VAR_H__