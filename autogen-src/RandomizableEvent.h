///////////////////////////////////////////////////////////
//  RandomizableEvent.h
//  Implementation of the Class RandomizableEvent
//  Created on:      13-Apr-2020 2:51:38 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_22B7C0F2_9ACE_437e_A196_D6D2DB200379__INCLUDED_)
#define EA_22B7C0F2_9ACE_437e_A196_D6D2DB200379__INCLUDED_

#include "OneHourRangeType.h"
#include "Event.h"

/**
 * An Event that can indicate time ranges over which the start time and duration
 * SHALL be randomized. 
 */
class RandomizableEvent : public Event
{

public:
	RandomizableEvent();
	virtual ~RandomizableEvent();
	/**
	 * Number of seconds boundary inside which a random value must be selected to be
	 * applied to the associated interval duration, to avoid sudden synchronized
	 * demand changes. If related to price level changes, sign may be ignored. Valid
	 * range is -3600 to 3600. If not specified, 0 is the default.
	 */
	OneHourRangeType randomizeDuration;
	/**
	 * Number of seconds boundary inside which a random value must be selected to be
	 * applied to the associated interval start time, to avoid sudden synchronized
	 * demand changes. If related to price level changes, sign may be ignored. Valid
	 * range is -3600 to 3600. If not specified, 0 is the default.
	 */
	OneHourRangeType randomizeStart;

};
#endif // !defined(EA_22B7C0F2_9ACE_437e_A196_D6D2DB200379__INCLUDED_)
