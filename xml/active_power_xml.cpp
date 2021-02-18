#include "include/sep/active_power_xml.hpp"
#include <iostream>

namespace sep
{
    ActivePowerXML::ActivePowerXML(const sep::ActivePower &active_power){
        std::cout << "XML Adapter: Active Power" << std::endl;
    }

    ActivePowerXML::~ActivePowerXML()
    {
        // do nothing
    }
} // namespace sep