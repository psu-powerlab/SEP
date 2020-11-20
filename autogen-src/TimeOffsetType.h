///////////////////////////////////////////////////////////
//  TimeOffsetType.h
//  Implementation of the Class TimeOffsetType
//  Created on:      13-Apr-2020 2:51:45 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_32AF2CC1_6616_4cfa_9AF7_2B617E7AEFEF__INCLUDED_)
#define EA_32AF2CC1_6616_4cfa_9AF7_2B617E7AEFEF__INCLUDED_

#include "Int32.h"

/**
 * A signed time offset, typically applied to a Time value, expressed in seconds.
 */

namespace sep {
    typedef Int32 TimeOffsetType;
};

// NOT IMPLEMENTED
//class TimeOffsetType : public Int32
//{
//
//public:
//	TimeOffsetType();
//	virtual ~TimeOffsetType();
//
//};
#endif // !defined(EA_32AF2CC1_6616_4cfa_9AF7_2B617E7AEFEF__INCLUDED_)
