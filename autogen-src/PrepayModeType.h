///////////////////////////////////////////////////////////
//  PrepayModeType.h
//  Implementation of the Class PrepayModeType
//  Created on:      13-Apr-2020 2:51:37 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_1B8832E3_87A5_4a95_85A3_71FBFC7AEF00__INCLUDED_)
#define EA_1B8832E3_87A5_4a95_85A3_71FBFC7AEF00__INCLUDED_

#include "UInt8.h"

/**
 * 0 - Central Wallet
 * 1 - ESI
 * 2 - Local
 * 3 - Credit
 * All other values reserved.
 */
class PrepayModeType : public UInt8
{

public:
	PrepayModeType();
	virtual ~PrepayModeType();

};
#endif // !defined(EA_1B8832E3_87A5_4a95_85A3_71FBFC7AEF00__INCLUDED_)
