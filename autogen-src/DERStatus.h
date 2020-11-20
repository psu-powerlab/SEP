///////////////////////////////////////////////////////////
//  DERStatus.h
//  Implementation of the Class DERStatus
//  Created on:      13-Apr-2020 2:51:26 PM
///////////////////////////////////////////////////////////

#if !defined(EA_9743065F_59E2_4ad5_9F41_0EB3D0914086__INCLUDED_)
#define EA_9743065F_59E2_4ad5_9F41_0EB3D0914086__INCLUDED_

#include "HexBinary32.h"
#include "ConnectStatusType.h"
#include "InverterStatusType.h"
#include "LocalControlModeStatusType.h"
#include "ManufacturerStatusType.h"
#include "OperationalModeStatusType.h"
#include "TimeType.h"
#include "StateOfChargeStatusType.h"
#include "StorageModeStatusType.h"
#include "SubscribableResource.h"

/**
 * DER status information. 
 */
class DERStatus : public SubscribableResource
{

public:
	DERStatus();
	virtual ~DERStatus();
	/**
	 * Bitmap indicating the status of DER alarms (see DER LogEvents for more details).
	 * 
	 * 0 - DER_FAULT_OVER_CURRENT
	 * 1 - DER_FAULT_OVER_VOLTAGE
	 * 2 - DER_FAULT_UNDER_VOLTAGE
	 * 3 - DER_FAULT_OVER_FREQUENCY
	 * 4 - DER_FAULT_UNDER_FREQUENCY
	 * 5 - DER_FAULT_VOLTAGE_IMBALANCE
	 * 6 - DER_FAULT_CURRENT_IMBALANCE
	 * 7 - DER_FAULT_EMERGENCY_LOCAL
	 * 8 - DER_FAULT_EMERGENCY_REMOTE
	 * 9 - DER_FAULT_LOW_POWER_INPUT
	 * 10 - DER_FAULT_PHASE_ROTATION
	 * 11-31 - Reserved
	 */
	HexBinary32 alarmStatus;
	/**
	 * Connect/status value for generator DER.
	 * See ConnectStatusType for values.
	 */
	ConnectStatusType genConnectStatus;
	/**
	 * DER InverterStatus/value.
	 * See InverterStatusType for values.
	 */
	InverterStatusType inverterStatus;
	/**
	 * The local control mode status.
	 * See LocalControlModeStatusType for values.
	 */
	LocalControlModeStatusType localControlModeStatus;
	/**
	 * Manufacturer status code.
	 */
	ManufacturerStatusType manufacturerStatus;
	/**
	 * Operational mode currently in use.
	 * See OperationalModeStatusType for values.
	 */
	OperationalModeStatusType operationalModeStatus;
	/**
	 * The timestamp when the current status was last updated. 
	 */
	TimeType readingTime;
	/**
	 * State of charge status.
	 * See StateOfChargeStatusType for values.
	 */
	StateOfChargeStatusType stateOfChargeStatus;
	/**
	 * Storage mode status.
	 * See StorageModeStatusType for values.
	 */
	StorageModeStatusType storageModeStatus;
	/**
	 * Connect/status value for storage DER.
	 * See ConnectStatusType for values.
	 */
	ConnectStatusType storConnectStatus;

};
#endif // !defined(EA_9743065F_59E2_4ad5_9F41_0EB3D0914086__INCLUDED_)
