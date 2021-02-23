#include <sstream>
#include <boost/property_tree/xml_parser.hpp>
#include "include/xml/active_power_adapter.hpp"

namespace xml
{
    ActivePowerAdapter::ActivePowerAdapter(const sep::ActivePower &active_power)
    {
        tree_.put("ActivePower.multiplier", active_power.multiplier_);
        tree_.put("ActivePower.value", active_power.value_);
    }
    
    ActivePowerAdapter::ActivePowerAdapter(const std::string& active_power_str) 
    {
        std::istringstream iss(active_power_str);
        boost::property_tree::xml_parser::read_xml(iss, tree_);
    }

    ActivePowerAdapter::~ActivePowerAdapter()
    {
        // do nothing
    }

    std::string ActivePowerAdapter::serialize()
    {
        std::ostringstream oss;
        boost::property_tree::xml_parser::write_xml(oss, tree_);
        return oss.str();
    }
    
    boost::property_tree::ptree ActivePowerAdapter::getTree() 
    {
        return tree_;
    }
} // namespace xml