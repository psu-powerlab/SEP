#include <iostream>
#include <cstdint>
#include <sstream>
#include <type_traits>
#include <boost/property_tree/xml_parser.hpp>
#include <sep/utilities.hpp>
#include "include/xml/active_power_adapter.hpp"

namespace xml
{
    ActivePowerAdapter::ActivePowerAdapter()
        : active_power_(nullptr)
    {
        // do nothing
    }

    ActivePowerAdapter::ActivePowerAdapter(std::shared_ptr<sep::ActivePower> active_power)
        : active_power_(active_power)
    {
        // do nothing
    }

    ActivePowerAdapter::~ActivePowerAdapter()
    {
        // do nothing
    }

    void ActivePowerAdapter::parse(const std::string &xml)
    {
        ParseError err = translate(treeify(xml));
        std::cout << "ActivePowerAdapter Debug: " << err << std::endl;       
    }
    
    ParseError ActivePowerAdapter::translate(boost::property_tree::ptree &pt) 
    {
        // if missing default = 0
        int8_t multiplier = pt.get<int8_t>("ActivePower.multiplier", 0);
        if (!sep::checkPowerOfTenMultiplier(multiplier))
        {
            return xml::ParseError::VALUE_BOUNDS;
        }

        sep::PowerOfTenMultiplierType power_of_ten = sep::PowerOfTenMultiplierType(multiplier);
        int16_t value = pt.get<int16_t>("ActivePower.value", 0);
        active_power_ = std::make_shared<sep::ActivePower>(power_of_ten, value);
        return xml::ParseError::NONE;
    }
} // namespace xml