///////////////////////////////////////////////////////////
//  InverterStatusType.h
//  Implementation of the Class InverterStatusType
//  Created on:      13-Apr-2020 2:51:32 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_B4627944_F054_4ec0_A68F_0B9D4D405EFA__INCLUDED_)
#define EA_B4627944_F054_4ec0_A68F_0B9D4D405EFA__INCLUDED_

#include "TimeType.h"
#include "UInt8.h"

/**
 * DER InverterStatus value:
 * 0 - N/A
 * 1 - off
 * 2 - sleeping (auto-shutdown) or DER is at low output power/voltage
 * 3 - starting up or ON but not producing power
 * 4 - tracking MPPT power point
 * 5 - forced power reduction/derating
 * 6 - shutting down
 * 7 - one or more faults exist
 * 8 - standby (service on unit) - DER may be at high output voltage/power
 * 9 - test mode
 * 10 - as defined in manufacturer status
 * All other values reserved.
 */
class InverterStatusType
{

public:
	InverterStatusType();
	virtual ~InverterStatusType();
	/**
	 * The date and time at which the state applied. 
	 */
	TimeType dateTime;
	/**
	 * The value indicating the state.
	 */
	UInt8 value;

};
#endif // !defined(EA_B4627944_F054_4ec0_A68F_0B9D4D405EFA__INCLUDED_)
