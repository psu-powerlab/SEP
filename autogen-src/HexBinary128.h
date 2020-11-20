///////////////////////////////////////////////////////////
//  HexBinary128.h
//  Implementation of the Class HexBinary128
//  Created on:      13-Apr-2020 2:51:30 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_8EC1CAA3_CE1A_46be_9871_06B23E11B048__INCLUDED_)
#define EA_8EC1CAA3_CE1A_46be_9871_06B23E11B048__INCLUDED_

/**
 * A 128-bit field encoded as a hex string (32 hex characters max). Where
 * applicable, bit 0, or the least significant bit, goes on the right. Note that
 * hexBinary requires pairs of hex characters, so an odd number of characters
 * requires a leading "0". 
 */
class HexBinary128 : public hexBinary
{

public:
	HexBinary128();
	virtual ~HexBinary128();

};
#endif // !defined(EA_8EC1CAA3_CE1A_46be_9871_06B23E11B048__INCLUDED_)
