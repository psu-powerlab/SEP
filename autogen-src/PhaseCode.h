///////////////////////////////////////////////////////////
//  PhaseCode.h
//  Implementation of the Class PhaseCode
//  Created on:      13-Apr-2020 2:51:36 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_B483F0F3_E7D2_4792_A283_917E38FDDEB7__INCLUDED_)
#define EA_B483F0F3_E7D2_4792_A283_917E38FDDEB7__INCLUDED_

#include "UInt8.h"

/**
 * 0 = Not Applicable (default, if not specified)
 * 32 = Phase C (and S2)
 * 33 = Phase CN (and S2N)
 * 40 = Phase CA
 * 64 = Phase B
 * 65 = Phase BN
 * 66 = Phase BC
 * 128 = Phase A (and S1)
 * 129 = Phase AN (and S1N)
 * 132 = Phase AB
 * 224 = Phase ABC
 * All other values reserved.
 */
class PhaseCode : public UInt8
{

public:
	PhaseCode();
	virtual ~PhaseCode();

};
#endif // !defined(EA_B483F0F3_E7D2_4792_A283_917E38FDDEB7__INCLUDED_)
