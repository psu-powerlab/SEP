///////////////////////////////////////////////////////////
//  AssociatedDERProgramListLink.h
//  Implementation of the Class AssociatedDERProgramListLink
//  Created on:      13-Apr-2020 2:51:21 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_20D3FA11_2C9A_4397_8024_E7A08A025DE5__INCLUDED_)
#define EA_20D3FA11_2C9A_4397_8024_E7A08A025DE5__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of DERPrograms having the DERControl(s) for this
 * DER.
 */
class AssociatedDERProgramListLink : public ListLink
{

public:
	AssociatedDERProgramListLink();
	virtual ~AssociatedDERProgramListLink();

};
#endif // !defined(EA_20D3FA11_2C9A_4397_8024_E7A08A025DE5__INCLUDED_)
