///////////////////////////////////////////////////////////
//  RateComponentList.h
//  Implementation of the Class RateComponentList
//  Created on:      13-Apr-2020 2:51:38 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_8085976A_B609_4072_84AD_B5E3A6F8AA1F__INCLUDED_)
#define EA_8085976A_B609_4072_84AD_B5E3A6F8AA1F__INCLUDED_

#include "List.h"
#include "RateComponent.h"

/**
 * A List element to hold RateComponent objects.
 */
class RateComponentList : public List
{

public:
	RateComponentList();
	virtual ~RateComponentList();
	RateComponent *m_RateComponent;

};
#endif // !defined(EA_8085976A_B609_4072_84AD_B5E3A6F8AA1F__INCLUDED_)
