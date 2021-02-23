#ifndef __DEVICE_CATEGORY_TYPE_H__
#define __DEVICE_CATEGORY_TYPE_H__
#include <cstdint>

namespace sep
{
    enum class DeviceCategoryType : uint32_t
    {
        PROGRAMMABLE_COMMUNICATING_THERMOSTAT = 1 << 0,
        STRIP_HEATERS = 1 << 1,
        BASEBOARD_HEATERS = 1 << 2,
        WATER_HEATERS = 1 << 3,
        POOL_PUMP = 1 << 4,
        SAUNA = 1 << 5,
        HOT_TUB = 1 << 6,
        SMART_APPLIANCE = 1 << 7,
        IRRIGATION_PUMP = 1 << 8,
        MANAGED_COMMERCIAL_INDUSTRIAL_lOADS = 1 << 9,
        SIMPLE_MISC_LOADS = 1 << 10,
        EXTERIOR_LIGHTING = 1 << 11,
        INTERIOR_LIGHTING = 1 << 12,
        LOAD_CONTROL_SWITCH = 1 << 13,
        ENERGY_MANAGEMENT_SYSTEM = 1 << 14,
        SMART_ENERGY_MODULE = 1 << 15,
        ELECTRIC_VEHICLE = 1 << 16,
        EVSE = 1 << 17,
        VIRTUAL_MIXED_DER = 1 << 18,
        RECIPROCATING_ENGINE = 1 << 19,
        FUEL_CELL = 1 << 20,
        PHOTOVOLTAIC_SYSTEM = 1 << 21,
        COMBINED_HEAD_AND_POWER = 1 << 22,
        COMBINED_PV_AND_STORAGE = 1 << 23,
        OTHER_GENERATION_SYSTEM = 1 << 24,
        OTHER_STORAGE_SYSTEM = 1 << 25
    };

    bool checkDeviceCategoryType (uint32_t value)
    {
        switch (value)
        {
            case 1 << 0: 
                return true;
                break;
            case 1 << 2:
                return true;
                break;
            case 1 << 3: 
                return true;
                break;
            case 1 << 4:
                return true;
                break;
            case 1 << 5:
                return true;
                break;
            case 1 << 6:
                return true;
                break;
            case 1 << 7:
                return true;
                break;
            case 1 << 8:
                return true;
                break;
            case 1 << 9:
                return true;
                break;
            case 1 << 10:
                return true;
                break;
            case 1 << 11:
                return true;
                break;
            case 1 << 12:
                return true;
                break;
            case 1 << 13:
                return true;
                break;
            case 1 << 14:
                return true;
                break;
            case 1 << 15:
                return true;
                break;
            case 1 << 16:
                return true;
                break;
            case 1 << 17:
                return true;
                break;
            case 1 << 18:
                return true;
                break;
            case 1 << 19:
                return true;
                break;
            case 1 << 20:
                return true;
                break;
            case 1 << 21:
                return true;
                break;
            case 1 << 22:
                return true;
                break;
            case 1 << 23:
                return true;
                break;
            case 1 << 25:
                return true;
                break;                
            default:
                return false;
                break;
        }
    };
};     // namespace sep
#endif // __DEVICE_CATEGORY_TYPE_H__