///////////////////////////////////////////////////////////
//  DERCurveType.h
//  Implementation of the Class DERCurveType
//  Created on:      13-Apr-2020 2:51:26 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_4F8BC985_7ECE_4881_8CED_338FB6491A40__INCLUDED_)
#define EA_4F8BC985_7ECE_4881_8CED_338FB6491A40__INCLUDED_

#include "UInt8.h"

/**
 * 0 - opModFreqWatt (Frequency-Watt Curve Mode)
 * 1 - opModHFRTMayTrip (High Frequency Ride Through, May Trip Mode)
 * 2 - opModHFRTMustTrip (High Frequency Ride Through, Must Trip Mode)
 * 3 - opModHVRTMayTrip (High Voltage Ride Through, May Trip Mode)
 * 4 - opModHVRTMomentaryCessation (High Voltage Ride Through, Momentary Cessation
 * Mode)
 * 5 - opModHVRTMustTrip (High Voltage Ride Through, Must Trip Mode)
 * 6 - opModLFRTMayTrip (Low Frequency Ride Through, May Trip Mode)
 * 7 - opModLFRTMustTrip (Low Frequency Ride Through, Must Trip Mode)
 * 8 - opModLVRTMayTrip (Low Voltage Ride Through, May Trip Mode)
 * 9 - opModLVRTMomentaryCessation (Low Voltage Ride Through, Momentary Cessation
 * Mode)
 * 10 - opModLVRTMustTrip (Low Voltage Ride Through, Must Trip Mode)
 * 11 - opModVoltVar (Volt-Var Mode)
 * 12 - opModVoltWatt (Volt-Watt Mode)
 * 13 - opModWattPF (Watt-PowerFactor Mode)
 * 14 - opModWattVar (Watt-Var Mode)
 * All other values reserved.
 */
class DERCurveType : public UInt8
{

public:
	DERCurveType();
	virtual ~DERCurveType();

};
#endif // !defined(EA_4F8BC985_7ECE_4881_8CED_338FB6491A40__INCLUDED_)
