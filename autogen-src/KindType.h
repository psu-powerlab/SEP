///////////////////////////////////////////////////////////
//  KindType.h
//  Implementation of the Class KindType
//  Created on:      13-Apr-2020 2:51:32 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_727CB827_BA07_443f_81E7_A1704995E32D__INCLUDED_)
#define EA_727CB827_BA07_443f_81E7_A1704995E32D__INCLUDED_

#include "UInt8.h"

/**
 * 0 = Not Applicable (default, if not specified)
 * 3 = Currency
 * 8 = Demand
 * 12 = Energy
 * 37 = Power
 * All other values reserved.
 */
class KindType : public UInt8
{

public:
	KindType();
	virtual ~KindType();

};
#endif // !defined(EA_727CB827_BA07_443f_81E7_A1704995E32D__INCLUDED_)
