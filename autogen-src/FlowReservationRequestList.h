///////////////////////////////////////////////////////////
//  FlowReservationRequestList.h
//  Implementation of the Class FlowReservationRequestList
//  Created on:      13-Apr-2020 2:51:29 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_E23B2260_3B3A_4124_B9B0_1819215A0608__INCLUDED_)
#define EA_E23B2260_3B3A_4124_B9B0_1819215A0608__INCLUDED_

#include "UInt32.h"
#include "List.h"
#include "FlowReservationRequest.h"

/**
 * A List element to hold FlowReservationRequest objects.
 */
class FlowReservationRequestList : public List
{

public:
	FlowReservationRequestList();
	virtual ~FlowReservationRequestList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	FlowReservationRequest *m_FlowReservationRequest;

};
#endif // !defined(EA_E23B2260_3B3A_4124_B9B0_1819215A0608__INCLUDED_)
