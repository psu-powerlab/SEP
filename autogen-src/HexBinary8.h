///////////////////////////////////////////////////////////
//  HexBinary8.h
//  Implementation of the Class HexBinary8
//  Created on:      13-Apr-2020 2:51:31 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_C23F0D71_082E_4909_B9E5_E7E45D377BFF__INCLUDED_)
#define EA_C23F0D71_082E_4909_B9E5_E7E45D377BFF__INCLUDED_

/**
 * An 8-bit field encoded as a hex string (2 hex characters). Where applicable,
 * bit 0, or the least significant bit, goes on the right. Note that hexBinary
 * requires pairs of hex characters, so an odd number of characters requires a
 * leading "0". 
 */
class HexBinary8 : public hexBinary
{

public:
	HexBinary8();
	virtual ~HexBinary8();

};
#endif // !defined(EA_C23F0D71_082E_4909_B9E5_E7E45D377BFF__INCLUDED_)
