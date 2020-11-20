///////////////////////////////////////////////////////////
//  DeviceInformationLink.h
//  Implementation of the Class DeviceInformationLink
//  Created on:      13-Apr-2020 2:51:27 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_23DD1C3E_CADC_444a_B60D_E864C9C30532__INCLUDED_)
#define EA_23DD1C3E_CADC_444a_B60D_E864C9C30532__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of DeviceInformation.
 */
class DeviceInformationLink : public Link
{

public:
	DeviceInformationLink();
	virtual ~DeviceInformationLink();

};
#endif // !defined(EA_23DD1C3E_CADC_444a_B60D_E864C9C30532__INCLUDED_)
