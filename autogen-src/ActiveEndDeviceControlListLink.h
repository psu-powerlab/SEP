///////////////////////////////////////////////////////////
//  ActiveEndDeviceControlListLink.h
//  Implementation of the Class ActiveEndDeviceControlListLink
//  Created on:      13-Apr-2020 2:51:19 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_8D1C8245_CAB9_4378_82A5_67AD14BBEAB7__INCLUDED_)
#define EA_8D1C8245_CAB9_4378_82A5_67AD14BBEAB7__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of active EndDeviceControl instances.
 */
class ActiveEndDeviceControlListLink : public ListLink
{

public:
	ActiveEndDeviceControlListLink();
	virtual ~ActiveEndDeviceControlListLink();

};
#endif // !defined(EA_8D1C8245_CAB9_4378_82A5_67AD14BBEAB7__INCLUDED_)
