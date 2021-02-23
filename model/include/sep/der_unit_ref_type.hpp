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

    bool checkDERUnitRefType (uint8_t value)
    {
        switch (value)
        {
            case 0: 
                return true;
                break;
            case 1:
                return true;
                break;
            case 3: 
                return true;
                break;
            case 4:
                return true;
                break;
            case 5: 
                return true;
                break;
            case 6:
                return true;
                break;
            case 7: 
                return true;
                break;            
            default:
                return false;
                break;
        }
    };
};     // namespace sep
#endif // __DER_UNIT_REF_TYPE_H__