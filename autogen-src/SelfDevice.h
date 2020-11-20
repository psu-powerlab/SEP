///////////////////////////////////////////////////////////
//  SelfDevice.h
//  Implementation of the Class SelfDevice
//  Created on:      13-Apr-2020 2:51:41 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_9D29C72A_55CA_4e37_A64A_F3F8E4D4B1E6__INCLUDED_)
#define EA_9D29C72A_55CA_4e37_A64A_F3F8E4D4B1E6__INCLUDED_

#include "UInt32.h"
#include "AbstractDevice.h"

/**
 * The EndDevice providing the resources available within the DeviceCapabilities. 
 */
class SelfDevice : public AbstractDevice
{

public:
	SelfDevice();
	virtual ~SelfDevice();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;

};
#endif // !defined(EA_9D29C72A_55CA_4e37_A64A_F3F8E4D4B1E6__INCLUDED_)
