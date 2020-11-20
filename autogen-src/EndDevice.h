///////////////////////////////////////////////////////////
//  EndDevice.h
//  Implementation of the Class EndDevice
//  Created on:      13-Apr-2020 2:51:27 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_FD52D6C2_C7EC_491c_BF1B_18F0EE903289__INCLUDED_)
#define EA_FD52D6C2_C7EC_491c_BF1B_18F0EE903289__INCLUDED_

#include "TimeType.h"
#include "UInt32.h"
#include "FlowReservationResponseListLink.h"
#include "SubscriptionListLink.h"
#include "RegistrationLink.h"
#include "FunctionSetAssignmentsListLink.h"
#include "FlowReservationRequestListLink.h"
#include "AbstractDevice.h"

/**
 * Asset container that performs one or more end device functions. Contains
 * information about individual devices in the network. 
 */
class EndDevice : public AbstractDevice
{

public:
	EndDevice();
	virtual ~EndDevice();
	/**
	 * The time at which this resource was last modified or created.
	 */
	TimeType changedTime;
	/**
	 * This attribute indicates whether or not an EndDevice is enabled, or registered,
	 * on the server. If a server sets this attribute to false, the device is no
	 * longer registered. It should be noted that servers can delete EndDevice
	 * instances, but using this attribute for some time is more convenient for
	 * clients.
	 */
	boolean enabled;
	/**
	 * POST rate, or how often EndDevice and subordinate resources should be POSTed,
	 * in seconds. A client MAY indicate a preferred postRate when POSTing EndDevice.
	 * A server MAY add or modify postRate to indicate its preferred posting rate.
	 */
	UInt32 postRate;
	FlowReservationResponseListLink *m_FlowReservationResponseListLink;
	SubscriptionListLink *m_SubscriptionListLink;
	RegistrationLink *m_RegistrationLink;
	FunctionSetAssignmentsListLink *m_FunctionSetAssignmentsListLink;
	FlowReservationRequestListLink *m_FlowReservationRequestListLink;

};
#endif // !defined(EA_FD52D6C2_C7EC_491c_BF1B_18F0EE903289__INCLUDED_)
