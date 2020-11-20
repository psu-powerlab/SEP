///////////////////////////////////////////////////////////
//  PriceResponse.h
//  Implementation of the Class PriceResponse
//  Created on:      13-Apr-2020 2:51:37 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_5AAEDA77_A3D1_42c9_A8B4_48072FAA5FBA__INCLUDED_)
#define EA_5AAEDA77_A3D1_42c9_A8B4_48072FAA5FBA__INCLUDED_

#include "Response.h"

/**
 * A response related to a price message. 
 */
class PriceResponse : public Response
{

public:
	PriceResponse();
	virtual ~PriceResponse();

};
#endif // !defined(EA_5AAEDA77_A3D1_42c9_A8B4_48072FAA5FBA__INCLUDED_)
