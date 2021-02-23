#ifndef __RESPONDABLE_RESOURCE_H__
#define __RESPONDABLE_RESOURCE_H__
#include <cstdint>
#include "resource.hpp"

namespace sep
{
    enum class ResponseRequired : uint8_t
    {
        RECIEVED,
        SPECIFIC_RESPONSE,
        RESPONSE_REQUIRED
    };

    bool checkResponseRequired (uint8_t value)
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
            default:
                return false;
                break;
        }
    };

    // A Resource to which a Response can be requested.
    class RespondableResource
    {
    public:
        RespondableResource(
            sep::Resource *resource,
            std::string reply_to = "",
            sep::ResponseRequired response_required = sep::ResponseRequired::RECIEVED);
        ~RespondableResource();

    public:
        sep::Resource *resource_;
        std::string reply_to_;
        sep::ResponseRequired response_required_;
    };
};     // namespace sep
#endif // __RESPONDABLE_RESOURCE_H__