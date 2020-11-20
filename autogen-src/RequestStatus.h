///////////////////////////////////////////////////////////
//  RequestStatus.h
//  Implementation of the Class RequestStatus
//  Created on:      13-Apr-2020 2:51:40 PM
///////////////////////////////////////////////////////////

#if !defined(EA_929F7486_2CC3_48a6_95F9_FE30383E3993__INCLUDED_)
#define EA_929F7486_2CC3_48a6_95F9_FE30383E3993__INCLUDED_

#include "TimeType.h"
#include "UInt8.h"

/**
 * The RequestStatus object is used to indicate the current status of a Flow
 * Reservation Request.
 */
class RequestStatus
{

public:
	RequestStatus();
	virtual ~RequestStatus();
	/**
	 * The dateTime attribute will provide a timestamp of when the request status was
	 * set. dateTime MUST be set to the time at which the status change occurred, not
	 * a time in the future or past. 
	 */
	TimeType dateTime;
	/**
	 * Field representing the request status type.
	 * 0 = Requested
	 * 1 = Cancelled
	 * All other values reserved.
	 */
	UInt8 requestStatus;

};
#endif // !defined(EA_929F7486_2CC3_48a6_95F9_FE30383E3993__INCLUDED_)
