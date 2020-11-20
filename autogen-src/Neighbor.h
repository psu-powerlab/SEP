///////////////////////////////////////////////////////////
//  Neighbor.h
//  Implementation of the Class Neighbor
//  Created on:      13-Apr-2020 2:51:35 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_A7CB9091_E7FD_4cee_AE27_AAC010E1F8C3__INCLUDED_)
#define EA_A7CB9091_E7FD_4cee_AE27_AAC010E1F8C3__INCLUDED_

#include "boolean.h"
#include "UInt8.h"
#include "UInt16.h"
#include "Resource.h"

/**
 * Contains 802.15.4 link layer specific attributes. 
 */
class Neighbor : public Resource
{

public:
	Neighbor();
	virtual ~Neighbor();
	/**
	 * True if the neighbor is a child. 
	 */
	boolean isChild;
	/**
	 * The quality of the link, as defined by 802.15.4
	 */
	UInt8 linkQuality;
	/**
	 * As defined by IEEE 802.15.4
	 */
	UInt16 shortAddress;

};
#endif // !defined(EA_A7CB9091_E7FD_4cee_AE27_AAC010E1F8C3__INCLUDED_)
