#include <iostream>
#include <cstdint>
#include <sstream>
#include <type_traits>
#include <boost/property_tree/xml_parser.hpp>
#include <sep/utilities.hpp>
#include "include/xml/active_power_adapter.hpp"

namespace xml
{
    ActivePowerAdapter::ActivePowerAdapter(std::shared_ptr<sep::ActivePower> model)
    {
        active_power = model;
    }

    ActivePowerAdapter::~ActivePowerAdapter()
    {
        // do nothing
    }

    void ActivePowerAdapter::parse(const std::string &xml)
    {
        boost::property_tree::ptree pt = treeify(xml);
        translate(pt);    
    }
    
    void ActivePowerAdapter::translate(const boost::property_tree::ptree &pt) 
    {
        // if missing default = 0
        active_power.multiplier = pt.get<sep::PowerOfTenMultiplierType>("ActivePower.multiplier", 0);
        active_power.value = pt.get<int16_t>("ActivePower.value", 0);
    }
    
} // namespace xml