///////////////////////////////////////////////////////////
//  PowerSourceType.h
//  Implementation of the Class PowerSourceType
//  Created on:      13-Apr-2020 2:51:37 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_CAC4DF6B_E135_41b6_B291_A851FC4A1365__INCLUDED_)
#define EA_CAC4DF6B_E135_41b6_B291_A851FC4A1365__INCLUDED_

#include "UInt8.h"

/**
 * 0 - none
 * 1 - mains
 * 2 - battery
 * 3 - local generation
 * 4 - emergency
 * 5 - unknown
 * All other values reserved.
 */
class PowerSourceType : public UInt8
{

public:
	PowerSourceType();
	virtual ~PowerSourceType();

};
#endif // !defined(EA_CAC4DF6B_E135_41b6_B291_A851FC4A1365__INCLUDED_)
