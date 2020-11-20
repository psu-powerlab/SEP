///////////////////////////////////////////////////////////
//  TOUType.h
//  Implementation of the Class TOUType
//  Created on:      13-Apr-2020 2:51:45 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_BC1E4A40_4B51_4b78_A6CD_2CA0CE244CFF__INCLUDED_)
#define EA_BC1E4A40_4B51_4b78_A6CD_2CA0CE244CFF__INCLUDED_

#include "UInt8.h"

/**
 * 0 = Not Applicable (default, if not specified)
 * 1 = TOU A
 * 2 = TOU B
 * 3 = TOU C
 * 4 = TOU D
 * 5 = TOU E
 * 6 = TOU F
 * 7 = TOU G
 * 8 = TOU H
 * 9 = TOU I
 * 10 = TOU J
 * 11 = TOU K
 * 12 = TOU L
 * 13 = TOU M
 * 14 = TOU N
 * 15 = TOU O
 * All other values reserved.
 */
class TOUType : public UInt8
{

public:
	TOUType();
	virtual ~TOUType();

};
#endif // !defined(EA_BC1E4A40_4B51_4b78_A6CD_2CA0CE244CFF__INCLUDED_)
