///////////////////////////////////////////////////////////
//  DemandResponseProgram.h
//  Implementation of the Class DemandResponseProgram
//  Created on:      13-Apr-2020 2:51:24 PM
///////////////////////////////////////////////////////////

#if !defined(EA_693D5A28_9A44_4c3e_9702_878324297F91__INCLUDED_)
#define EA_693D5A28_9A44_4c3e_9702_878324297F91__INCLUDED_

#include "PerCent.h"
#include "PrimacyType.h"
#include "ActiveEndDeviceControlListLink.h"
#include "EndDeviceControlListLink.h"
#include "IdentifiedObject.h"

/**
 * Demand response program.
 */
class DemandResponseProgram : public IdentifiedObject
{

public:
	DemandResponseProgram();
	virtual ~DemandResponseProgram();
	/**
	 * This attribute allows program providers to specify the requested granularity of
	 * updates to LoadShedAvailability sheddablePercent. If not present, or set to 0,
	 * then updates to LoadShedAvailability SHALL NOT be provided. If present and
	 * greater than zero, then clients SHALL provide their LoadShedAvailability if it
	 * has not previously been provided, and thereafter if the difference between the
	 * previously provided value and the current value of LoadShedAvailability
	 * sheddablePercent is greater than availabilityUpdatePercentChangeThreshold.
	 */
	PerCent availabilityUpdatePercentChangeThreshold;
	/**
	 * This attribute allows program providers to specify the requested granularity of
	 * updates to LoadShedAvailability sheddablePower. If not present, or set to 0,
	 * then updates to LoadShedAvailability SHALL NOT be provided. If present and
	 * greater than zero, then clients SHALL provide their LoadShedAvailability if it
	 * has not previously been provided, and thereafter if the difference between the
	 * previously provided value and the current value of LoadShedAvailability
	 * sheddablePower is greater than availabilityUpdatePowerChangeThreshold.
	 */
	ActivePower availabilityUpdatePowerChangeThreshold;
	/**
	 * Indicates the relative primacy of the provider of this program.
	 */
	PrimacyType primacy;
	ActiveEndDeviceControlListLink *m_ActiveEndDeviceControlListLink;
	EndDeviceControlListLink *m_EndDeviceControlListLink;

};
#endif // !defined(EA_693D5A28_9A44_4c3e_9702_878324297F91__INCLUDED_)
