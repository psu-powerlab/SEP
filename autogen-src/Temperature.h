///////////////////////////////////////////////////////////
//  Temperature.h
//  Implementation of the Class Temperature
//  Created on:      13-Apr-2020 2:51:44 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_7684169D_F3F8_4506_A3BA_640F1C93812F__INCLUDED_)
#define EA_7684169D_F3F8_4506_A3BA_640F1C93812F__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "UInt8.h"

/**
 * Specification of a temperature. 
 */
class Temperature
{

public:
	Temperature();
	virtual ~Temperature();
	/**
	 * Multiplier for 'unit'.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * The subject of the temperature measurement
	 * 0 - Enclosure
	 * 1 - Transformer
	 * 2 - HeatSink
	 */
	UInt8 subject;
	/**
	 * Value in Degrees Celsius (uom 23). 
	 */
	Int16 value;

};
#endif // !defined(EA_7684169D_F3F8_4506_A3BA_640F1C93812F__INCLUDED_)
