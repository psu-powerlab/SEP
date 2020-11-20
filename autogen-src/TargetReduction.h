///////////////////////////////////////////////////////////
//  TargetReduction.h
//  Implementation of the Class TargetReduction
//  Created on:      13-Apr-2020 2:51:44 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_26AE2346_70F1_4ffc_83EB_2FCD886B93E0__INCLUDED_)
#define EA_26AE2346_70F1_4ffc_83EB_2FCD886B93E0__INCLUDED_

#include "UnitType.h"
#include "UInt16.h"

/**
 * The TargetReduction object is used by a Demand Response service provider to
 * provide a RECOMMENDED threshold that a device/premises should maintain its
 * consumption below. For example, a service provider can provide a RECOMMENDED
 * threshold of some kWh for a 3-hour event. This means that the device/premises
 * would maintain its consumption below the specified limit for the specified
 * period. 
 */
class TargetReduction
{

public:
	TargetReduction();
	virtual ~TargetReduction();
	/**
	 * Indicates the type of reduction requested. 
	 */
	UnitType type;
	/**
	 * Indicates the requested amount of the relevant commodity to be reduced.
	 */
	UInt16 value;

};
#endif // !defined(EA_26AE2346_70F1_4ffc_83EB_2FCD886B93E0__INCLUDED_)
