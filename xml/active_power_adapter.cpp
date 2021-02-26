#include <iostream>
#include <cstdint>
#include <sstream>
#include <type_traits>
#include <boost/property_tree/xml_parser.hpp>
#include <sep/utilities.hpp>
#include "include/xml/active_power_adapter.hpp"

namespace xml
{
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
        boost::property_tree::ptree pt = treeify(xml);
        ParseError err = translate(pt);        
    }
    
    ParseError ActivePowerAdapter::translate(boost::property_tree::ptree &pt) 
    {
        // if missing default = 0
        int8_t multiplier = pt.get<int8_t>("ActivePower.multiplier", 0);
        if (!sep::checkPowerOfTenMultiplier(multiplier))
        {
            return xml::ParseError::VALUE_BOUNDS;
        }

        active_power_->multiplier_ = multiplier;
        active_power_->value_ = pt.get<int16_t>("ActivePower.value", 0);
        return xml::ParseError::NONE;
    }
} // namespace xml