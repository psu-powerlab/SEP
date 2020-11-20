///////////////////////////////////////////////////////////
//  StateOfChargeStatusType.h
//  Implementation of the Class StateOfChargeStatusType
//  Created on:      13-Apr-2020 2:51:42 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_CDB1B679_60EF_4cb2_BF89_F26B19840176__INCLUDED_)
#define EA_CDB1B679_60EF_4cb2_BF89_F26B19840176__INCLUDED_

#include "TimeType.h"

/**
 * DER StateOfChargeStatus value: Percent data type
 */
class StateOfChargeStatusType
{

public:
	StateOfChargeStatusType();
	virtual ~StateOfChargeStatusType();
	/**
	 * The date and time at which the state applied. 
	 */
	TimeType dateTime;
	/**
	 * The value indicating the state.
	 */
	PerCent value;

};
#endif // !defined(EA_CDB1B679_60EF_4cb2_BF89_F26B19840176__INCLUDED_)
