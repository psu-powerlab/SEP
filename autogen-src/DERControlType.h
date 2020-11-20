///////////////////////////////////////////////////////////
//  DERControlType.h
//  Implementation of the Class DERControlType
//  Created on:      13-Apr-2020 2:51:25 PM
///////////////////////////////////////////////////////////

#if !defined(EA_E376B678_8D7B_4652_A37C_539F9D0AF7E8__INCLUDED_)
#define EA_E376B678_8D7B_4652_A37C_539F9D0AF7E8__INCLUDED_

#include "HexBinary32.h"

/**
 * Control modes supported by the DER.  Bit positions SHALL be defined as follows:
 * 
 * 0 - Charge mode
 * 1 - Discharge mode
 * 2 - opModConnect (Connect / Disconnect - implies galvanic isolation)
 * 3 - opModEnergize (Energize / De-Energize)
 * 4 - opModFixedPFAbsorbW (Fixed Power Factor Setpoint when absorbing active
 * power)
 * 5 - opModFixedPFInjectW (Fixed Power Factor Setpoint when injecting active
 * power)
 * 6 - opModFixedVar (Reactive Power Setpoint)
 * 7 - opModFixedW (Charge / Discharge Setpoint)
 * 8 - opModFreqDroop (Frequency-Watt Parameterized Mode)
 * 9 - opModFreqWatt (Frequency-Watt Curve Mode)
 * 10 - opModHFRTMayTrip (High Frequency Ride Through, May Trip Mode)
 * 11 - opModHFRTMustTrip (High Frequency Ride Through, Must Trip Mode)
 * 12 - opModHVRTMayTrip (High Voltage Ride Through, May Trip Mode)
 * 13 - opModHVRTMomentaryCessation (High Voltage Ride Through, Momentary
 * Cessation Mode)
 * 14 - opModHVRTMustTrip (High Voltage Ride Through, Must Trip Mode)
 * 15 - opModLFRTMayTrip (Low Frequency Ride Through, May Trip Mode)
 * 16 - opModLFRTMustTrip (Low Frequency Ride Through, Must Trip Mode)
 * 17 - opModLVRTMayTrip (Low Voltage Ride Through, May Trip Mode)
 * 18 - opModLVRTMomentaryCessation (Low Voltage Ride Through, Momentary Cessation
 * Mode)
 * 19 - opModLVRTMustTrip (Low Voltage Ride Through, Must Trip Mode)
 * 20 - opModMaxLimW (Maximum Active Power)
 * 21 - opModTargetVar (Target Reactive Power)
 * 22 - opModTargetW (Target Active Power)
 * 23 - opModVoltVar (Volt-Var Mode)
 * 24 - opModVoltWatt (Volt-Watt Mode)
 * 25 - opModWattPF (Watt-PowerFactor Mode)
 * 26 - opModWattVar (Watt-Var Mode)
 * All other values reserved.
 */
class DERControlType : public HexBinary32
{

public:
	DERControlType();
	virtual ~DERControlType();

};
#endif // !defined(EA_E376B678_8D7B_4652_A37C_539F9D0AF7E8__INCLUDED_)
