#include "resource.hpp"

namespace sep
{
    Resource::Resource(std::string href) 
    {
        href_ = href;
    }

    Resource::~Resource() 
    {
        // dtor
    }
} // namespace