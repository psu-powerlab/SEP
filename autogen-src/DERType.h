///////////////////////////////////////////////////////////
//  DERType.h
//  Implementation of the Class DERType
//  Created on:      13-Apr-2020 2:51:26 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_FB446586_4707_4667_98F5_A7B13EB4F870__INCLUDED_)
#define EA_FB446586_4707_4667_98F5_A7B13EB4F870__INCLUDED_

#include "UInt8.h"

/**
 * 0 - Not applicable / Unknown
 * 1 - Virtual or mixed DER
 * 2 - Reciprocating engine
 * 3 - Fuel cell
 * 4 - Photovoltaic system
 * 5 - Combined heat and power
 * 6 - Other generation system
 * 80 - Other storage system
 * 81 - Electric vehicle
 * 82 - EVSE
 * 83 - Combined PV and storage
 * All other values reserved.
 */
class DERType : public UInt8
{

public:
	DERType();
	virtual ~DERType();

};
#endif // !defined(EA_FB446586_4707_4667_98F5_A7B13EB4F870__INCLUDED_)
