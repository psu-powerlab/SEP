///////////////////////////////////////////////////////////
//  HexBinary160.h
//  Implementation of the Class HexBinary160
//  Created on:      13-Apr-2020 2:51:30 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_1D53E415_B987_4c59_A46B_26C1DDB90A1D__INCLUDED_)
#define EA_1D53E415_B987_4c59_A46B_26C1DDB90A1D__INCLUDED_

/**
 * A 160-bit field encoded as a hex string (40 hex characters max). Where
 * applicable, bit 0, or the least significant bit, goes on the right. Note that
 * hexBinary requires pairs of hex characters, so an odd number of characters
 * requires a leading "0". 
 */
class HexBinary160 : public hexBinary
{

public:
	HexBinary160();
	virtual ~HexBinary160();

};
#endif // !defined(EA_1D53E415_B987_4c59_A46B_26C1DDB90A1D__INCLUDED_)
