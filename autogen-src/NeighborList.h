///////////////////////////////////////////////////////////
//  NeighborList.h
//  Implementation of the Class NeighborList
//  Created on:      13-Apr-2020 2:51:35 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_28ABAE41_D8BF_4f62_B646_01F6EA792727__INCLUDED_)
#define EA_28ABAE41_D8BF_4f62_B646_01F6EA792727__INCLUDED_

#include "List.h"
#include "Neighbor.h"

/**
 * List of 15.4 neighbors.
 */
class NeighborList : public List
{

public:
	NeighborList();
	virtual ~NeighborList();
	Neighbor *m_Neighbor;

};
#endif // !defined(EA_28ABAE41_D8BF_4f62_B646_01F6EA792727__INCLUDED_)
