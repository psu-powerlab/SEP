///////////////////////////////////////////////////////////
//  OperationalModeStatusType.h
//  Implementation of the Class OperationalModeStatusType
//  Created on:      13-Apr-2020 2:51:36 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_D6A6968E_06BF_4857_9ECB_EA1F4B69D286__INCLUDED_)
#define EA_D6A6968E_06BF_4857_9ECB_EA1F4B69D286__INCLUDED_

#include "TimeType.h"
#include "UInt8.h"

/**
 * DER OperationalModeStatus value:
 * 0 - Not applicable / Unknown
 * 1 - Off
 * 2 - Operational mode
 * 3 - Test mode
 * All other values reserved.
 */
class OperationalModeStatusType
{

public:
	OperationalModeStatusType();
	virtual ~OperationalModeStatusType();
	/**
	 * The date and time at which the state applied. 
	 */
	TimeType dateTime;
	/**
	 * The value indicating the state.
	 */
	UInt8 value;

};
#endif // !defined(EA_D6A6968E_06BF_4857_9ECB_EA1F4B69D286__INCLUDED_)
