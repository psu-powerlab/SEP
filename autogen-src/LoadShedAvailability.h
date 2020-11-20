///////////////////////////////////////////////////////////
//  LoadShedAvailability.h
//  Implementation of the Class LoadShedAvailability
//  Created on:      13-Apr-2020 2:51:33 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_17DCEED7_C4F6_406d_9A4C_D3F68C606EEE__INCLUDED_)
#define EA_17DCEED7_C4F6_406d_9A4C_D3F68C606EEE__INCLUDED_

#include "UInt32.h"
#include "PerCent.h"
#include "DemandResponseProgramLink.h"
#include "Resource.h"

/**
 * Indicates current consumption status and ability to shed load. 
 */
class LoadShedAvailability : public Resource
{

public:
	LoadShedAvailability();
	virtual ~LoadShedAvailability();
	/**
	 * Indicates for how many seconds the consuming device will be able to reduce
	 * consumption at the maximum response level.
	 */
	UInt32 availabilityDuration;
	/**
	 * Maximum percent of current operating load that is estimated to be sheddable.  
	 */
	PerCent sheddablePercent;
	/**
	 * Maximum amount of current operating load that is estimated to be sheddable, in
	 * Watts.  
	 */
	ActivePower sheddablePower;
	DemandResponseProgramLink *m_DemandResponseProgramLink;

};
#endif // !defined(EA_17DCEED7_C4F6_406d_9A4C_D3F68C606EEE__INCLUDED_)
