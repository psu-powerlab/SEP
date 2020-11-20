///////////////////////////////////////////////////////////
//  HexBinary16.h
//  Implementation of the Class HexBinary16
//  Created on:      13-Apr-2020 2:51:30 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_C357C399_B84B_4895_99D9_CA10FC638989__INCLUDED_)
#define EA_C357C399_B84B_4895_99D9_CA10FC638989__INCLUDED_

/**
 * A 16-bit field encoded as a hex string (4 hex characters max). Where applicable,
 * bit 0, or the least significant bit, goes on the right. Note that hexBinary
 * requires pairs of hex characters, so an odd number of characters requires a
 * leading "0". 
 */
class HexBinary16 : public hexBinary
{

public:
	HexBinary16();
	virtual ~HexBinary16();

};
#endif // !defined(EA_C357C399_B84B_4895_99D9_CA10FC638989__INCLUDED_)
