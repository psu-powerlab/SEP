#ifndef __TARGET_REDUCTION_H__
#define __TARGET_REDUCTION_H__

namespace sep
{
enum class UnitType
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
        TargetReduction (
            sep::UnitType* unit_type,
            unsigned int value
        );
        ~TargetReduction ();
    private:
        sep::UnitType* unit_type_;
        unsigned int value_;
};
}; // namespace
#endif // __TARGET_REDUCTION_H__