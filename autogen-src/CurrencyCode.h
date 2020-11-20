///////////////////////////////////////////////////////////
//  CurrencyCode.h
//  Implementation of the Class CurrencyCode
//  Created on:      13-Apr-2020 2:51:23 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_6AD05D2B_38F8_4d11_B355_03132C54F95B__INCLUDED_)
#define EA_6AD05D2B_38F8_4d11_B355_03132C54F95B__INCLUDED_

#include "UInt16.h"

/**
 * Follows codes defined in [ISO 4217].
 * 0 - Not Applicable (default, if not specified)
 * 36 - Australian Dollar
 * 124 - Canadian Dollar
 * 840 - US Dollar
 * 978 - Euro
 * This is not a complete list.
 */
class CurrencyCode : public UInt16
{

public:
	CurrencyCode();
	virtual ~CurrencyCode();

};
#endif // !defined(EA_6AD05D2B_38F8_4d11_B355_03132C54F95B__INCLUDED_)
