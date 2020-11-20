///////////////////////////////////////////////////////////
//  DateTimeInterval.h
//  Implementation of the Class DateTimeInterval
//  Created on:      13-Apr-2020 2:51:24 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_0E8B128D_2743_4c2e_AF08_B74086930F9B__INCLUDED_)
#define EA_0E8B128D_2743_4c2e_AF08_B74086930F9B__INCLUDED_

#include "UInt32.h"
#include "TimeType.h"

/**
 * Interval of date and time.
 */
class DateTimeInterval
{

public:
	DateTimeInterval();
	virtual ~DateTimeInterval();
	/**
	 * Duration of the interval, in seconds. 
	 */
	UInt32 duration;
	/**
	 * Date and time of the start of the interval.
	 */
	TimeType start;

};
#endif // !defined(EA_0E8B128D_2743_4c2e_AF08_B74086930F9B__INCLUDED_)
