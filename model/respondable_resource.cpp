#include "include/sep/respondable_resource.hpp"

namespace sep
{
    RespondableResource::RespondableResource(
        sep::Resource *resource,
        std::string reply_to,
        sep::ResponseRequired response_required)
    {
        resource_ = resource;
        reply_to_ = reply_to;
        response_required_ = response_required;
    }

    RespondableResource::~RespondableResource()
    {
        delete resource_;
    }
} // namespace sep