///////////////////////////////////////////////////////////
//  OneHourRangeType.h
//  Implementation of the Class OneHourRangeType
//  Created on:      13-Apr-2020 2:51:36 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_306B3C2C_C777_40ed_9A8F_48D7DC5C2645__INCLUDED_)
#define EA_306B3C2C_C777_40ed_9A8F_48D7DC5C2645__INCLUDED_

#include "Int16.h"

/**
 * A signed time offset, typically applied to a Time value, expressed in seconds,
 * with range -3600 to 3600. 
 */
class OneHourRangeType : public Int16
{

public:
	OneHourRangeType();
	virtual ~OneHourRangeType();

};
#endif // !defined(EA_306B3C2C_C777_40ed_9A8F_48D7DC5C2645__INCLUDED_)
