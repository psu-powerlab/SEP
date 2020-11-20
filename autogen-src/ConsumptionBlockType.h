///////////////////////////////////////////////////////////
//  ConsumptionBlockType.h
//  Implementation of the Class ConsumptionBlockType
//  Created on:      13-Apr-2020 2:51:22 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_5F0C2414_D7A0_49d5_AFFF_EEF36713E8FE__INCLUDED_)
#define EA_5F0C2414_D7A0_49d5_AFFF_EEF36713E8FE__INCLUDED_

#include "UInt8.h"

/**
 * 0 = Not Applicable (default, if not specified)
 * 1 = Block 1
 * 2 = Block 2
 * 3 = Block 3
 * 4 = Block 4
 * 5 = Block 5
 * 6 = Block 6
 * 7 = Block 7
 * 8 = Block 8
 * 9 = Block 9
 * 10 = Block 10
 * 11 = Block 11
 * 12 = Block 12
 * 13 = Block 13
 * 14 = Block 14
 * 15 = Block 15
 * 16 = Block 16
 * All other values reserved.
 */
class ConsumptionBlockType : public UInt8
{

public:
	ConsumptionBlockType();
	virtual ~ConsumptionBlockType();

};
#endif // !defined(EA_5F0C2414_D7A0_49d5_AFFF_EEF36713E8FE__INCLUDED_)
