#ifndef __IDENTIFIED_OBJECT_H__
#define __IDENTIFIED_OBJECT_H__
#include <cstdint>
#include <string>

namespace sep
{
    // This is a root class to provide common naming attributes for all classes needing naming attributes
    struct IdentifiedObject
    {
        std::string mrid;
        std::string description;
        uint16_t version;  
    };
        
} // namespace sep

#endif // __IDENTIFIED_OBJECT_H__