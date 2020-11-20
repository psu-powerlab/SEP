///////////////////////////////////////////////////////////
//  LogEvent.h
//  Implementation of the Class LogEvent
//  Created on:      13-Apr-2020 2:51:33 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_156AE133_83A9_4f31_987D_07CEA86AA728__INCLUDED_)
#define EA_156AE133_83A9_4f31_987D_07CEA86AA728__INCLUDED_

#include "TimeType.h"
#include "String32.h"
#include "UInt32.h"
#include "UInt8.h"
#include "UInt16.h"
#include "PENType.h"
#include "Resource.h"

/**
 * A time stamped instance of a significant event detected by the device.
 */
class LogEvent : public Resource
{

public:
	LogEvent();
	virtual ~LogEvent();
	/**
	 * The date and time that the event occurred.
	 */
	TimeType createdDateTime;
	/**
	 * Human readable text that MAY be used to transmit additional details about the
	 * event. A host MAY remove this field when received.
	 */
	String32 details;
	/**
	 * May be used to transmit additional details about the event. 
	 */
	UInt32 extendedData;
	/**
	 * If the profileID indicates this is IEEE 2030.5, the functionSet is defined by
	 * IEEE 2030.5 and SHALL be one of the values from the table below (IEEE 2030.5
	 * function set identifiers). If the profileID is anything else, the functionSet
	 * is defined by the identified profile.
	 * 0	General (not specific to a function set)
	 * 1	Publish and Subscribe
	 * 2	End Device
	 * 3	Function Set Assignment
	 * 4	Response
	 * 5	Demand Response and Load Control
	 * 6	Metering
	 * 7	Pricing
	 * 8	Messaging
	 * 9	Billing
	 * 10	Prepayment
	 * 11	Distributed Energy Resources
	 * 12	Time
	 * 13	Software  Download
	 * 14	Device Information
	 * 15	Power Status
	 * 16	Network Status
	 * 17	Log Event List
	 * 18	Configuration
	 * 19	Security
	 * All other values are reserved.
	 */
	UInt8 functionSet;
	/**
	 * An 8 bit unsigned integer. logEventCodes are scoped to a profile and a function
	 * set. If the profile is IEEE 2030.5, the logEventCode is defined by IEEE 2030.5
	 * within one of the function sets of IEEE 2030.5. If the profile is anything else,
	 * the logEventCode is defined by the specified profile.
	 */
	UInt8 logEventCode;
	/**
	 * This 16-bit value, combined with createdDateTime, profileID, and logEventPEN,
	 * should provide a reasonable level of uniqueness.
	 */
	UInt16 logEventID;
	/**
	 * The Private Enterprise Number(PEN) of the entity that defined the profileID,
	 * functionSet, and logEventCode of the logEvent. IEEE 2030.5-assigned
	 * logEventCodes SHALL use the IEEE 2030.5 PEN.  Combinations of profileID,
	 * functionSet, and logEventCode SHALL have unique meaning within a logEventPEN
	 * and are defined by the owner of the PEN.
	 */
	PENType logEventPEN;
	/**
	 * The profileID identifies which profile (HA, BA, SE, etc) defines the following
	 * event information.
	 * 0	Not profile specific.
	 * 1	Vendor Defined
	 * 2	IEEE 2030.5
	 * 3	Home Automation
	 * 4	Building Automation
	 * All other values are reserved.
	 */
	UInt8 profileID;

};
#endif // !defined(EA_156AE133_83A9_4f31_987D_07CEA86AA728__INCLUDED_)
