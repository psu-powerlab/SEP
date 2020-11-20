///////////////////////////////////////////////////////////
//  DeviceCapabilityLink.h
//  Implementation of the Class DeviceCapabilityLink
//  Created on:      13-Apr-2020 2:51:27 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_3AA8D9D5_A02B_4111_983A_877F29B520F8__INCLUDED_)
#define EA_3AA8D9D5_A02B_4111_983A_877F29B520F8__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of DeviceCapability.
 */
class DeviceCapabilityLink : public Link
{

public:
	DeviceCapabilityLink();
	virtual ~DeviceCapabilityLink();

};
#endif // !defined(EA_3AA8D9D5_A02B_4111_983A_877F29B520F8__INCLUDED_)
