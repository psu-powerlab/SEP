///////////////////////////////////////////////////////////
//  DERControlListLink.h
//  Implementation of the Class DERControlListLink
//  Created on:      13-Apr-2020 2:51:25 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_CB04D31E_CB1B_46d1_80F7_3A39371F5099__INCLUDED_)
#define EA_CB04D31E_CB1B_46d1_80F7_3A39371F5099__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of DERControl instances.
 */
class DERControlListLink : public ListLink
{

public:
	DERControlListLink();
	virtual ~DERControlListLink();

};
#endif // !defined(EA_CB04D31E_CB1B_46d1_80F7_3A39371F5099__INCLUDED_)
