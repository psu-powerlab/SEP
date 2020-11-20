///////////////////////////////////////////////////////////
//  PowerFactorWithExcitation.h
//  Implementation of the Class PowerFactorWithExcitation
//  Created on:      13-Apr-2020 2:51:37 PM
//  Original author: kelynn
///////////////////////////////////////////////////////////

#if !defined(EA_EC309DE8_9E99_497b_81A0_BDD7FD1BEF54__INCLUDED_)
#define EA_EC309DE8_9E99_497b_81A0_BDD7FD1BEF54__INCLUDED_

#include "UInt16.h"
#include "PowerOfTenMultiplierType.h"

/**
 * Specifies a setpoint for Displacement Power Factor, the ratio between apparent
 * and active powers at the fundamental frequency (e.g. 60 Hz) and includes an
 * excitation flag.
 */
class PowerFactorWithExcitation
{

public:
	PowerFactorWithExcitation();
	virtual ~PowerFactorWithExcitation();
	/**
	 * Significand of an unsigned value of cos(theta) between 0 and 1.0. E.g. a value
	 * of 0.95 may be specified as a displacement of 950 and a multiplier of -3.
	 */
	UInt16 displacement;
	/**
	 * True when DER is absorbing reactive power (under-excited), false
	 * when DER is injecting reactive power (over-excited).
	 */
	boolean excitation;
	/**
	 * Specifies exponent of 'displacement'.
	 */
	PowerOfTenMultiplierType multiplier;

};
#endif // !defined(EA_EC309DE8_9E99_497b_81A0_BDD7FD1BEF54__INCLUDED_)
