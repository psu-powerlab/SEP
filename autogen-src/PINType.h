///////////////////////////////////////////////////////////
//  PINType.h
//  Implementation of the Class PINType
//  Created on:      13-Apr-2020 2:51:36 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_B5BBD330_CF5A_48d3_97B1_5B8ABAB18020__INCLUDED_)
#define EA_B5BBD330_CF5A_48d3_97B1_5B8ABAB18020__INCLUDED_

#include "UInt32.h"

/**
 * 6 digit unsigned decimal integer (0 - 999999).
 * (Note that this only requires 20 bits, if it can be allocated.)
 */
class PINType : public UInt32
{

public:
	PINType();
	virtual ~PINType();

};
#endif // !defined(EA_B5BBD330_CF5A_48d3_97B1_5B8ABAB18020__INCLUDED_)
