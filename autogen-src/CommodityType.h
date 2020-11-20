///////////////////////////////////////////////////////////
//  CommodityType.h
//  Implementation of the Class CommodityType
//  Created on:      13-Apr-2020 2:51:22 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_E6514765_2179_4338_BCFB_3A95E760E30E__INCLUDED_)
#define EA_E6514765_2179_4338_BCFB_3A95E760E30E__INCLUDED_

#include "UInt8.h"

/**
 * 0 = Not Applicable (default, if not specified)
 * 1 = Electricity secondary metered value (a premises meter is typically on the
 * low voltage, or secondary, side of a service transformer)
 * 2 = Electricity primary metered value (measured on the high voltage, or primary,
 * side of the service transformer)
 * 4 = Air
 * 7 = NaturalGas
 * 8 = Propane
 * 9 = PotableWater
 * 10 = Steam
 * 11 = WasteWater
 * 12 = HeatingFluid
 * 13 = CoolingFluid
 * All other values reserved.
 */
class CommodityType : public UInt8
{

public:
	CommodityType();
	virtual ~CommodityType();

};
#endif // !defined(EA_E6514765_2179_4338_BCFB_3A95E760E30E__INCLUDED_)
