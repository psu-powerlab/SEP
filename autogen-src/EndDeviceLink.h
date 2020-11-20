///////////////////////////////////////////////////////////
//  EndDeviceLink.h
//  Implementation of the Class EndDeviceLink
//  Created on:      13-Apr-2020 2:51:28 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_07D573DE_C7DF_4a2f_9F85_3D251F675E01__INCLUDED_)
#define EA_07D573DE_C7DF_4a2f_9F85_3D251F675E01__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of EndDevice.
 */
class EndDeviceLink : public Link
{

public:
	EndDeviceLink();
	virtual ~EndDeviceLink();

};
#endif // !defined(EA_07D573DE_C7DF_4a2f_9F85_3D251F675E01__INCLUDED_)
