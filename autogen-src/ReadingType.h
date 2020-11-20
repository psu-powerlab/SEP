///////////////////////////////////////////////////////////
//  ReadingType.h
//  Implementation of the Class ReadingType
//  Created on:      13-Apr-2020 2:51:39 PM
///////////////////////////////////////////////////////////

#if !defined(EA_78566367_0498_4b16_A8EB_1AA4DC08FA01__INCLUDED_)
#define EA_78566367_0498_4b16_A8EB_1AA4DC08FA01__INCLUDED_

#include "AccumulationBehaviourType.h"
#include "UnitValueType.h"
#include "CommodityType.h"
#include "DataQualifierType.h"
#include "FlowDirectionType.h"
#include "UInt32.h"
#include "KindType.h"
#include "UInt8.h"
#include "PhaseCode.h"
#include "PowerOfTenMultiplierType.h"
#include "UInt48.h"
#include "boolean.h"
#include "UomType.h"
#include "Resource.h"

/**
 * Type of data conveyed by a specific Reading. See IEC 61968 Part 9 Annex C for
 * full definitions of these values. 
 */
class ReadingType : public Resource
{

public:
	ReadingType();
	virtual ~ReadingType();
	/**
	 * The “accumulation behaviour” indicates how the value is represented to
	 * accumulate over time.
	 */
	AccumulationBehaviourType accumulationBehaviour;
	/**
	 * The amount of heat generated when a given mass of fuel is completely burned.
	 * The CalorificValue is used to convert the measured volume or mass of gas into
	 * kWh. The CalorificValue attribute represents the current active value.
	 */
	UnitValueType calorificValue;
	/**
	 * Indicates the commodity applicable to this ReadingType.
	 */
	CommodityType commodity;
	/**
	 * Accounts for changes in the volume of gas based on temperature and pressure.
	 * The ConversionFactor attribute represents the current active value. The
	 * ConversionFactor is dimensionless. The default value for the ConversionFactor
	 * is 1, which means no conversion is applied. A price server can advertise a
	 * new/different value at any time.
	 */
	UnitValueType conversionFactor;
	/**
	 * The data type can be used to describe a salient attribute of the data. Possible
	 * values are average, absolute, and etc. 
	 */
	DataQualifierType dataQualifier;
	/**
	 * Anything involving current might have a flow direction. Possible values include
	 * forward and reverse.
	 */
	FlowDirectionType flowDirection;
	/**
	 * Default interval length specified in seconds.
	 */
	UInt32 intervalLength;
	/**
	 * Compound class that contains kindCategory and kindIndex
	 */
	KindType kind;
	/**
	 * To be populated for mirrors of interval data to set the expected number of
	 * intervals per ReadingSet. Servers may discard intervals received that exceed
	 * this number.
	 */
	UInt8 maxNumberOfIntervals;
	/**
	 * Number of consumption blocks. 0 means not applicable, and is the default if not
	 * specified. The value needs to be at least 1 if any actual prices are provided.
	 */
	UInt8 numberOfConsumptionBlocks;
	/**
	 * The number of TOU tiers that can be used by any resource configured by this
	 * ReadingType. Servers SHALL populate this value with the largest touTier value
	 * that will <i>ever</i> be used while this ReadingType is in effect. Servers
	 * SHALL set numberOfTouTiers equal to the number of standard TOU tiers plus the
	 * number of CPP tiers that may be used while this ReadingType is in effect.
	 * Servers SHALL specify a value between 0 and 255 (inclusive) for
	 * numberOfTouTiers (servers providing flat rate pricing SHOULD set
	 * numberOfTouTiers to 0, as in practice there is no difference between having no
	 * tiers and having one tier).
	 */
	UInt8 numberOfTouTiers;
	/**
	 * Contains phase information associated with the type. 
	 */
	PhaseCode phase;
	/**
	 * Indicates the power of ten multiplier applicable to the unit of measure of this
	 * ReadingType.
	 */
	PowerOfTenMultiplierType powerOfTenMultiplier;
	/**
	 * Default sub-interval length specified in seconds for Readings of ReadingType.
	 * Some demand calculations are done over a number of smaller intervals. For
	 * example, in a rolling demand calculation, the demand value is defined as the
	 * rolling sum of smaller intervals over the intervalLength. The subintervalLength
	 * is the length of the smaller interval in this calculation. It SHALL be an
	 * integral division of the intervalLength. The number of sub-intervals can be
	 * calculated by dividing the intervalLength by the subintervalLength.
	 */
	UInt32 subIntervalLength;
	/**
	 * Reflects the supply limit set in the meter. This value can be compared to the
	 * Reading value to understand if limits are being approached or exceeded. Units
	 * follow the same definition as in this ReadingType.
	 */
	UInt48 supplyLimit;
	/**
	 * Specifies whether or not the consumption blocks are differentiated by TOUTier
	 * or not. Default is false, if not specified.
	 * true = consumption accumulated over individual tiers
	 * false = consumption accumulated over all tiers
	 */
	boolean tieredConsumptionBlocks;
	/**
	 * Indicates the measurement type for the units of measure for the readings of
	 * this type. 
	 */
	UomType uom;

};
#endif // !defined(EA_78566367_0498_4b16_A8EB_1AA4DC08FA01__INCLUDED_)
