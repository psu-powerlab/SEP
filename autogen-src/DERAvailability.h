///////////////////////////////////////////////////////////
//  DERAvailability.h
//  Implementation of the Class DERAvailability
//  Created on:      13-Apr-2020 2:51:25 PM
//  Original author: kelynn
///////////////////////////////////////////////////////////

#if !defined(EA_4B901E13_C703_404e_9B33_440F9F07A257__INCLUDED_)
#define EA_4B901E13_C703_404e_9B33_440F9F07A257__INCLUDED_

#include "UInt32.h"
#include "TimeType.h"
#include "PerCent.h"
#include "ReactivePower.h"
#include "SubscribableResource.h"

/**
 * Indicates current reserve generation status
 */
class DERAvailability : public SubscribableResource
{

public:
	DERAvailability();
	virtual ~DERAvailability();
	/**
	 * Indicates number of seconds the DER will be able to deliver active power at the
	 * reservePercent level.
	 */
	UInt32 availabilityDuration;
	/**
	 * Indicates number of seconds the DER will be able to receive active power at the
	 * reserveChargePercent level.
	 */
	UInt32 maxChargeDuration;
	/**
	 * The timestamp when the DER availability was last updated. 
	 */
	TimeType readingTime;
	/**
	 * Percent of continuous received active power (%setMaxChargeRateW) that is
	 * estimated to be available in reserve.
	 */
	PerCent reserveChargePercent;
	/**
	 * Percent of continuous delivered active power (%setMaxW) that is estimated to be
	 * available in reserve.
	 */
	PerCent reservePercent;
	/**
	 * Estimated reserve reactive power, in var.  Represents the lesser of received or
	 * delivered reactive power.
	 */
	ReactivePower statVarAvail;
	/**
	 * Estimated reserve active power, in watts.  
	 */
	ActivePower statWAvail;

};
#endif // !defined(EA_4B901E13_C703_404e_9B33_440F9F07A257__INCLUDED_)
