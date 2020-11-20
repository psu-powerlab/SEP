///////////////////////////////////////////////////////////
//  RPLSourceRoutesList.h
//  Implementation of the Class RPLSourceRoutesList
//  Created on:      13-Apr-2020 2:51:41 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_CDBA8B27_25F1_41a2_AD83_36DBC845316A__INCLUDED_)
#define EA_CDBA8B27_25F1_41a2_AD83_36DBC845316A__INCLUDED_

#include "List.h"
#include "RPLSourceRoutes.h"

/**
 * List or RPL source routes if the hosting device is the DODAGroot
 */
class RPLSourceRoutesList : public List
{

public:
	RPLSourceRoutesList();
	virtual ~RPLSourceRoutesList();
	RPLSourceRoutes *m_RPLSourceRoutes;

};
#endif // !defined(EA_CDBA8B27_25F1_41a2_AD83_36DBC845316A__INCLUDED_)
