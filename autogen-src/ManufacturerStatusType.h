///////////////////////////////////////////////////////////
//  ManufacturerStatusType.h
//  Implementation of the Class ManufacturerStatusType
//  Created on:      13-Apr-2020 2:51:34 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_CF2600CD_A9E0_46c9_A9C5_82A0FA715790__INCLUDED_)
#define EA_CF2600CD_A9E0_46c9_A9C5_82A0FA715790__INCLUDED_

#include "TimeType.h"
#include "String6.h"

/**
 * DER ManufacturerStatus/value: String data type
 */
class ManufacturerStatusType
{

public:
	ManufacturerStatusType();
	virtual ~ManufacturerStatusType();
	/**
	 * The date and time at which the state applied. 
	 */
	TimeType dateTime;
	/**
	 * The value indicating the state.
	 */
	String6 value;

};
#endif // !defined(EA_CF2600CD_A9E0_46c9_A9C5_82A0FA715790__INCLUDED_)
