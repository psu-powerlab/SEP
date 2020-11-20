///////////////////////////////////////////////////////////
//  EndDeviceControlList.h
//  Implementation of the Class EndDeviceControlList
//  Created on:      13-Apr-2020 2:51:28 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_842A3778_925F_4c8d_81AF_F74F62EA3101__INCLUDED_)
#define EA_842A3778_925F_4c8d_81AF_F74F62EA3101__INCLUDED_

#include "SubscribableList.h"
#include "EndDeviceControl.h"

/**
 * A List element to hold EndDeviceControl objects.
 */
class EndDeviceControlList : public SubscribableList
{

public:
	EndDeviceControlList();
	virtual ~EndDeviceControlList();
	EndDeviceControl *m_EndDeviceControl;

};
#endif // !defined(EA_842A3778_925F_4c8d_81AF_F74F62EA3101__INCLUDED_)
