///////////////////////////////////////////////////////////
//  EventStatus.h
//  Implementation of the Class EventStatus
//  Created on:      13-Apr-2020 2:51:28 PM
///////////////////////////////////////////////////////////

#if !defined(EA_D89A41A9_F320_4fc8_A637_BFCB0953E8EF__INCLUDED_)
#define EA_D89A41A9_F320_4fc8_A637_BFCB0953E8EF__INCLUDED_

#include "UInt8.h"
#include "TimeType.h"
#include "boolean.h"
#include "String192.h"

/**
 * Current status information relevant to a specific object. The Status object is
 * used to indicate the current status of an Event. Devices can read the
 * containing resource (e.g. TextMessage) to get the most up to date status of the
 * event.  Devices can also subscribe to a specific resource instance to get
 * updates when any of its attributes change, including the Status object. 
 */
class EventStatus
{

public:
	EventStatus();
	virtual ~EventStatus();
	/**
	 * Field representing the current status type.
	 * 
	 * 0 = Scheduled
	 * This status indicates that the event has been scheduled and the event has not
	 * yet started.  The server SHALL set the event to this status when the event is
	 * first scheduled and persist until the event has become active or has been
	 * cancelled.  For events with a start time less than or equal to the current time,
	 * this status SHALL never be indicated, the event SHALL start with a status of
	 * “Active”.
	 * 
	 * 1 = Active
	 * This status indicates that the event is currently active. The server SHALL set
	 * the event to this status when the event reaches its earliest Effective Start
	 * Time.
	 * 
	 * 2 = Cancelled
	 * When events are cancelled, the Status.dateTime attribute SHALL be set to the
	 * time the cancellation occurred, which cannot be in the future.  The server is
	 * responsible for maintaining the cancelled event in its collection for the
	 * duration of the original event, or until the server has run out of space and
	 * needs to store a new event. Client devices SHALL be aware of Cancelled events,
	 * determine if the Cancelled event applies to them, and cancel the event
	 * immediately if applicable.
	 * 
	 * 3 = Cancelled with Randomization
	 * The server is responsible for maintaining the cancelled event in its collection
	 * for the duration of the Effective Scheduled Period. Client devices SHALL be
	 * aware of Cancelled with Randomization events, determine if the Cancelled event
	 * applies to them, and cancel the event immediately, using the larger of
	 * (absolute value of randomizeStart) and (absolute value of randomizeDuration) as
	 * the end randomization, in seconds. This Status.type SHALL NOT be used with
	 * "regular" Events, only with specializations of RandomizableEvent.
	 * 
	 * 4 = Superseded
	 * Events marked as Superseded by servers are events that may have been replaced
	 * by new events from the same program that target the exact same set of
	 * deviceCategory's (if applicable) AND DERControl controls (e.g., opModTargetW)
	 * (if applicable) and overlap for a given period of time. Servers SHALL mark an
	 * event as Superseded at the earliest Effective Start Time of the overlapping
	 * event. Servers are responsible for maintaining the Superseded event in their
	 * collection for the duration of the Effective Scheduled Period.
	 * Client devices encountering a Superseded event SHALL terminate execution of the
	 * event immediately and commence execution of the new event immediately, unless
	 * the current time is within the start randomization window of the superseded
	 * event, in which case the client SHALL obey the start randomization of the new
	 * event. This Status.type SHALL NOT be used with TextMessage, since multiple text
	 * messages can be active.
	 * 
	 * All other values reserved.
	 */
	UInt8 currentStatus;
	/**
	 * The dateTime attribute will provide a timestamp of when the current status was
	 * defined. dateTime MUST be set to the time at which the status change occurred,
	 * not a time in the future or past. 
	 */
	TimeType dateTime;
	/**
	 * Set to true by a server of this event if there are events that overlap this
	 * event in time and also overlap in some, but not all, deviceCategory's (if
	 * applicable) AND DERControl controls (e.g., opModTargetW) (if applicable) in the
	 * same function set instance.
	 */
	boolean potentiallySuperseded;
	/**
	 * Indicates the time that the potentiallySuperseded flag was set. 
	 */
	TimeType potentiallySupersededTime;
	/**
	 * The Reason attribute allows a Service provider to provide a textual explanation
	 * of the status. 
	 */
	String192 reason;

};
#endif // !defined(EA_D89A41A9_F320_4fc8_A637_BFCB0953E8EF__INCLUDED_)
