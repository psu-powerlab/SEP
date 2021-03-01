#include <iostream>
#include <cstdint>
#include <sstream>
#include <type_traits>
#include <boost/property_tree/xml_parser.hpp>
#include <sep/utilities.hpp>
#include "include/xml/active_power_adapter.hpp"

namespace xml
{
    ActivePowerAdapter::ActivePowerAdapter(const std::shared_ptr<sep::ActivePower> &model)
    {
        active_power_ = model;
    }

    ActivePowerAdapter::~ActivePowerAdapter()
    {
        // do nothing
    }

    boost::property_tree::ptree ActivePowerAdapter::Treeify()
    {
        boost::property_tree::ptree pt;
        pt.put("ActivePower.multiplier", active_power_->multiplier);
        pt.put("ActivePower.value", active_power_->value);
        return pt;   
    }
    
    void ActivePowerAdapter::Translate(const boost::property_tree::ptree &pt) 
    {
        // if missing default = 0
        active_power_->multiplier = pt.get<sep::PowerOfTenMultiplierType>("ActivePower.multiplier", 0);
        active_power_->value = pt.get<int16_t>("ActivePower.value", 0);
    }
    
} // namespace xml