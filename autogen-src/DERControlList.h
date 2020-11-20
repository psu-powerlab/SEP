///////////////////////////////////////////////////////////
//  DERControlList.h
//  Implementation of the Class DERControlList
//  Created on:      13-Apr-2020 2:51:25 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_F41A287E_3700_4d9e_9051_73056E3DA023__INCLUDED_)
#define EA_F41A287E_3700_4d9e_9051_73056E3DA023__INCLUDED_

#include "SubscribableList.h"
#include "DERControl.h"

/**
 * A List element to hold DERControl objects.
 */
class DERControlList : public SubscribableList
{

public:
	DERControlList();
	virtual ~DERControlList();
	DERControl *m_DERControl;

};
#endif // !defined(EA_F41A287E_3700_4d9e_9051_73056E3DA023__INCLUDED_)
