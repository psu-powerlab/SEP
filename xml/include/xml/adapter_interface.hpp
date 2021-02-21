#ifndef __ADAPTER_INTERFACE_H__
#define __ADAPTER_INTERFACE_H__
#include <string>

namespace xml
{
    class AdapterInterface
    {
    public:
        virtual std::string serialize() = 0; // pure virtual

    };
} // namespace xml

#endif // __ADAPTER_INTERFACE_H__