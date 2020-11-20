///////////////////////////////////////////////////////////
//  PENType.h
//  Implementation of the Class PENType
//  Created on:      13-Apr-2020 2:51:36 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_20053F49_9DC0_4bee_8D55_A9C567FDDD97__INCLUDED_)
#define EA_20053F49_9DC0_4bee_8D55_A9C567FDDD97__INCLUDED_

#include "UInt32.h"

/**
 * IANA Private Enterprise Number [PEN].
 */
class PENType : public UInt32
{

public:
	PENType();
	virtual ~PENType();

};
#endif // !defined(EA_20053F49_9DC0_4bee_8D55_A9C567FDDD97__INCLUDED_)
