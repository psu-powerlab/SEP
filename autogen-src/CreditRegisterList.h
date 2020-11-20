///////////////////////////////////////////////////////////
//  CreditRegisterList.h
//  Implementation of the Class CreditRegisterList
//  Created on:      13-Apr-2020 2:51:23 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_095CE12F_CF8D_4c93_9364_B349118FFE43__INCLUDED_)
#define EA_095CE12F_CF8D_4c93_9364_B349118FFE43__INCLUDED_

#include "List.h"
#include "CreditRegister.h"

/**
 * A List element to hold CreditRegister objects.
 */
class CreditRegisterList : public List
{

public:
	CreditRegisterList();
	virtual ~CreditRegisterList();
	CreditRegister *m_CreditRegister;

};
#endif // !defined(EA_095CE12F_CF8D_4c93_9364_B349118FFE43__INCLUDED_)
