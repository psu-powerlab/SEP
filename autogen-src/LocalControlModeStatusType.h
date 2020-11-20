///////////////////////////////////////////////////////////
//  LocalControlModeStatusType.h
//  Implementation of the Class LocalControlModeStatusType
//  Created on:      13-Apr-2020 2:51:33 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_EEAE414C_AA4F_40f6_9AD8_E16532A2D147__INCLUDED_)
#define EA_EEAE414C_AA4F_40f6_9AD8_E16532A2D147__INCLUDED_

#include "TimeType.h"
#include "UInt8.h"

/**
 * DER LocalControlModeStatus/value:
 * 0 – local control
 * 1 – remote control
 * All other values reserved.
 */
class LocalControlModeStatusType
{

public:
	LocalControlModeStatusType();
	virtual ~LocalControlModeStatusType();
	/**
	 * The date and time at which the state applied. 
	 */
	TimeType dateTime;
	/**
	 * The value indicating the state.
	 */
	UInt8 value;

};
#endif // !defined(EA_EEAE414C_AA4F_40f6_9AD8_E16532A2D147__INCLUDED_)
