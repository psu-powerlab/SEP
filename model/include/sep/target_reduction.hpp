#ifndef __TARGET_REDUCTION_H__
#define __TARGET_REDUCTION_H__
#include <cstdint>

namespace sep
{
    // The unit types defined for end device control target reductions
    enum class UnitType : uint8_t
    {
        KW,
        KWH,
        WATTS,
        CUBIC_METERS,
        CUBIC_FEET,
        US_GALLONS,
        IMPERIAL_GALLONS,
        BTUS,
        LITERS,
        KPA_GAUGE,
        KPA_ABSOLUTE,
        MEGA_JOULE,
        UNITLESS
    };

    inline bool checkUnitType (uint8_t value)
    {
        switch (value)
        {
            case 0: 
                return true;
                break;
            case 1:
                return true;
                break;
            case 2:
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
            case 8: 
                return true;
                break;
            case 9:
                return true;
                break;
            case 10:
                return true;
                break;    
            case 11:
                return true;
                break;
            case 12: 
                return true;
                break;
            default:
                return false;
                break;
        }
    };

    // The TargetReduction object is used by a Demand Response service provider
    // to provide a RECOMMENDED threshold that a device/premises should maintain
    // its consumption below.
    //
    // For example, a service provider can provide a RECOMMENDED threshold of
    // some kWh for a 3-hour event. This means that the device/premises would
    // maintain its consumption below the specified limit for the specified period.
    class TargetReduction
    {
    public:
        TargetReduction(
            sep::UnitType unit_type,
            uint16_t value);
        ~TargetReduction();

    public:
        sep::UnitType unit_type_;
        uint16_t value_;
    };
};     // namespace sep
#endif // __TARGET_REDUCTION_H__