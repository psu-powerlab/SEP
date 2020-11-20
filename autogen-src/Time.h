///////////////////////////////////////////////////////////
//  Time.h
//  Implementation of the Class Time
//  Created on:      13-Apr-2020 2:51:45 PM
//  Original author: kholbroo
///////////////////////////////////////////////////////////

#if !defined(EA_A0198164_47C6_4667_B511_3D15FA9CDB2D__INCLUDED_)
#define EA_A0198164_47C6_4667_B511_3D15FA9CDB2D__INCLUDED_

#include "TimeType.h"
#include "TimeOffsetType.h"
#include "UInt32.h"
#include "UInt8.h"
#include "Resource.h"

/**
 * Contains the representation of time, constantly updated.
 */
class Time : public Resource
{

public:
	Time();
	virtual ~Time();
	/**
	 * The current time, in the format defined by TimeType.
	 */
	sep::TimeType currentTime;
	/**
	 * Time at which daylight savings ends (dstOffset no longer applied).  Result of
	 * dstEndRule calculation.
	 */
	sep::TimeType dstEndTime;
	/**
	 * Daylight savings time offset from local standard time. A typical practice is
	 * advancing clocks one hour when daylight savings time is in effect, which would
	 * result in a positive dstOffset.
	 */
	sep::TimeOffsetType dstOffset;
	/**
	 * Time at which daylight savings begins (apply dstOffset).  Result of
	 * dstStartRule calculation.
	 */
	sep::TimeType dstStartTime;
	/**
	 * Local time: localTime = currentTime + tzOffset (+ dstOffset when in effect).
	 */
	sep::TimeType localTime;
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	sep::UInt32 pollRate;
	/**
	 * Metric indicating the quality of the time source from which the service
	 * acquired time. Lower (smaller) quality enumeration values are assumed to be
	 * more accurate.
	 * 3 - time obtained from external authoritative source such as NTP
	 * 4 - time obtained from level 3 source
	 * 5 - time manually set or obtained from level 4 source
	 * 6 - time obtained from level 5 source
	 * 7 - time intentionally uncoordinated
	 * All other values are reserved for future use.
	 */
	sep::UInt8 quality;
	/**
	 * Local time zone offset from currentTime. Does not include any daylight savings
	 * time offsets. For American time zones, a negative tzOffset SHALL be used (eg,
	 * EST = GMT-5 which is -18000).
	 */
	sep::TimeOffsetType tzOffset;

	boost::property_tree::ptree serialize();

	void Print ();
};
#endif // !defined(EA_A0198164_47C6_4667_B511_3D15FA9CDB2D__INCLUDED_)
