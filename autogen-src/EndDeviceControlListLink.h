///////////////////////////////////////////////////////////
//  EndDeviceControlListLink.h
//  Implementation of the Class EndDeviceControlListLink
//  Created on:      13-Apr-2020 2:51:28 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_F4BAAC6C_9446_4073_AB32_0DFF47728508__INCLUDED_)
#define EA_F4BAAC6C_9446_4073_AB32_0DFF47728508__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of EndDeviceControl instances.
 */
class EndDeviceControlListLink : public ListLink
{

public:
	EndDeviceControlListLink();
	virtual ~EndDeviceControlListLink();

};
#endif // !defined(EA_F4BAAC6C_9446_4073_AB32_0DFF47728508__INCLUDED_)
