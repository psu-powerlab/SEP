///////////////////////////////////////////////////////////
//  FixedVar.h
//  Implementation of the Class FixedVar
//  Created on:      13-Apr-2020 2:51:29 PM
//  Original author: kelynn
///////////////////////////////////////////////////////////

#if !defined(EA_F018874A_190B_4c8e_83EA_F7C1B55E4497__INCLUDED_)
#define EA_F018874A_190B_4c8e_83EA_F7C1B55E4497__INCLUDED_

#include "DERUnitRefType.h"
#include "SignedPerCent.h"

/**
 * Specifies a signed setpoint for reactive power.
 */
class FixedVar
{

public:
	FixedVar();
	virtual ~FixedVar();
	/**
	 * Indicates whether to interpret 'value' as %setMaxVar or %statVarAvail.
	 */
	DERUnitRefType refType;
	/**
	 * Specify a signed setpoint for reactive power in % (see 'refType' for context).
	 */
	SignedPerCent value;

};
#endif // !defined(EA_F018874A_190B_4c8e_83EA_F7C1B55E4497__INCLUDED_)
