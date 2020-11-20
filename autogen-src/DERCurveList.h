///////////////////////////////////////////////////////////
//  DERCurveList.h
//  Implementation of the Class DERCurveList
//  Created on:      13-Apr-2020 2:51:25 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_CE9160D2_272D_44fb_A2A1_E1211192DD3B__INCLUDED_)
#define EA_CE9160D2_272D_44fb_A2A1_E1211192DD3B__INCLUDED_

#include "List.h"
#include "DERCurve.h"

/**
 * A List element to hold DERCurve objects.
 */
class DERCurveList : public List
{

public:
	DERCurveList();
	virtual ~DERCurveList();
	DERCurve *m_DERCurve;

};
#endif // !defined(EA_CE9160D2_272D_44fb_A2A1_E1211192DD3B__INCLUDED_)
