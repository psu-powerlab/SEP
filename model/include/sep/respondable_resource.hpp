#ifndef __RESPONDABLE_RESOURCE_H__
#define __RESPONDABLE_RESOURCE_H__
#include <cstdint>
#include "resource.hpp"
#include "link.hpp"

namespace sep
{
    enum class ResponseRequired : uint8_t
    {
        kRecieved = 1 << 0,
        kSpecificResponse = 1 << 1,
        kResponseRequired = 1 << 2
    };

    // A Resource to which a Response can be requested.
    struct RespondableResource
    {
        sep::Resource resource;
        sep::Link reply_to;
        sep::ResponseRequired response_required;
    };
};     // namespace sep
#endif // __RESPONDABLE_RESOURCE_H__