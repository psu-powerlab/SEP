///////////////////////////////////////////////////////////
//  CreditStatusType.h
//  Implementation of the Class CreditStatusType
//  Created on:      13-Apr-2020 2:51:23 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_C262C27A_5D4F_45b6_90FA_F310A1E488D9__INCLUDED_)
#define EA_C262C27A_5D4F_45b6_90FA_F310A1E488D9__INCLUDED_

#include "UInt8.h"

/**
 * 0 - Credit Ok
 * 1 - Credit Low
 * 2 - Credit Exhausted
 * 3 - Credit Negative
 * All other values reserved.
 */
class CreditStatusType : public UInt8
{

public:
	CreditStatusType();
	virtual ~CreditStatusType();

};
#endif // !defined(EA_C262C27A_5D4F_45b6_90FA_F310A1E488D9__INCLUDED_)
