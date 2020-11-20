///////////////////////////////////////////////////////////
//  mRIDType.h
//  Implementation of the Class mRIDType
//  Created on:      13-Apr-2020 2:51:35 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_696AD155_A594_46d5_A76E_47478ADD6EF1__INCLUDED_)
#define EA_696AD155_A594_46d5_A76E_47478ADD6EF1__INCLUDED_

#include "HexBinary128.h"

/**
 * A master resource identifier. The IANA PEN [PEN] provider ID SHALL be specified
 * in bits 0-31, the least-significant bits, and objects created by that provider
 * SHALL be assigned unique IDs with the remaining 96 bits.
 * 0xFFFFFFFFFFFFFFFFFFFFFFFF[XXXXXXXX], where [XXXXXXXX] is the PEN, is reserved
 * for a object that is being created (e.g., a ReadingSet for the current time
 * that is still accumulating).
 * Except for this special reserved identifier, each modification of an object
 * (resource) representation MUST have a different "version". 
 */
class mRIDType : public HexBinary128
{

public:
	mRIDType();
	virtual ~mRIDType();

};
#endif // !defined(EA_696AD155_A594_46d5_A76E_47478ADD6EF1__INCLUDED_)
