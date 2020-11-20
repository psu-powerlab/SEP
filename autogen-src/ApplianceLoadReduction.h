///////////////////////////////////////////////////////////
//  ApplianceLoadReduction.h
//  Implementation of the Class ApplianceLoadReduction
//  Created on:      13-Apr-2020 2:51:20 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_5CB8008D_6F7C_4f56_A572_BD29B152147E__INCLUDED_)
#define EA_5CB8008D_6F7C_4f56_A572_BD29B152147E__INCLUDED_

#include "ApplianceLoadReductionType.h"

/**
 * The ApplianceLoadReduction object is used by a Demand Response service provider
 * to provide signals for ENERGY STAR compliant appliances. See the definition of
 * ApplianceLoadReductionType for more information. 
 */
class ApplianceLoadReduction
{

public:
	ApplianceLoadReduction();
	virtual ~ApplianceLoadReduction();
	/**
	 * Indicates the type of appliance load reduction requested. 
	 */
	ApplianceLoadReductionType type;

};
#endif // !defined(EA_5CB8008D_6F7C_4f56_A572_BD29B152147E__INCLUDED_)
