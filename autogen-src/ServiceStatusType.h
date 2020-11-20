///////////////////////////////////////////////////////////
//  ServiceStatusType.h
//  Implementation of the Class ServiceStatusType
//  Created on:      13-Apr-2020 2:51:41 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_C62409F7_EB5C_4e09_B257_E4AAB6AE05FE__INCLUDED_)
#define EA_C62409F7_EB5C_4e09_B257_E4AAB6AE05FE__INCLUDED_

#include "UInt8.h"

/**
 * 0 - Connected
 * 1 - Disconnected
 * 2 - Armed for Connect
 * 3 - Armed for Disconnect
 * 4 - No Contactor
 * 5 - Load Limited
 * All other values reserved.
 */
class ServiceStatusType : public UInt8
{

public:
	ServiceStatusType();
	virtual ~ServiceStatusType();

};
#endif // !defined(EA_C62409F7_EB5C_4e09_B257_E4AAB6AE05FE__INCLUDED_)
