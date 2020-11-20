///////////////////////////////////////////////////////////
//  HexBinary48.h
//  Implementation of the Class HexBinary48
//  Created on:      13-Apr-2020 2:51:31 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_F7D2D0B7_9C51_489e_BCC2_14A5DD474D76__INCLUDED_)
#define EA_F7D2D0B7_9C51_489e_BCC2_14A5DD474D76__INCLUDED_

/**
 * A 48-bit field encoded as a hex string (12 hex characters max). Where
 * applicable, bit 0, or the least significant bit, goes on the right. Note that
 * hexBinary requires pairs of hex characters, so an odd number of characters
 * requires a leading "0". 
 */
class HexBinary48 : public hexBinary
{

public:
	HexBinary48();
	virtual ~HexBinary48();

};
#endif // !defined(EA_F7D2D0B7_9C51_489e_BCC2_14A5DD474D76__INCLUDED_)
