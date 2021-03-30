#ifndef __ADAPTER_H__
#define __ADAPTER_H__
#include <string>
#include <sstream>
#include <type_traits>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include "models.hpp"

// C++14 helper
template< class T >
using underlying_type_t = typename std::underlying_type<T>::type;

namespace xml
{
    namespace util
    {
        boost::property_tree::ptree SetSchema(boost::property_tree::ptree &pt);
        boost::property_tree::ptree Treeify(std::string &xml_str);
        std::string Stringify(boost::property_tree::ptree &pt);
        template <class Enum>
        underlying_type_t <Enum> ToUnderlyingType (Enum e);
    } // namespace util

    // Active Power
    std::string Serialize(sep::ActivePower &active_power);
    void Parse (std::string &xml_str, sep::ActivePower *active_power);

    // Flow Reservation Request
    std::string Serialize(sep::FlowReservationRequest &fr_request);
    void Parse(std::string &xml_str, sep::FlowReservationRequest *fr_request);
} // namespace xml

#endif // __ADAPTER_H__