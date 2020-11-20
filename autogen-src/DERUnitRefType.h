///////////////////////////////////////////////////////////
//  DERUnitRefType.h
//  Implementation of the Class DERUnitRefType
//  Created on:      13-Apr-2020 2:51:26 PM
//  Original author: kelynn
///////////////////////////////////////////////////////////

#if !defined(EA_FCEA73EF_B428_4eb3_A362_459BC3460750__INCLUDED_)
#define EA_FCEA73EF_B428_4eb3_A362_459BC3460750__INCLUDED_

#include "UInt8.h"

/**
 * Specifies context for interpreting percent values:
 * 0 - N/A
 * 1 - %setMaxW
 * 2 - %setMaxVar
 * 3 - %statVarAvail
 * 4 - %setEffectiveV
 * 5 - %setMaxChargeRateW
 * 6 - %setMaxDischargeRateW
 * 7 - %statWAvail
 * All other values reserved.
 */
class DERUnitRefType : public UInt8
{

public:
	DERUnitRefType();
	virtual ~DERUnitRefType();

};
#endif // !defined(EA_FCEA73EF_B428_4eb3_A362_459BC3460750__INCLUDED_)
