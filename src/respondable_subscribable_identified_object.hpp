#ifndef __RESPONDABLE_SUBSCRIBABLE_IDENTIFIED_OBJECT_H__
#define __RESPONDABLE_SUBSCRIBABLE_IDENTIFIED_OBJECT_H__
#include <string>
#include "respondable_resource.hpp"
#include "subscribable_type.hpp"

namespace sep
{
// An IdentifiedObject to which a Response can be requested.
class RespondableSubscribableIdentifiedObject
{
    public:
        RespondableSubscribableIdentifiedObject (
            sep::RespondableResource* respondable_resource,
            std::string mrid,
            std::string description = "",
            std::string version = "",
            sep::SubscribableType subscribable = sep::SubscribableType::NONE
        );
        ~RespondableSubscribableIdentifiedObject ();
    public:
        sep::RespondableResource* respondable_resource_;
        std::string mrid_;
        std::string description_;
        std::string version_;
        sep::SubscribableType subscribable_;
};
}; // namespace
#endif // __RESPONDABLE_SUBSCRIBABLE_IDENTIFIED_OBJECT_H__