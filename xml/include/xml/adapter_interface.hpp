#ifndef __ADAPTER_INTERFACE_H__
#define __ADAPTER_INTERFACE_H__
#include <string>

namespace xml
{
    class AdapterInterface
    {
    public:
        virtual ~AdapterInterface ();
        virtual std::string& serialize() = 0; // pure virtual

    private:

    };
} // namespace xml

#endif // __ADAPTER_INTERFACE_H__