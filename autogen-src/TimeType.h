///////////////////////////////////////////////////////////
//  TimeType.h
//  Implementation of the Class TimeType
//  Created on:      13-Apr-2020 2:51:45 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_BAAFFF30_09A1_4621_B8C9_8B84627E5852__INCLUDED_)
#define EA_BAAFFF30_09A1_4621_B8C9_8B84627E5852__INCLUDED_

#include "Int64.h"

/**
 * Time is a signed 64 bit value representing the number of seconds since 0 hours,
 * 0 minutes, 0 seconds, on the 1st of January, 1970, in UTC, not counting leap
 * seconds.
 */

namespace sep {
    typedef Int64 TimeType;
};

// NOT IMPLEMENTED
//class TimeType : public Int64
//{
//
//public:
//	TimeType();
//	virtual ~TimeType();
//
//};
#endif // !defined(EA_BAAFFF30_09A1_4621_B8C9_8B84627E5852__INCLUDED_)
