///////////////////////////////////////////////////////////
//  Resource.h
//  Implementation of the Class Resource
//  Created on:      13-Apr-2020 2:51:40 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_1D061513_18E7_4097_8D8E_240CFF7DF689__INCLUDED_)
#define EA_1D061513_18E7_4097_8D8E_240CFF7DF689__INCLUDED_

#include "anyURI.h"
#include <string>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/ptree.hpp>

/**
 * A resource is an addressable unit of information, either a collection (List) or
 * instance of an object (identifiedObject, or simply, Resource)
 */
class Resource
{

public:
	Resource(const std::string& uri = "");
	virtual ~Resource();
	virtual boost::property_tree::ptree serialize() = 0;
	/**
	 * A reference to the resource address (URI). Required in a response to a GET,
	 * ignored otherwise.
	 */
	sep::anyURI href;
	std::string xmlns;

};
#endif // !defined(EA_1D061513_18E7_4097_8D8E_240CFF7DF689__INCLUDED_)
