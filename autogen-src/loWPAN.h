///////////////////////////////////////////////////////////
//  loWPAN.h
//  Implementation of the Class loWPAN
//  Created on:      13-Apr-2020 2:51:34 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_AEDE5A94_3642_43aa_A209_C9E9792A3169__INCLUDED_)
#define EA_AEDE5A94_3642_43aa_A209_C9E9792A3169__INCLUDED_

#include "UInt32.h"

/**
 * Contains information specific to 6LoWPAN. 
 */
class loWPAN
{

public:
	loWPAN();
	virtual ~loWPAN();
	/**
	 * Number of Bytes received
	 */
	UInt32 octetsRx;
	/**
	 * Number of Bytes transmitted
	 */
	UInt32 octetsTx;
	/**
	 * Number of packets received
	 */
	UInt32 packetsRx;
	/**
	 * Number of packets transmitted
	 */
	UInt32 packetsTx;
	/**
	 * Number of errors receiving fragments
	 */
	UInt32 rxFragError;

};
#endif // !defined(EA_AEDE5A94_3642_43aa_A209_C9E9792A3169__INCLUDED_)
