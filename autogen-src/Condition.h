///////////////////////////////////////////////////////////
//  Condition.h
//  Implementation of the Class Condition
//  Created on:      13-Apr-2020 2:51:22 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_30679A47_3A1C_4df8_96F8_6883287EB681__INCLUDED_)
#define EA_30679A47_3A1C_4df8_96F8_6883287EB681__INCLUDED_

#include "UInt8.h"
#include "Int48.h"

/**
 * Indicates a condition that must be satisfied for the Notification to be
 * triggered. 
 */
class Condition
{

public:
	Condition();
	virtual ~Condition();
	/**
	 * 0 = Reading value
	 * 1-255 = Reserved
	 */
	UInt8 attributeIdentifier;
	/**
	 * The value of the lower threshold
	 */
	Int48 lowerThreshold;
	/**
	 * The value of the upper threshold
	 */
	Int48 upperThreshold;

};
#endif // !defined(EA_30679A47_3A1C_4df8_96F8_6883287EB681__INCLUDED_)
