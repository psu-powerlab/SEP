#include <iostream>
#include <cstdint>
#include <sstream>
#include <type_traits>
#include <boost/property_tree/xml_parser.hpp>
#include "include/xml/active_power_adapter.hpp"

namespace xml
{
    ActivePowerAdapter::ActivePowerAdapter(std::shared_ptr<sep::ActivePower> active_power)
    {
        tree_.put("ActivePower.multiplier", as_value(active_power.multiplier_));
        tree_.put("ActivePower.value", active_power.value_);
    }

    ActivePowerAdapter::~ActivePowerAdapter()
    {
        // do nothing
    }

    ParseError ActivePowerAdapter::parse(const std::string &xml)
    {
        std::stringstream ss;
        ss << xml;
        boost::property_tree::ptree pt;
        boost::property_tree::xml_parser::read_xml(ss, pt);

        // if missing default = 0
        int8_t multiplier = pt.get<int8_t>("ActivePower.multiplier", 0);
        if (!sep::checkPowerOfTenMultiplier(multiplier))
        {
            return xml::ParseError::VALUE_BOUNDS;
        }

        tree_.put("ActivePower.multiplier", multiplier);

        int16_t value = pt.get<int16_t>("ActivePower.value", 0);
        tree_.put("ActivePower.value", value);
        return xml::ParseError::NONE;
    }
} // namespace xml