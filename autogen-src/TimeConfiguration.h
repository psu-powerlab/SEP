///////////////////////////////////////////////////////////
//  TimeConfiguration.h
//  Implementation of the Class TimeConfiguration
//  Created on:      13-Apr-2020 2:51:45 PM
//  Original author: kholbroo
///////////////////////////////////////////////////////////

#if !defined(EA_600053DF_D2EE_4310_B8D7_5E32035A6F8A__INCLUDED_)
#define EA_600053DF_D2EE_4310_B8D7_5E32035A6F8A__INCLUDED_

#include "DstRuleType.h"
#include "TimeOffsetType.h"

/**
 * Contains attributes related to the configuration of the time service. 
 */
class TimeConfiguration
{

public:
	TimeConfiguration();
	virtual ~TimeConfiguration();
	/**
	 * Rule to calculate end of daylight savings time in the current year.  Result of
	 * dstEndRule must be greater than result of dstStartRule. 
	 */
	DstRuleType dstEndRule;
	/**
	 * Daylight savings time offset from local standard time.
	 */
	TimeOffsetType dstOffset;
	/**
	 * Rule to calculate start of daylight savings time in the current year. Result of
	 * dstEndRule must be greater than result of dstStartRule.
	 */
	DstRuleType dstStartRule;
	/**
	 * Local time zone offset from UTCTime. Does not include any daylight savings time
	 * offsets.  
	 */
	TimeOffsetType tzOffset;

};
#endif // !defined(EA_600053DF_D2EE_4310_B8D7_5E32035A6F8A__INCLUDED_)
