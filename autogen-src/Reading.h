///////////////////////////////////////////////////////////
//  Reading.h
//  Implementation of the Class Reading
//  Created on:      13-Apr-2020 2:51:39 PM
///////////////////////////////////////////////////////////

#if !defined(EA_6806EC86_9309_45db_8BBB_2BB1F5650283__INCLUDED_)
#define EA_6806EC86_9309_45db_8BBB_2BB1F5650283__INCLUDED_

#include "HexBinary16.h"
#include "SubscribableType.h"
#include "ReadingBase.h"

/**
 * Specific value measured by a meter or other asset. 
 */
class Reading : public ReadingBase
{

public:
	Reading();
	virtual ~Reading();
	/**
	 * The local identifier for this reading within the reading set. localIDs are
	 * assigned in order of creation time. For interval data, this value SHALL
	 * increase with each interval time, and for block/tier readings, localID SHALL
	 * not be specified. 
	 */
	HexBinary16 localID;
	/**
	 * Indicates whether or not subscriptions are supported for this resource, and
	 * whether or not conditional (thresholds) are supported. If not specified, is
	 * "not subscribable" (0).
	 */
	SubscribableType subscribable;

};
#endif // !defined(EA_6806EC86_9309_45db_8BBB_2BB1F5650283__INCLUDED_)
