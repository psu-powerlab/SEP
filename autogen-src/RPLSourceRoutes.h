///////////////////////////////////////////////////////////
//  RPLSourceRoutes.h
//  Implementation of the Class RPLSourceRoutes
//  Created on:      13-Apr-2020 2:51:41 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_188B2D63_C1A9_42a1_9B24_F4A513903727__INCLUDED_)
#define EA_188B2D63_C1A9_42a1_9B24_F4A513903727__INCLUDED_

#include "HexBinary128.h"
#include "Resource.h"

/**
 * A RPL source routes object.
 */
class RPLSourceRoutes : public Resource
{

public:
	RPLSourceRoutes();
	virtual ~RPLSourceRoutes();
	/**
	 * See [RFC 6554].
	 */
	HexBinary128 DestAddress;
	/**
	 * See [RFC 6554].
	 */
	HexBinary128 SourceRoute;

};
#endif // !defined(EA_188B2D63_C1A9_42a1_9B24_F4A513903727__INCLUDED_)
