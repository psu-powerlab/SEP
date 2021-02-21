#include <iostream>
#include "include/xml/active_power_adapter.hpp"

namespace xml
{
    ActivePowerAdapter::ActivePowerAdapter(const sep::ActivePower &active_power)
    {
        std::cout << "XML Adapter: Active Power" << std::endl;
    }

    ActivePowerAdapter::~ActivePowerAdapter()
    {
        // do nothing
    }

    std::string ActivePowerAdapter::serialize()
    {
        std::string value = "";
        return value;
    }
} // namespace xml