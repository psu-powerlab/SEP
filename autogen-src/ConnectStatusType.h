///////////////////////////////////////////////////////////
//  ConnectStatusType.h
//  Implementation of the Class ConnectStatusType
//  Created on:      13-Apr-2020 2:51:22 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_1827A37B_C4A3_416a_ABD6_8A08A4651E7E__INCLUDED_)
#define EA_1827A37B_C4A3_416a_ABD6_8A08A4651E7E__INCLUDED_

#include "TimeType.h"
#include "HexBinary8.h"

/**
 * DER ConnectStatus value (bitmap):
 * 0 - Connected
 * 1 - Available
 * 2 - Operating
 * 3 - Test
 * 4 - Fault / Error
 * All other values reserved.
 */
class ConnectStatusType
{

public:
	ConnectStatusType();
	virtual ~ConnectStatusType();
	/**
	 * The date and time at which the state applied. 
	 */
	TimeType dateTime;
	/**
	 * The value indicating the state.
	 */
	HexBinary8 value;

};
#endif // !defined(EA_1827A37B_C4A3_416a_ABD6_8A08A4651E7E__INCLUDED_)
