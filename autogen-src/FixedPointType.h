///////////////////////////////////////////////////////////
//  FixedPointType.h
//  Implementation of the Class FixedPointType
//  Created on:      13-Apr-2020 2:51:29 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_C771E508_8BBA_4374_AF3C_C1CB1039FBD7__INCLUDED_)
#define EA_C771E508_8BBA_4374_AF3C_C1CB1039FBD7__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "Int16.h"

/**
 * Abstract type for specifying a fixed-point value without a given unit of
 * measure.
 */
class FixedPointType
{

public:
	FixedPointType();
	virtual ~FixedPointType();
	/**
	 * Specifies exponent of uom.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Dimensionless value
	 */
	Int16 value;

};
#endif // !defined(EA_C771E508_8BBA_4374_AF3C_C1CB1039FBD7__INCLUDED_)
