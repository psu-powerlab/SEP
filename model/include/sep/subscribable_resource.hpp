#ifndef __SUBSCRIBABLE_RESOURCE_H__
#define __SUBSCRIBABLE_RESOURCE_H__
#include <cstdint>
#include "resource.hpp"
#include "subscribable_type.hpp"

namespace sep
{
    // A Resource to which a Subscription can be requested.
    class SubscribableResource
    {
    public:
        SubscribableResource(
            sep::Resource *resource,
            sep::SubscribableType subscribable);
        ~SubscribableResource();

    public:
        sep::Resource *resource_;
        sep::SubscribableType subscribable_;
    };
};     // namespace sep
#endif // __SUBSCRIBABLE_RESOURCE_H__