///////////////////////////////////////////////////////////
//  TariffProfileList.h
//  Implementation of the Class TariffProfileList
//  Created on:      13-Apr-2020 2:51:44 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_0632A3AD_081F_4fbd_8EF6_60742E340EB1__INCLUDED_)
#define EA_0632A3AD_081F_4fbd_8EF6_60742E340EB1__INCLUDED_

#include "UInt32.h"
#include "SubscribableList.h"
#include "TariffProfile.h"

/**
 * A List element to hold TariffProfile objects.
 */
class TariffProfileList : public SubscribableList
{

public:
	TariffProfileList();
	virtual ~TariffProfileList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	TariffProfile *m_TariffProfile;

};
#endif // !defined(EA_0632A3AD_081F_4fbd_8EF6_60742E340EB1__INCLUDED_)
