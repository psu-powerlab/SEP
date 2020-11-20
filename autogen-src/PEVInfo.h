///////////////////////////////////////////////////////////
//  PEVInfo.h
//  Implementation of the Class PEVInfo
//  Created on:      13-Apr-2020 2:51:36 PM
//  Original author: vanausse
///////////////////////////////////////////////////////////

#if !defined(EA_4E8ADD13_82F9_4675_9AFE_A0D072D5BD9E__INCLUDED_)
#define EA_4E8ADD13_82F9_4675_9AFE_A0D072D5BD9E__INCLUDED_

#include "ActivePower.h"
#include "RealEnergy.h"
#include "UInt32.h"
#include "PerCent.h"
#include "TimeType.h"

/**
 * Contains attributes that can be exposed by PEVs and other devices that have
 * charging requirements. 
 */
class PEVInfo
{

public:
	PEVInfo();
	virtual ~PEVInfo();
	/**
	 * This is the actual power flow in or out of the charger or inverter. This is
	 * calculated by the vehicle based on actual measurements. This number is positive
	 * for charging.
	 */
	ActivePower chargingPowerNow;
	/**
	 * This is the amount of energy that must be transferred from the grid to EVSE and
	 * PEV to achieve the target state of charge allowing for charger efficiency and
	 * any vehicle and EVSE parasitic loads. This is calculated by the vehicle and
	 * changes throughout the connection as forward or reverse power flow change the
	 * battery state of charge.  This number is positive for charging.
	 */
	RealEnergy energyRequestNow;
	/**
	 * This is maximum power transfer capability that could be used for charging the
	 * PEV to perform the requested energy transfer.  It is the lower of the vehicle
	 * or EVSE physical power limitations. It is not based on economic considerations.
	 * The vehicle may draw less power than this value based on its charging cycle.
	 * The vehicle defines this parameter. This number is positive for charging power
	 * flow.
	 */
	ActivePower maxForwardPower;
	/**
	 * This is computed by the PEV based on the charging profile to complete the
	 * energy transfer if the maximum power is authorized.  The value will never be
	 * smaller than the ratio of the energy request to the power request because the
	 * charging profile may not allow the maximum power to be used throughout the
	 * transfer.   This is a critical parameter for determining whether any slack time
	 * exists in the charging cycle between the current time and the TCIN.
	 */
	UInt32 minimumChargingDuration;
	/**
	 * This is the target state of charge that is to be achieved during charging
	 * before the time of departure (TCIN).  The default value is 100%. The value
	 * cannot be set to a value less than the actual state of charge.
	 */
	PerCent targetStateOfCharge;
	/**
	 * Time Charge is Needed (TCIN) is the time that the PEV is expected to depart.
	 * The value is manually entered using controls and displays in the vehicle or on
	 * the EVSE or using a mobile device.  It is authenticated and saved by the PEV.
	 * This value may be updated during a charging session.
	 */
	TimeType timeChargeIsNeeded;
	/**
	 * This is the time that the parameters are updated, except for changes to TCIN. 
	 */
	TimeType timeChargingStatusPEV;

};
#endif // !defined(EA_4E8ADD13_82F9_4675_9AFE_A0D072D5BD9E__INCLUDED_)
