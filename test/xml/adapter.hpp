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
        void SetSchema(boost::property_tree::ptree *pt);
        boost::property_tree::ptree Treeify(const std::string &xml_str);
        std::string Stringify(boost::property_tree::ptree pt);
        template <class Enum>
        underlying_type_t <Enum> ToUnderlyingType (Enum e);
    } // namespace util

    // Active Power
    std::string Serialize(const sep::ActivePower &active_power);
    bool Parse (const std::string &xml_str, sep::ActivePower *active_power);

    // Flow Reservation Request
    std::string Serialize(const sep::FlowReservationRequest &fr_request);
    bool Parse(const std::string &xml_str, sep::FlowReservationRequest *fr_request);

    // Flow Reservation Response
    std::string Serialize(const sep::FlowReservationResponse &fr_response);
    bool Parse(const std::string &xml_str, sep::FlowReservationResponse *fr_response);
} // namespace xml

#endif // __ADAPTER_H__