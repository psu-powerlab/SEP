///////////////////////////////////////////////////////////
//  DERCurveLink.h
//  Implementation of the Class DERCurveLink
//  Created on:      13-Apr-2020 2:51:25 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_217AA010_E5DF_4449_B508_274624E7895A__INCLUDED_)
#define EA_217AA010_E5DF_4449_B508_274624E7895A__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of DERCurve.
 */
class DERCurveLink : public Link
{

public:
	DERCurveLink();
	virtual ~DERCurveLink();

};
#endif // !defined(EA_217AA010_E5DF_4449_B508_274624E7895A__INCLUDED_)
