///////////////////////////////////////////////////////////
//  FreqDroopType.h
//  Implementation of the Class FreqDroopType
//  Created on:      13-Apr-2020 2:51:29 PM
//  Original author: 204053373
///////////////////////////////////////////////////////////

#if !defined(EA_AA1A8BC6_7B43_4413_9044_4A53C584C88B__INCLUDED_)
#define EA_AA1A8BC6_7B43_4413_9044_4A53C584C88B__INCLUDED_

#include "UInt32.h"
#include "UInt16.h"

/**
 * Type for Frequency-Droop (Frequency-Watt) operation.
 */
class FreqDroopType
{

public:
	FreqDroopType();
	virtual ~FreqDroopType();
	/**
	 * Frequency droop dead band for over-frequency conditions. In thousandths of Hz.
	 */
	UInt32 dBOF;
	/**
	 * Frequency droop dead band for under-frequency conditions. In thousandths of Hz.
	 */
	UInt32 dBUF;
	/**
	 * Frequency droop per-unit frequency change for over-frequency conditions
	 * corresponding to 1 per-unit power output change. In thousandths, unitless.
	 */
	UInt16 kOF;
	/**
	 * Frequency droop per-unit frequency change for under-frequency conditions
	 * corresponding to 1 per-unit power output change. In thousandths, unitless.
	 */
	UInt16 kUF;
	/**
	 * Open loop response time, the duration from a step change in control signal
	 * input until the output changes by 90% of its final change before any overshoot,
	 * in hundredths of a second. Resolution is 1/100 sec. A value of 0 is used to
	 * mean no limit.
	 */
	UInt16 openLoopTms;

};
#endif // !defined(EA_AA1A8BC6_7B43_4413_9044_4A53C584C88B__INCLUDED_)
