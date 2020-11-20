///////////////////////////////////////////////////////////
//  StorageModeStatusType.h
//  Implementation of the Class StorageModeStatusType
//  Created on:      13-Apr-2020 2:51:42 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_CDC84356_BFF0_4502_A82F_18071AD1B748__INCLUDED_)
#define EA_CDC84356_BFF0_4502_A82F_18071AD1B748__INCLUDED_

#include "TimeType.h"
#include "UInt8.h"

/**
 * DER StorageModeStatus value:
 * 0 – storage charging
 * 1 – storage discharging
 * 2 – storage holding
 * All other values reserved.
 */
class StorageModeStatusType
{

public:
	StorageModeStatusType();
	virtual ~StorageModeStatusType();
	/**
	 * The date and time at which the state applied. 
	 */
	TimeType dateTime;
	/**
	 * The value indicating the state.
	 */
	UInt8 value;

};
#endif // !defined(EA_CDC84356_BFF0_4502_A82F_18071AD1B748__INCLUDED_)
