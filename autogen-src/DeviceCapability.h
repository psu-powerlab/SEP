///////////////////////////////////////////////////////////
//  DeviceCapability.h
//  Implementation of the Class DeviceCapability
//  Created on:      13-Apr-2020 2:51:26 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_9D5DF62E_3B8D_49ed_AAA0_069292CA818B__INCLUDED_)
#define EA_9D5DF62E_3B8D_49ed_AAA0_069292CA818B__INCLUDED_

#include "UInt32.h"
#include "SelfDeviceLink.h"
#include "MirrorUsagePointListLink.h"
#include "EndDeviceListLink.h"
#include "FunctionSetAssignmentsBase.h"

/**
 * Returned by the URI provided by DNS-SD, to allow clients to find the URIs to
 * the resources in which they are interested.
 */
class DeviceCapability : public FunctionSetAssignmentsBase
{

public:
	DeviceCapability();
	virtual ~DeviceCapability();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	sep::UInt32 pollRate;
	SelfDeviceLink *m_SelfDeviceLink;
	MirrorUsagePointListLink *m_MirrorUsagePointListLink;
	EndDeviceListLink *m_EndDeviceListLink;

};
#endif // !defined(EA_9D5DF62E_3B8D_49ed_AAA0_069292CA818B__INCLUDED_)
