///////////////////////////////////////////////////////////
//  UomType.h
//  Implementation of the Class UomType
//  Created on:      13-Apr-2020 2:51:46 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_FE756613_03A7_4fa7_A96B_C20DAF5BA309__INCLUDED_)
#define EA_FE756613_03A7_4fa7_A96B_C20DAF5BA309__INCLUDED_

#include "UInt8.h"

/**
 * The following values are recommended values sourced from the unit of measure
 * enumeration in IEC 61968-9 [61968]. Other values from the unit of measure
 * enumeration in IEC 61968-9 [61968] MAY be used.
 * 0 = Not Applicable (default, if not specified)
 * 5 = A (Current in Amperes (RMS))
 * 6 = Kelvin (Temperature)
 * 23 = Degrees Celsius (Relative temperature)
 * 29 = Voltage
 * 31 = J (Energy joule)
 * 33 = Hz (Frequency)
 * 38 =W (Real power in Watts)
 * 42 = m3 (Cubic Meter)
 * 61 = VA (Apparent power)
 * 63 = var (Reactive power)
 * 65 = CosTheta (Displacement Power Factor)
 * 67 = V² (Volts squared)
 * 69 = A² (Amp squared)
 * 71 = VAh (Apparent energy)
 * 72 = Wh (Real energy in Watt-hours)
 * 73 = varh (Reactive energy)
 * 106 = Ah (Ampere-hours / Available Charge)
 * 119 = ft3 (Cubic Feet)
 * 122 = ft3/h (Cubic Feet per Hour)
 * 125 = m3/h (Cubic Meter per Hour)
 * 128 = US gl (US Gallons)
 * 129 = US gl/h (US Gallons per Hour)
 * 130 = IMP gl (Imperial Gallons)
 * 131 = IMP gl/h (Imperial Gallons per Hour)
 * 132 = BTU
 * 133 = BTU/h
 * 134 = Liter
 * 137 = L/h (Liters per Hour)
 * 140 = PA(gauge)
 * 155 = PA(absolute)
 * 169 = Therm
 */
class UomType : public UInt8
{

public:
	UomType();
	virtual ~UomType();

};
#endif // !defined(EA_FE756613_03A7_4fa7_A96B_C20DAF5BA309__INCLUDED_)
