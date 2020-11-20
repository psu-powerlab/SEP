///////////////////////////////////////////////////////////
//  LLInterfaceList.h
//  Implementation of the Class LLInterfaceList
//  Created on:      13-Apr-2020 2:51:33 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_DA4EF80C_40B6_4c82_A0B5_C2F02E3823A2__INCLUDED_)
#define EA_DA4EF80C_40B6_4c82_A0B5_C2F02E3823A2__INCLUDED_

#include "List.h"
#include "LLInterface.h"

/**
 * List of LLInterface instances.
 */
class LLInterfaceList : public List
{

public:
	LLInterfaceList();
	virtual ~LLInterfaceList();
	LLInterface *m_LLInterface;

};
#endif // !defined(EA_DA4EF80C_40B6_4c82_A0B5_C2F02E3823A2__INCLUDED_)
