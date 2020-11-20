///////////////////////////////////////////////////////////
//  TargetReading.h
//  Implementation of the Class TargetReading
//  Created on:      13-Apr-2020 2:51:44 PM
//  Original author: tmauro
///////////////////////////////////////////////////////////

#if !defined(EA_75A1CF87_BE01_4391_9DBF_0F06D38D293E__INCLUDED_)
#define EA_75A1CF87_BE01_4391_9DBF_0F06D38D293E__INCLUDED_

#include "BillingMeterReadingBase.h"

/**
 * Contains readings that specify a target or goal, such as a consumption target,
 * to which billing incentives or other contractual ramifications may be
 * associated. 
 */
class TargetReading : public BillingMeterReadingBase
{

public:
	TargetReading();
	virtual ~TargetReading();

};
#endif // !defined(EA_75A1CF87_BE01_4391_9DBF_0F06D38D293E__INCLUDED_)
