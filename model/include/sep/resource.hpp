#ifndef __RESOURCE_H__
#define __RESOURCE_H__
#include <string>

namespace sep
{
    //  resource is an addressable unit of information, either
    // a collection (List) or instance of an object.
    class Resource
    {
    public:
        Resource(std::string href);
        ~Resource();

    public:
        std::string href_ = ""; // optional
    };
}; // namespace sep

#endif // __RESOURCE_H__