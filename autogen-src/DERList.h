///////////////////////////////////////////////////////////
//  DERList.h
//  Implementation of the Class DERList
//  Created on:      13-Apr-2020 2:51:26 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_0389B6FE_87D2_45de_BF36_0EE28543C9DD__INCLUDED_)
#define EA_0389B6FE_87D2_45de_BF36_0EE28543C9DD__INCLUDED_

#include "UInt32.h"
#include "List.h"
#include "DER.h"

/**
 * A List element to hold DER objects.
 */
class DERList : public List
{

public:
	DERList();
	virtual ~DERList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	DER *m_DER;

};
#endif // !defined(EA_0389B6FE_87D2_45de_BF36_0EE28543C9DD__INCLUDED_)
