#include "adapter.hpp"
#include "xml_validator.hpp"
#include <iostream>

static XmlValidator validator;

namespace xml
{
    namespace util
    {
        boost::property_tree::ptree SetSchema(boost::property_tree::ptree &pt)
        {
            // this part overwrite schema info for validation or fills in the attrs that are needed
            // TODO: it would be nice to figure out how to validate without overwriting the xsi stuff
            // TODO: This function doesn't work currently
            std::string root = pt.begin()->first;
            pt.put(root + ".<xmlattr>.xmlns", "urn:ieee:std:2030.5:ns");
            pt.put(root + ".<xmlattr>.xmlns:xsi", "http://www.w3.org/2001/XMLSchema-instance");
            pt.put(root + ".<xmlattr>.xsi:schemaLocation", "urn:ieee:std:2030.5:ns sep.xsd");
            return pt;
        };

        boost::property_tree::ptree Treeify(std::string &xml_str)
        {
            // utility function to help translate strings to/from objects
            std::stringstream ss;
            ss << xml_str;
            boost::property_tree::ptree pt;
            boost::property_tree::xml_parser::read_xml(ss, pt);
            return pt;
        };

        std::string Stringify(boost::property_tree::ptree &pt)
        {
            // utility function to help translate strings to/from objects
            pt = SetSchema(pt);
            std::stringstream ss;
            boost::property_tree::xml_parser::write_xml(ss, pt);
            return ss.str();
        };

        // c++23 helper
        template <class Enum>
        underlying_type_t <Enum> ToUnderlyingType (Enum e)
        {
            return static_cast<underlying_type_t<Enum>>(e);
        };
            
    }; // namespace util

    // Active Power
    std::string Serialize(sep::ActivePower &active_power)
    {
        boost::property_tree::ptree pt;
        pt.put("ActivePower.multiplier", active_power.multiplier);
        pt.put("ActivePower.value", active_power.value);
        pt = xml::util::SetSchema(pt);
        return xml::util::Stringify(pt);
    };

    void Parse(std::string &xml_str, sep::ActivePower *active_power)
    {
        boost::property_tree::ptree pt = xml::util::Treeify(xml_str);

        if (validator.ValidateXml(xml::util::Stringify(pt)))
        {
            active_power->multiplier = pt.get<sep::PowerOfTenMultiplierType>("ActivePower.multiplier", 0);
            active_power->value = pt.get<int16_t>("ActivePower.value", 0);
        }
        else
        {
            active_power = nullptr;
        }
    };

     // Flow Reservation Request
    std::string Serialize(sep::FlowReservationRequest &fr_request)
    {
        boost::property_tree::ptree pt;
        pt.put("FlowReservationRequest.mRID", "0FB7");
        pt.put("FlowReservationRequest.description", "description1");
        pt.put("FlowReservationRequest.version", 0);
        pt.put("FlowReservationRequest.creationTime", fr_request.creation_time);
        pt.put("FlowReservationRequest.durationRequested", fr_request.duration_requested);
        pt.put("FlowReservationRequest.energyRequested.multiplier", fr_request.energy_requested.multiplier);
        pt.put("FlowReservationRequest.energyRequested.value", fr_request.energy_requested.value);
        pt.put("FlowReservationRequest.intervalRequested.duration", fr_request.interval_requested.duration);
        pt.put("FlowReservationRequest.intervalRequested.start", fr_request.interval_requested.start);
        pt.put("FlowReservationRequest.powerRequested.multiplier", fr_request.power_requested.multiplier);
        pt.put("FlowReservationRequest.powerRequested.value", fr_request.power_requested.value);
        pt.put("FlowReservationRequest.RequestStatus.dateTime", fr_request.request_status.datetime);
        pt.put(
            "FlowReservationRequest.RequestStatus.requestStatus", 
            xml::util::ToUnderlyingType(fr_request.request_status.status)
        );
        pt = xml::util::SetSchema(pt);
        return xml::util::Stringify(pt);
    };

    void Parse(std::string &xml_str, sep::FlowReservationRequest *fr_request)
    {
        boost::property_tree::ptree pt = xml::util::Treeify(xml_str);

        if (validator.ValidateXml(xml::util::Stringify(pt)))
        {
            fr_request->creation_time = pt.get<sep::TimeType>("FlowReservationRequest.creationTime", 0);
            fr_request->duration_requested = pt.get<uint16_t>("FlowReservationRequest.durationRequested", 0);
            fr_request->energy_requested.multiplier = pt.get<sep::PowerOfTenMultiplierType>("FlowReservationRequest.energyRequested.multiplier", 0);
            fr_request->energy_requested.value = pt.get<int64_t>("FlowReservationRequest.energyRequested.value", 0);
            fr_request->interval_requested.duration = pt.get<uint32_t>("FlowReservationRequest.intervalRequested.duration", 0);
            fr_request->interval_requested.start = pt.get<sep::TimeType>("FlowReservationRequest.intervalRequested.start", 0);
            fr_request->power_requested.multiplier =  pt.get<sep::PowerOfTenMultiplierType>("FlowReservationRequest.powerRequested.multiplier", 0);
            fr_request->power_requested.value =  pt.get<sep::PowerOfTenMultiplierType>("FlowReservationRequest.powerRequested.value", 0);
            fr_request->request_status.datetime =   pt.get<sep::TimeType>("FlowReservationRequest.RequestStatus.dateTime", 0);
            fr_request->request_status.status =  static_cast<sep::Status>(pt.get<uint8_t>("FlowReservationRequest.RequestStatus.requestStatus", 0));
        }
        else
        {
            fr_request = nullptr;
        }
    };
};