///////////////////////////////////////////////////////////
//  EnvironmentalCost.h
//  Implementation of the Class EnvironmentalCost
//  Created on:      13-Apr-2020 2:51:28 PM
///////////////////////////////////////////////////////////

#if !defined(EA_B5AC93E6_6C97_4150_BA82_E4CD9D4AD8B2__INCLUDED_)
#define EA_B5AC93E6_6C97_4150_BA82_E4CD9D4AD8B2__INCLUDED_

#include "UInt32.h"
#include "CostKindType.h"
#include "UInt8.h"

/**
 * Provides alternative or secondary price information for the relevant
 * RateComponent. Supports jurisdictions that seek to convey the environmental
 * price per unit of the specified commodity not expressed in currency.
 * 
 * Implementers and consumers can use this attribute to prioritize operations of
 * their HAN devices (e.g., PEV charging during times of high availability of
 * renewable electricity resources).
 */
class EnvironmentalCost
{

public:
	EnvironmentalCost();
	virtual ~EnvironmentalCost();
	/**
	 * The estimated or actual environmental or other cost, per commodity unit defined
	 * by the ReadingType, for this RateComponent (e.g., grams of carbon dioxide
	 * emissions each per kWh). 
	 */
	UInt32 amount;
	/**
	 * The kind of cost referred to in the amount. 
	 */
	CostKindType costKind;
	/**
	 * The relative level of the amount attribute.  In conjunction with numCostLevels,
	 * this attribute informs a device of the relative scarcity of the amount
	 * attribute (e.g., a high or low availability of renewable generation).
	 * 
	 * numCostLevels and costLevel values SHALL ascend in order of scarcity, where "0"
	 * signals the lowest relative cost and higher values signal increasing cost.  For
	 * example, if numCostLevels is equal to “3,” then if the lowest relative
	 * costLevel were equal to “0,” devices would assume this is the lowest relative
	 * period to operate.  Likewise, if the costLevel in the next TimeTariffInterval
	 * instance is equal to “1,” then the device would assume it is relatively more
	 * expensive, in environmental terms, to operate during this TimeTariffInterval
	 * instance than the previous one.
	 * 
	 * There is no limit to the number of relative price levels other than that
	 * indicated in the attribute type, but for practicality, service providers should
	 * strive for simplicity and recognize the diminishing returns derived from
	 * increasing the numCostLevel value greater than four. 
	 */
	UInt8 costLevel;
	/**
	 * The number of all relative cost levels.
	 * 
	 * In conjunction with costLevel, numCostLevels signals the relative scarcity of
	 * the commodity for the duration of the TimeTariffInterval instance (e.g., a
	 * relative indication of cost). This is useful in providing context for nominal
	 * cost signals to consumers or devices that might see a range of amount values
	 * from different service providres or from the same service provider.
	 */
	UInt8 numCostLevels;

};
#endif // !defined(EA_B5AC93E6_6C97_4150_BA82_E4CD9D4AD8B2__INCLUDED_)
