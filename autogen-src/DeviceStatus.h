///////////////////////////////////////////////////////////
//  DeviceStatus.h
//  Implementation of the Class DeviceStatus
//  Created on:      13-Apr-2020 2:51:27 PM
///////////////////////////////////////////////////////////

#if !defined(EA_00AC4B68_2F6F_48d6_893F_0ED929359636__INCLUDED_)
#define EA_00AC4B68_2F6F_48d6_893F_0ED929359636__INCLUDED_

#include "TimeType.h"
#include "UInt16.h"
#include "UInt8.h"
#include "UInt32.h"
#include "TimeLink.h"
#include "Temperature.h"
#include "Resource.h"

/**
 * Status of device
 */
class DeviceStatus : public Resource
{

public:
	DeviceStatus();
	virtual ~DeviceStatus();
	/**
	 * The time at which the reported values were recorded.
	 */
	TimeType changedTime;
	/**
	 * The number of times that the device has been turned on: Count of "device on"
	 * times, since the last time the counter was reset
	 */
	UInt16 onCount;
	/**
	 * Device operational state:
	 * 0 - Not applicable / Unknown
	 * 1 - Not operating
	 * 2 - Operating
	 * 3 - Starting up
	 * 4 - Shutting down
	 * 5 - At disconnect level
	 * 6 - kW ramping
	 * 7 - kVar ramping
	 */
	UInt8 opState;
	/**
	 * Total time device has operated: re-settable: Accumulated time in seconds since
	 * the last time the counter was reset.
	 */
	UInt32 opTime;
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	TimeLink *m_TimeLink;
	Temperature *m_Temperature;

};
#endif // !defined(EA_00AC4B68_2F6F_48d6_893F_0ED929359636__INCLUDED_)
