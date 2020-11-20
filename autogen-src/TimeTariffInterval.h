///////////////////////////////////////////////////////////
//  TimeTariffInterval.h
//  Implementation of the Class TimeTariffInterval
//  Created on:      13-Apr-2020 2:51:45 PM
///////////////////////////////////////////////////////////

#if !defined(EA_6E00EC2F_A214_4911_8189_0F4B54395BE1__INCLUDED_)
#define EA_6E00EC2F_A214_4911_8189_0F4B54395BE1__INCLUDED_

#include "TOUType.h"
#include "ConsumptionTariffIntervalListLink.h"
#include "RandomizableEvent.h"

/**
 * Describes the time-differentiated portion of the RateComponent, if applicable,
 * and provides the ability to specify multiple time intervals, each with its own
 * consumption-based components and other attributes.
 */
class TimeTariffInterval : public RandomizableEvent
{

public:
	TimeTariffInterval();
	virtual ~TimeTariffInterval();
	/**
	 * Indicates the time of use tier related to the reading. If not specified, is
	 * assumed to be "0 - N/A".
	 */
	TOUType touTier;
	ConsumptionTariffIntervalListLink *m_ConsumptionTariffIntervalListLink;

};
#endif // !defined(EA_6E00EC2F_A214_4911_8189_0F4B54395BE1__INCLUDED_)
