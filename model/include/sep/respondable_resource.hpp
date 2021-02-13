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
    // A Resource to which a Response can be requested.
    class RespondableResource
    {
        public:
            RespondableResource (
                sep::Resource* resource,
                std::string reply_to = "",
                sep::ResponseRequired response_required 
                    = sep::ResponseRequired::RECIEVED
            );
            ~RespondableResource ();
        public:
            sep::Resource* resource_;
            std::string reply_to_;
            sep::ResponseRequired response_required_;
    };
}; // namespace
#endif // __RESPONDABLE_RESOURCE_H__