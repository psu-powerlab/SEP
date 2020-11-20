///////////////////////////////////////////////////////////
//  ConsumptionTariffInterval.h
//  Implementation of the Class ConsumptionTariffInterval
//  Created on:      13-Apr-2020 2:51:22 PM
///////////////////////////////////////////////////////////

#if !defined(EA_4703CE80_1FA0_423e_B81B_5F83CE2B8DDB__INCLUDED_)
#define EA_4703CE80_1FA0_423e_B81B_5F83CE2B8DDB__INCLUDED_

#include "ConsumptionBlockType.h"
#include "Int32.h"
#include "UInt48.h"
#include "EnvironmentalCost.h"
#include "Resource.h"

/**
 * One of a sequence of thresholds defined in terms of consumption quantity of a
 * service such as electricity, water, gas, etc. It defines the steps or blocks in
 * a step tariff structure, where startValue simultaneously defines the entry
 * value of this step and the closing value of the previous step. Where
 * consumption is greater than startValue, it falls within this block and where
 * consumption is less than or equal to startValue, it falls within one of the
 * previous blocks.
 */
class ConsumptionTariffInterval : public Resource
{

public:
	ConsumptionTariffInterval();
	virtual ~ConsumptionTariffInterval();
	/**
	 * Indicates the consumption block related to the reading. If not specified, is
	 * assumed to be "0 - N/A".
	 */
	ConsumptionBlockType consumptionBlock;
	/**
	 * The charge for this rate component, per unit of measure defined by the
	 * associated ReadingType, in currency specified in TariffProfile.
	 * 
	 * The Pricing service provider determines the appropriate price attribute value
	 * based on its applicable regulatory rules. For example, price could be net or
	 * inclusive of applicable taxes, fees, or levies.
	 * 
	 * The Billing function set provides the ability to represent billing information
	 * in a more detailed manner. 
	 */
	Int32 price;
	/**
	 * The lowest level of consumption that defines the starting point of this
	 * consumption step or block. Thresholds start at zero for each billing period.
	 * 
	 * 
	 * If specified, the first ConsumptionTariffInterval.startValue for a
	 * TimeTariffInteral instance SHALL begin at "0." Subsequent
	 * ConsumptionTariffInterval.startValue elements SHALL be greater than the
	 * previous one.
	 */
	UInt48 startValue;
	EnvironmentalCost m_EnvironmentalCost;

};
#endif // !defined(EA_4703CE80_1FA0_423e_B81B_5F83CE2B8DDB__INCLUDED_)
