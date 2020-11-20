///////////////////////////////////////////////////////////
//  CostKindType.h
//  Implementation of the Class CostKindType
//  Created on:      13-Apr-2020 2:51:22 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_B193355F_55B6_4990_A033_D66805823393__INCLUDED_)
#define EA_B193355F_55B6_4990_A033_D66805823393__INCLUDED_

#include "UInt8.h"

/**
 * 0 - Carbon Dioxide emissions, in grams per unit
 * 1 - Sulfur Dioxide emissions, in grams per unit
 * 2 - Nitrogen Oxides emissions, in grams per unit
 * 3 - Renewable generation, as a percentage of overall generation
 * All other values reserved.
 */
class CostKindType : public UInt8
{

public:
	CostKindType();
	virtual ~CostKindType();

};
#endif // !defined(EA_B193355F_55B6_4990_A033_D66805823393__INCLUDED_)
