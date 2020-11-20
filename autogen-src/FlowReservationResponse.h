///////////////////////////////////////////////////////////
//  FlowReservationResponse.h
//  Implementation of the Class FlowReservationResponse
//  Created on:      13-Apr-2020 2:51:29 PM
///////////////////////////////////////////////////////////

#if !defined(EA_6FE29CC2_4AD6_4f42_AB75_B8373D636178__INCLUDED_)
#define EA_6FE29CC2_4AD6_4f42_AB75_B8373D636178__INCLUDED_

#include "SignedRealEnergy.h"
#include "mRIDType.h"
#include "Event.h"

/**
 * The server may modify the charging or discharging parameters and interval to
 * provide a lower aggregated demand at the premises, or within a larger part of
 * the distribution system. 
 */
class FlowReservationResponse : public Event
{

public:
	FlowReservationResponse();
	virtual ~FlowReservationResponse();
	/**
	 * Indicates the amount of energy available.
	 */
	SignedRealEnergy energyAvailable;
	/**
	 * Indicates the amount of power available.
	 */
	ActivePower powerAvailable;
	/**
	 * The subject field provides a method to match the response with the originating
	 * event. It is populated with the mRID of the corresponding
	 * FlowReservationRequest object.
	 */
	mRIDType subject;

};
#endif // !defined(EA_6FE29CC2_4AD6_4f42_AB75_B8373D636178__INCLUDED_)
