///////////////////////////////////////////////////////////
//  CreditTypeChange.h
//  Implementation of the Class CreditTypeChange
//  Created on:      13-Apr-2020 2:51:23 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_656F6357_73F5_4fa3_BED4_D03AD6610A8A__INCLUDED_)
#define EA_656F6357_73F5_4fa3_BED4_D03AD6610A8A__INCLUDED_

#include "CreditTypeType.h"
#include "TimeType.h"

/**
 * Specifies a change to the credit type. 
 */
class CreditTypeChange
{

public:
	CreditTypeChange();
	virtual ~CreditTypeChange();
	/**
	 * The new credit type, to take effect at the time specified by startTime
	 */
	CreditTypeType newType;
	/**
	 * The date/time when the change is to take effect.
	 */
	TimeType startTime;

};
#endif // !defined(EA_656F6357_73F5_4fa3_BED4_D03AD6610A8A__INCLUDED_)
