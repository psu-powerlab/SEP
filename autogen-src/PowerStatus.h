///////////////////////////////////////////////////////////
//  PowerStatus.h
//  Implementation of the Class PowerStatus
//  Created on:      13-Apr-2020 2:51:37 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_ECD697F0_4AD2_4235_8D98_EA2F3F491361__INCLUDED_)
#define EA_ECD697F0_4AD2_4235_8D98_EA2F3F491361__INCLUDED_

#include "UInt8.h"
#include "TimeType.h"
#include "PowerSourceType.h"
#include "PerCent.h"
#include "UInt32.h"
#include "PEVInfo.h"
#include "Resource.h"

/**
 * Contains the status of the device's power sources
 */
class PowerStatus : public Resource
{

public:
	PowerStatus();
	virtual ~PowerStatus();
	/**
	 * Battery system status
	 * 
	 * 0 = unknown
	 * 1 = normal (more than LowChargeThreshold remaining)
	 * 2 = low (less than LowChargeThreshold remaining)
	 * 3 = depleted (0% charge remaining)
	 * 4 = not applicable (mains powered only)
	 */
	UInt8 batteryStatus;
	/**
	 * The time at which the reported values were recorded.
	 */
	TimeType changedTime;
	/**
	 * This value will be fixed for devices powered by a single source.  This value
	 * may change for devices able to transition between multiple power sources (mains
	 * to battery backup, etc.).
	 */
	PowerSourceType currentPowerSource;
	/**
	 * Estimate of remaining battery charge as a percent of full charge.
	 */
	PerCent estimatedChargeRemaining;
	/**
	 * Estimated time (in seconds) to total battery charge depletion (under current
	 * load)
	 */
	UInt32 estimatedTimeRemaining;
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	/**
	 * If the device has a battery, this is the time since the device last switched to
	 * battery power, or the time since the device was restarted, whichever is less,
	 * in seconds.
	 */
	UInt32 sessionTimeOnBattery;
	/**
	 * If the device has a battery, this is the total time the device has been on
	 * battery power, in seconds. It may be reset when the battery is replaced.
	 */
	UInt32 totalTimeOnBattery;
	PEVInfo *m_PEVInfo;

};
#endif // !defined(EA_ECD697F0_4AD2_4235_8D98_EA2F3F491361__INCLUDED_)
