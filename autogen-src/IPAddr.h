///////////////////////////////////////////////////////////
//  IPAddr.h
//  Implementation of the Class IPAddr
//  Created on:      13-Apr-2020 2:51:32 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_781C23DE_EE4E_4aaa_90EB_355FEE849441__INCLUDED_)
#define EA_781C23DE_EE4E_4aaa_90EB_355FEE849441__INCLUDED_

#include "HexBinary128.h"
#include "RPLInstanceListLink.h"
#include "Resource.h"

/**
 * An Internet Protocol address object.
 */
class IPAddr : public Resource
{

public:
	IPAddr();
	virtual ~IPAddr();
	/**
	 * An IP address value.
	 */
	HexBinary128 address;
	RPLInstanceListLink *m_RPLInstanceListLink;

};
#endif // !defined(EA_781C23DE_EE4E_4aaa_90EB_355FEE849441__INCLUDED_)
