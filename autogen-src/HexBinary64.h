///////////////////////////////////////////////////////////
//  HexBinary64.h
//  Implementation of the Class HexBinary64
//  Created on:      13-Apr-2020 2:51:31 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_EF0C5BA8_9657_44f2_8A4F_8CF62D43749A__INCLUDED_)
#define EA_EF0C5BA8_9657_44f2_8A4F_8CF62D43749A__INCLUDED_

/**
 * A 64-bit field encoded as a hex string (16 hex characters max). Where
 * applicable, bit 0, or the least significant bit, goes on the right. Note that
 * hexBinary requires pairs of hex characters, so an odd number of characters
 * requires a leading "0". 
 */
class HexBinary64 : public hexBinary
{

public:
	HexBinary64();
	virtual ~HexBinary64();

};
#endif // !defined(EA_EF0C5BA8_9657_44f2_8A4F_8CF62D43749A__INCLUDED_)
