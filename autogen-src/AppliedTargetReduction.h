///////////////////////////////////////////////////////////
//  AppliedTargetReduction.h
//  Implementation of the Class AppliedTargetReduction
//  Created on:      13-Apr-2020 2:51:21 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_110B9696_D87C_49ec_8110_3501A2704FE5__INCLUDED_)
#define EA_110B9696_D87C_49ec_8110_3501A2704FE5__INCLUDED_

#include "UnitType.h"
#include "UInt16.h"

/**
 * Specifies the value of the TargetReduction applied by the device.
 */
class AppliedTargetReduction
{

public:
	AppliedTargetReduction();
	virtual ~AppliedTargetReduction();
	/**
	 * Enumerated field representing the type of reduction requested. 
	 */
	UnitType type;
	/**
	 * Indicates the requested amount of the relevant commodity to be reduced.
	 */
	UInt16 value;

};
#endif // !defined(EA_110B9696_D87C_49ec_8110_3501A2704FE5__INCLUDED_)
