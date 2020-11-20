///////////////////////////////////////////////////////////
//  FlowReservationRequest.h
//  Implementation of the Class FlowReservationRequest
//  Created on:      13-Apr-2020 2:51:29 PM
///////////////////////////////////////////////////////////

#if !defined(EA_D3017046_A4BB_49de_B2A1_F8CCE0C2CF1B__INCLUDED_)
#define EA_D3017046_A4BB_49de_B2A1_F8CCE0C2CF1B__INCLUDED_

#include "TimeType.h"
#include "UInt16.h"
#include "SignedRealEnergy.h"
#include "DateTimeInterval.h"
#include "RequestStatus.h"
#include "IdentifiedObject.h"

/**
 * Used to request flow transactions. Client EndDevices submit a request for
 * charging or discharging from the server. The server creates an associated
 * FlowReservationResponse containing the charging parameters and interval to
 * provide a lower aggregated demand at the premises, or within a larger part of
 * the distribution system. 
 */
class FlowReservationRequest : public IdentifiedObject
{

public:
	FlowReservationRequest();
	virtual ~FlowReservationRequest();
	/**
	 * The time at which the request was created.
	 */
	TimeType creationTime;
	/**
	 * A value that is calculated by the storage device that defines the minimum
	 * duration, in seconds, that it will take to complete the actual flow transaction,
	 * including any ramp times and conditioning times, if applicable.
	 */
	UInt16 durationRequested;
	/**
	 * Indicates the total amount of energy, in Watt-Hours, requested to be
	 * transferred between the storage device and the electric power system. Positive
	 * values indicate charging and negative values indicate discharging. This sign
	 * convention is different than for the DER function where discharging is positive.
	 *  Note that the energyRequestNow attribute in the PowerStatus Object must always
	 * represent a charging solution and it is not allowed to have a negative value.
	 */
	SignedRealEnergy energyRequested;
	/**
	 * The time window during which the flow reservation is needed. For example, if an
	 * electric vehicle is set with a 7:00 AM time charge is needed, and price drops
	 * to the lowest tier at 11:00 PM, then this window would likely be from 11:00 PM
	 * until 7:00 AM. 
	 */
	DateTimeInterval intervalRequested;
	/**
	 * Indicates the sustained level of power, in Watts, that is requested. For
	 * charging this is calculated by the storage device and it represents the
	 * charging system capability (which for an electric vehicle must also account for
	 * any power limitations due to the EVSE control pilot). For discharging, a lower
	 * value than the inverter capability can be used as a target.
	 */
	ActivePower powerRequested;
	RequestStatus *m_RequestStatus;

};
#endif // !defined(EA_D3017046_A4BB_49de_B2A1_F8CCE0C2CF1B__INCLUDED_)
