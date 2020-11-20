///////////////////////////////////////////////////////////
//  RateComponent.h
//  Implementation of the Class RateComponent
//  Created on:      13-Apr-2020 2:51:38 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_3FC88EDD_BDCF_4a91_A280_54E9ED429E59__INCLUDED_)
#define EA_3FC88EDD_BDCF_4a91_A280_54E9ED429E59__INCLUDED_

#include "UnitValueType.h"
#include "RoleFlagsType.h"
#include "ActiveTimeTariffIntervalListLink.h"
#include "ReadingTypeLink.h"
#include "TimeTariffIntervalListLink.h"
#include "IdentifiedObject.h"

/**
 * Specifies the applicable charges for a single component of the rate, which
 * could be generation price or consumption price, for example. 
 */
class RateComponent : public IdentifiedObject
{

public:
	RateComponent();
	virtual ~RateComponent();
	/**
	 * Specifies the maximum flow rate (e.g. kW for electricity) for which this
	 * RateComponent applies, for the usage point and given rate / tariff.
	 * 
	 * In combination with flowRateStartLimit, allows a service provider to define the
	 * demand or output characteristics for the particular tariff design.  If a server
	 * includes the flowRateEndLimit attribute, then it SHALL also include
	 * flowRateStartLimit attribute.
	 * 
	 * For example, a service provider’s tariff limits customers to 20 kWs of demand
	 * for the given rate structure.  Above this threshold (from 20-50 kWs), there are
	 * different demand charges per unit of consumption.  The service provider can use
	 * flowRateStartLimit and flowRateEndLimit to describe the demand characteristics
	 * of the different rates.  Similarly, these attributes can be used to describe
	 * limits on premises DERs that might be producing a commodity and sending it back
	 * into the distribution network.
	 * 
	 * Note: At the time of writing, service provider tariffs with demand-based
	 * components were not originally identified as being in scope, and service
	 * provider tariffs vary widely in their use of demand components and the method
	 * for computing charges.  It is expected that industry groups (e.g., OpenSG) will
	 * document requirements in the future that the IEEE 2030.5 community can then use
	 * as source material for the next version of IEEE 2030.5.
	 */
	UnitValueType flowRateEndLimit;
	/**
	 * Specifies the minimum flow rate (e.g., kW for electricity) for which this
	 * RateComponent applies, for the usage point and given rate / tariff.
	 * 
	 * In combination with flowRateEndLimit, allows a service provider to define the
	 * demand or output characteristics for the particular tariff design.  If a server
	 * includes the flowRateStartLimit attribute, then it SHALL also include
	 * flowRateEndLimit attribute. 
	 */
	UnitValueType flowRateStartLimit;
	/**
	 * Specifies the roles that this usage point has been assigned.
	 */
	RoleFlagsType roleFlags;
	ActiveTimeTariffIntervalListLink *m_ActiveTimeTariffIntervalListLink;
	ReadingTypeLink *m_ReadingTypeLink;
	TimeTariffIntervalListLink *m_TimeTariffIntervalListLink;

};
#endif // !defined(EA_3FC88EDD_BDCF_4a91_A280_54E9ED429E59__INCLUDED_)
