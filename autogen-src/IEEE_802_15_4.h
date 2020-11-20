///////////////////////////////////////////////////////////
//  IEEE_802_15_4.h
//  Implementation of the Class IEEE_802_15_4
//  Created on:      13-Apr-2020 2:51:31 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_31915576_3C55_4d9e_AA78_92C9A781D1C2__INCLUDED_)
#define EA_31915576_3C55_4d9e_AA78_92C9A781D1C2__INCLUDED_

#include "HexBinary8.h"
#include "UInt16.h"
#include "NeighborListLink.h"

/**
 * Contains 802.15.4 link layer specific attributes. 
 */
class IEEE_802_15_4
{

public:
	IEEE_802_15_4();
	virtual ~IEEE_802_15_4();
	/**
	 * As defined by IEEE 802.15.4
	 */
	HexBinary8 capabilityInfo;
	/**
	 * As defined by IEEE 802.15.4
	 */
	UInt16 shortAddress;
	NeighborListLink *m_NeighborListLink;

};
#endif // !defined(EA_31915576_3C55_4d9e_AA78_92C9A781D1C2__INCLUDED_)
