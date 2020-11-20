///////////////////////////////////////////////////////////
//  SupplyInterruptionOverride.h
//  Implementation of the Class SupplyInterruptionOverride
//  Created on:      13-Apr-2020 2:51:43 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_9F74363E_E532_4811_871C_F631BF99933D__INCLUDED_)
#define EA_9F74363E_E532_4811_871C_F631BF99933D__INCLUDED_

#include "String32.h"
#include "DateTimeInterval.h"
#include "Resource.h"

/**
 * SupplyInterruptionOverride: There may be periods of time when social,
 * regulatory or other concerns mean that service should not be interrupted, even
 * when available credit has been exhausted. Each Prepayment instance links to a
 * List of SupplyInterruptionOverride instances. Each SupplyInterruptionOverride
 * defines a contiguous period of time during which supply SHALL NOT be
 * interrupted.
 */
class SupplyInterruptionOverride : public Resource
{

public:
	SupplyInterruptionOverride();
	virtual ~SupplyInterruptionOverride();
	/**
	 * The description is a human readable text describing or naming the object. 
	 */
	String32 description;
	/**
	 * Interval defines the period of time during which supply should not be
	 * interrupted.
	 */
	DateTimeInterval interval;

};
#endif // !defined(EA_9F74363E_E532_4811_871C_F631BF99933D__INCLUDED_)
