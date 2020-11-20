///////////////////////////////////////////////////////////
//  SignedPerCent.h
//  Implementation of the Class SignedPerCent
//  Created on:      13-Apr-2020 2:51:42 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_740B2CC7_1113_430c_8372_3E2E4B7F0109__INCLUDED_)
#define EA_740B2CC7_1113_430c_8372_3E2E4B7F0109__INCLUDED_

#include "Int16.h"

/**
 * Used for signed percentages, specified in hundredths of a percent, -10000 -
 * 10000. (10000 = 100%)
 */
class SignedPerCent : public Int16
{

public:
	SignedPerCent();
	virtual ~SignedPerCent();

};
#endif // !defined(EA_740B2CC7_1113_430c_8372_3E2E4B7F0109__INCLUDED_)
