///////////////////////////////////////////////////////////
//  PowerConfiguration.h
//  Implementation of the Class PowerConfiguration
//  Created on:      13-Apr-2020 2:51:36 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_8A4980A8_D8AD_49b2_8022_22E17EDDF277__INCLUDED_)
#define EA_8A4980A8_D8AD_49b2_8022_22E17EDDF277__INCLUDED_

#include "TimeType.h"
#include "UInt32.h"

/**
 * Contains configuration related to the device's power sources
 */
class PowerConfiguration
{

public:
	PowerConfiguration();
	virtual ~PowerConfiguration();
	/**
	 * Time/Date at which battery was installed, 
	 */
	TimeType batteryInstallTime;
	/**
	 * In context of the PowerStatus resource, this is the value of
	 * EstimatedTimeRemaining below which BatteryStatus "low" is indicated and the
	 * PS_LOW_BATTERY is raised.  
	 */
	UInt32 lowChargeThreshold;

};
#endif // !defined(EA_8A4980A8_D8AD_49b2_8022_22E17EDDF277__INCLUDED_)
