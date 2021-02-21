#include <iostream>
#include "include/xml/active_power_xml.hpp"

namespace xml
{
    ActivePowerXML::ActivePowerXML(const sep::ActivePower &active_power){
        std::cout << "XML Adapter: Active Power" << std::endl;
    }

    ActivePowerXML::~ActivePowerXML()
    {
        // do nothing
    }

    std::string& ActivePowerAdapter::serialize() 
    {
        return "";
    }
} // namespace xml