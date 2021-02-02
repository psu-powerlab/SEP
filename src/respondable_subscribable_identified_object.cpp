#include "respondable_subscribable_identified_object.hpp"

namespace sep
{
    RespondableSubscribableIdentifiedObject::RespondableSubscribableIdentifiedObject(
        sep::RespondableResource* respondable_resource,
        std::string mrid,
        std::string description,
        std::string version,
        sep::SubscribableType subscribable) 
    {
        respondable_resource_ = respondable_resource;
        mrid_ = mrid;
        description_ = description;
        version_ = version;
        subscribable_ = subscribable;
    }

    RespondableSubscribableIdentifiedObject::~RespondableSubscribableIdentifiedObject() 
    {
        delete respondable_resource_;
    }
} // namespace