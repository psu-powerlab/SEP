///////////////////////////////////////////////////////////
//  Event.h
//  Implementation of the Class Event
//  Created on:      13-Apr-2020 2:51:28 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_1A7484F2_A0EE_4e1c_9B7B_DD758ABE99AA__INCLUDED_)
#define EA_1A7484F2_A0EE_4e1c_9B7B_DD758ABE99AA__INCLUDED_

#include "TimeType.h"
#include "DateTimeInterval.h"
#include "EventStatus.h"
#include "RespondableSubscribableIdentifiedObject.h"

/**
 * An Event indicates information that applies to a particular period of time.
 * Events SHALL be executed relative to the time of the server, as described in
 * the Time function set section 11.1.
 */
class Event : public RespondableSubscribableIdentifiedObject
{

public:
	Event();
	virtual ~Event();
	/**
	 * The time at which the Event was created.
	 */
	TimeType creationTime;
	/**
	 * The period during which the Event applies.
	 */
	DateTimeInterval interval;
	EventStatus m_EventStatus;

};
#endif // !defined(EA_1A7484F2_A0EE_4e1c_9B7B_DD758ABE99AA__INCLUDED_)
