///////////////////////////////////////////////////////////
//  ApplianceLoadReductionType.h
//  Implementation of the Class ApplianceLoadReductionType
//  Created on:      13-Apr-2020 2:51:20 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_41CF999C_556C_4cb6_9B8B_EF8F546970B7__INCLUDED_)
#define EA_41CF999C_556C_4cb6_9B8B_EF8F546970B7__INCLUDED_

#include "UInt8.h"

/**
 * 0 - Delay Appliance Load
 * Parameter requesting the appliance to respond by providing a moderate load
 * reduction for the duration of a delay period.  Typically referring to a “non-
 * emergency” event in which appliances can continue operating if already in a
 * load consuming period.
 * 
 * 1 - Temporary Appliance Load Reduction
 * Parameter requesting the appliance to respond by providing an aggressive load
 * reduction for a short time period.  Typically referring to an
 * “emergency/spinning reserve” event in which an appliance should start shedding
 * load if currently in a load consuming period.
 * 
 * * Full definition of how appliances react when receiving each parameter is
 * document in the EPA document - ENERGY STAR® Program Requirements, Product
 * Specification for Residential Refrigerators and Freezers, Eligibility Criteria
 * 5, Draft 2 Version 5.0.
 * 
 * All other values reserved.
 */
class ApplianceLoadReductionType : public UInt8
{

public:
	ApplianceLoadReductionType();
	virtual ~ApplianceLoadReductionType();

};
#endif // !defined(EA_41CF999C_556C_4cb6_9B8B_EF8F546970B7__INCLUDED_)
