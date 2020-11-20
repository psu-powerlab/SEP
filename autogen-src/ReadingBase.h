///////////////////////////////////////////////////////////
//  ReadingBase.h
//  Implementation of the Class ReadingBase
//  Created on:      13-Apr-2020 2:51:39 PM
///////////////////////////////////////////////////////////

#if !defined(EA_C2A2B213_89B4_43b7_8B20_0AAE332EA941__INCLUDED_)
#define EA_C2A2B213_89B4_43b7_8B20_0AAE332EA941__INCLUDED_

#include "ConsumptionBlockType.h"
#include "HexBinary16.h"
#include "DateTimeInterval.h"
#include "TOUType.h"
#include "Int48.h"
#include "Resource.h"

/**
 * Specific value measured by a meter or other asset. ReadingBase is abstract,
 * used to define the elements common to Reading and IntervalReading.
 */
class ReadingBase : public Resource
{

public:
	ReadingBase();
	virtual ~ReadingBase();
	/**
	 * Indicates the consumption block related to the reading. REQUIRED if ReadingType
	 * numberOfConsumptionBlocks is non-zero. If not specified, is assumed to be "0 -
	 * N/A".
	 */
	ConsumptionBlockType consumptionBlock;
	/**
	 * List of codes indicating the quality of the reading, using specification:
	 * 
	 * Bit 0 - valid: data that has gone through all required validation checks and
	 * either passed them all or has been verified
	 * Bit 1 - manually edited: Replaced or approved by a human
	 * Bit 2 - estimated using reference day: data value was replaced by a machine
	 * computed value based on analysis of historical data using the same type of
	 * measurement.
	 * Bit 3 - estimated using linear interpolation: data value was computed using
	 * linear interpolation based on the readings before and after it
	 * Bit 4 - questionable: data that has failed one or more checks
	 * Bit 5 - derived: data that has been calculated (using logic or mathematical
	 * operations), not necessarily measured directly
	 * Bit 6 - projected (forecast): data that has been calculated as a projection or
	 * forecast of future readings
	 */
	HexBinary16 qualityFlags;
	/**
	 * The time interval associated with the reading. If not specified, then defaults
	 * to the intervalLength specified in the associated ReadingType. 
	 */
	DateTimeInterval timePeriod;
	/**
	 * Indicates the time of use tier related to the reading. REQUIRED if ReadingType
	 * numberOfTouTiers is non-zero. If not specified, is assumed to be "0 - N/A".
	 */
	TOUType touTier;
	/**
	 * Value in units specified by ReadingType
	 */
	Int48 value;

};
#endif // !defined(EA_C2A2B213_89B4_43b7_8B20_0AAE332EA941__INCLUDED_)
