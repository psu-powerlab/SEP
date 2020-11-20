///////////////////////////////////////////////////////////
//  CreditTypeType.h
//  Implementation of the Class CreditTypeType
//  Created on:      13-Apr-2020 2:51:23 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_272C5E2E_6F39_4f40_A9A7_5D055B07FDE8__INCLUDED_)
#define EA_272C5E2E_6F39_4f40_A9A7_5D055B07FDE8__INCLUDED_

#include "UInt8.h"

/**
 * 0 - Regular
 * 1 - Emergency
 * 2 - Regular, then Emergency
 * 3 - Emergency, then Regular
 * All other values reserved.
 */
class CreditTypeType : public UInt8
{

public:
	CreditTypeType();
	virtual ~CreditTypeType();

};
#endif // !defined(EA_272C5E2E_6F39_4f40_A9A7_5D055B07FDE8__INCLUDED_)
