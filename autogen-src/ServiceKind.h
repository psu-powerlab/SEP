///////////////////////////////////////////////////////////
//  ServiceKind.h
//  Implementation of the Class ServiceKind
//  Created on:      13-Apr-2020 2:51:41 PM
///////////////////////////////////////////////////////////

#if !defined(EA_918B3A91_20E4_4cac_B19A_982A23E60089__INCLUDED_)
#define EA_918B3A91_20E4_4cac_B19A_982A23E60089__INCLUDED_

#include "UInt8.h"

/**
 * Service kind
 * 0 - electricity
 * 1 - gas
 * 2 - water
 * 3 - time
 * 4 - pressure
 * 5 - heat
 * 6 - cooling
 * All other values reserved.
 */
class ServiceKind : public UInt8
{

public:
	ServiceKind();
	virtual ~ServiceKind();

};
#endif // !defined(EA_918B3A91_20E4_4cac_B19A_982A23E60089__INCLUDED_)
