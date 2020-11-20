///////////////////////////////////////////////////////////
//  ServiceSupplierList.h
//  Implementation of the Class ServiceSupplierList
//  Created on:      13-Apr-2020 2:51:42 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_6CB4C354_C0DE_4341_A8AD_A229552680C7__INCLUDED_)
#define EA_6CB4C354_C0DE_4341_A8AD_A229552680C7__INCLUDED_

#include "List.h"
#include "ServiceSupplier.h"

/**
 * A List element to hold ServiceSupplier objects.
 */
class ServiceSupplierList : public List
{

public:
	ServiceSupplierList();
	virtual ~ServiceSupplierList();
	ServiceSupplier *m_ServiceSupplier;

};
#endif // !defined(EA_6CB4C354_C0DE_4341_A8AD_A229552680C7__INCLUDED_)
