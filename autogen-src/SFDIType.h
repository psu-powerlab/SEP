///////////////////////////////////////////////////////////
//  SFDIType.h
//  Implementation of the Class SFDIType
//  Created on:      13-Apr-2020 2:51:42 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_C1842C3C_DB2E_40fc_BBF6_53E83E2E2E80__INCLUDED_)
#define EA_C1842C3C_DB2E_40fc_BBF6_53E83E2E2E80__INCLUDED_

#include "UInt40.h"

/**
 * Unsigned integer, max inclusive 687194767359, which is 2^36-1 (68719476735),
 * with added check digit. See Section 8.3.2 for check digit calculation.
 */
class SFDIType : public UInt40
{

public:
	SFDIType();
	virtual ~SFDIType();

};
#endif // !defined(EA_C1842C3C_DB2E_40fc_BBF6_53E83E2E2E80__INCLUDED_)
