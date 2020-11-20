///////////////////////////////////////////////////////////
//  HexBinary32.h
//  Implementation of the Class HexBinary32
//  Created on:      13-Apr-2020 2:51:30 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_573BD4EC_9B09_4057_AEDA_1A7170DEA928__INCLUDED_)
#define EA_573BD4EC_9B09_4057_AEDA_1A7170DEA928__INCLUDED_

/**
 * A 32-bit field encoded as a hex string (8 hex characters max). Where applicable,
 * bit 0, or the least significant bit, goes on the right. Note that hexBinary
 * requires pairs of hex characters, so an odd number of characters requires a
 * leading "0". 
 */
class HexBinary32 : public hexBinary
{

public:
	HexBinary32();
	virtual ~HexBinary32();

};
#endif // !defined(EA_573BD4EC_9B09_4057_AEDA_1A7170DEA928__INCLUDED_)
