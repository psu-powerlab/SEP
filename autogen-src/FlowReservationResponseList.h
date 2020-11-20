///////////////////////////////////////////////////////////
//  FlowReservationResponseList.h
//  Implementation of the Class FlowReservationResponseList
//  Created on:      13-Apr-2020 2:51:29 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_8572C2BB_5B33_4bf8_AF76_0F99526E9899__INCLUDED_)
#define EA_8572C2BB_5B33_4bf8_AF76_0F99526E9899__INCLUDED_

#include "UInt32.h"
#include "SubscribableList.h"
#include "FlowReservationResponse.h"

/**
 * A List element to hold FlowReservationResponse objects.
 */
class FlowReservationResponseList : public SubscribableList
{

public:
	FlowReservationResponseList();
	virtual ~FlowReservationResponseList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	FlowReservationResponse *m_FlowReservationResponse;

};
#endif // !defined(EA_8572C2BB_5B33_4bf8_AF76_0F99526E9899__INCLUDED_)
