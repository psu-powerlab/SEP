///////////////////////////////////////////////////////////
//  ReadingSetBase.h
//  Implementation of the Class ReadingSetBase
//  Created on:      13-Apr-2020 2:51:39 PM
///////////////////////////////////////////////////////////

#if !defined(EA_444463F5_6D4D_4166_BFBE_9AC8513DF7E2__INCLUDED_)
#define EA_444463F5_6D4D_4166_BFBE_9AC8513DF7E2__INCLUDED_

#include "DateTimeInterval.h"
#include "IdentifiedObject.h"

/**
 * A set of Readings of the ReadingType indicated by the parent MeterReading.
 * ReadingBase is abstract, used to define the elements common to ReadingSet and
 * IntervalBlock.
 */
class ReadingSetBase : public IdentifiedObject
{

public:
	ReadingSetBase();
	virtual ~ReadingSetBase();
	/**
	 * Specifies the time range during which the contained readings were taken.
	 */
	DateTimeInterval timePeriod;

};
#endif // !defined(EA_444463F5_6D4D_4166_BFBE_9AC8513DF7E2__INCLUDED_)
