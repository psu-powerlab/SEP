#ifndef __DER_UNIT_REF_TYPE_H__
#define __DER_UNIT_REF_TYPE_H__
#include <cstdint>

namespace sep
{
// Specifies context for interpreting percent values
enum class DERUnitRefType : uint8_t
{
    NA,
    SET_MAX_W,
    SET_MAX_VAR,
    STAT_VAR_AVAIL,
    SET_EFFECTIVE_V,
    SET_MAX_CHARGE_RATE_W,
    SET_MAX_DISCHARGE_RATE_W,
    STAT_W_AVAIL
};
}; // namespace
#endif // __DER_UNIT_REF_TYPE_H__