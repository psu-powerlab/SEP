///////////////////////////////////////////////////////////
//  DutyCycle.h
//  Implementation of the Class DutyCycle
//  Created on:      13-Apr-2020 2:51:27 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_265724C6_ADA6_449f_8EA1_328FF25905BE__INCLUDED_)
#define EA_265724C6_ADA6_449f_8EA1_328FF25905BE__INCLUDED_

#include "UInt8.h"

/**
 * Duty cycle control is a device specific issue and is managed by the device.
 * The duty cycle of the device under control should span the shortest practical
 * time period in accordance with the nature of the device under control and the
 * intent of the request for demand reduction.  The default factory setting SHOULD
 * be three minutes for each 10% of duty cycle.  This indicates that the default
 * time period over which a duty cycle is applied is 30 minutes, meaning a 10%
 * duty cycle would cause a device to be ON for 3 minutes.   The “off state” SHALL
 * precede the “on state”.
 */
class DutyCycle
{

public:
	DutyCycle();
	virtual ~DutyCycle();
	/**
	 * Contains the maximum On state duty cycle applied by the end device, as a
	 * percentage of time.  The field not present indicates that this field has not
	 * been used by the end device. 
	 */
	UInt8 normalValue;

};
#endif // !defined(EA_265724C6_ADA6_449f_8EA1_328FF25905BE__INCLUDED_)
