///////////////////////////////////////////////////////////
//  TariffProfile.h
//  Implementation of the Class TariffProfile
//  Created on:      13-Apr-2020 2:51:44 PM
///////////////////////////////////////////////////////////

#if !defined(EA_25E7F97B_479C_43f9_BE31_794944335FE9__INCLUDED_)
#define EA_25E7F97B_479C_43f9_BE31_794944335FE9__INCLUDED_

#include "CurrencyCode.h"
#include "PowerOfTenMultiplierType.h"
#include "PrimacyType.h"
#include "String20.h"
#include "ServiceKind.h"
#include "RateComponentListLink.h"
#include "IdentifiedObject.h"

/**
 * A schedule of charges; structure that allows the definition of tariff
 * structures such as step (block) and time of use (tier) when used in conjunction
 * with TimeTariffInterval and ConsumptionTariffInterval. 
 */
class TariffProfile : public IdentifiedObject
{

public:
	TariffProfile();
	virtual ~TariffProfile();
	/**
	 * The currency code indicating the currency for this TariffProfile.
	 */
	CurrencyCode currency;
	/**
	 * Indicates the power of ten multiplier for the price attribute.
	 */
	PowerOfTenMultiplierType pricePowerOfTenMultiplier;
	/**
	 * Indicates the relative primacy of the provider of this program.
	 */
	PrimacyType primacy;
	/**
	 * The rate code for this tariff profile.  Provided by the Pricing service
	 * provider per its internal business needs and practices and provides a method to
	 * identify the specific rate code for the TariffProfile instance.  This would
	 * typically not be communicated to the user except to facilitate troubleshooting
	 * due to its service provider-specific technical nature.
	 */
	String20 rateCode;
	/**
	 * The kind of service provided by this usage point. 
	 */
	ServiceKind serviceCategoryKind;
	RateComponentListLink *m_RateComponentListLink;

};
#endif // !defined(EA_25E7F97B_479C_43f9_BE31_794944335FE9__INCLUDED_)
