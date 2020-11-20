///////////////////////////////////////////////////////////
//  DERCurveListLink.h
//  Implementation of the Class DERCurveListLink
//  Created on:      13-Apr-2020 2:51:25 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_D8AE4584_1139_4d35_BD95_554C5765F969__INCLUDED_)
#define EA_D8AE4584_1139_4d35_BD95_554C5765F969__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of DERCurve instances.
 */
class DERCurveListLink : public ListLink
{

public:
	DERCurveListLink();
	virtual ~DERCurveListLink();

};
#endif // !defined(EA_D8AE4584_1139_4d35_BD95_554C5765F969__INCLUDED_)
