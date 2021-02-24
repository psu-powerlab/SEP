#ifndef __SUBSCRIBABLE_TYPE_H__
#define __SUBSCRIBABLE_TYPE_H__
#include <cstdint>

namespace sep
{
    enum class SubscribableType : uint8_t
    {
        NONE,
        NON_CONDITIONAL,
        CONDITIONAL,
        BOTH
    };

    inline bool checkSubscribableType (uint8_t value)
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
            default:
                return false;
                break;
        }
    };
};     // namespace sep
#endif // __SUBSCRIBABLE_TYPE_H__