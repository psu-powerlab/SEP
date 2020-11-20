///////////////////////////////////////////////////////////
//  LLInterfaceListLink.h
//  Implementation of the Class LLInterfaceListLink
//  Created on:      13-Apr-2020 2:51:33 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_EDA3531B_023C_49e5_88B4_E8402FCF2504__INCLUDED_)
#define EA_EDA3531B_023C_49e5_88B4_E8402FCF2504__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of LLInterface instances.
 */
class LLInterfaceListLink : public ListLink
{

public:
	LLInterfaceListLink();
	virtual ~LLInterfaceListLink();

};
#endif // !defined(EA_EDA3531B_023C_49e5_88B4_E8402FCF2504__INCLUDED_)
