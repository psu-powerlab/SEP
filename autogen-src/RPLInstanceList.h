///////////////////////////////////////////////////////////
//  RPLInstanceList.h
//  Implementation of the Class RPLInstanceList
//  Created on:      13-Apr-2020 2:51:41 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_ED43C9A8_4008_4df7_9DFD_6E36ECB5B988__INCLUDED_)
#define EA_ED43C9A8_4008_4df7_9DFD_6E36ECB5B988__INCLUDED_

#include "List.h"
#include "RPLInstance.h"

/**
 * List of RPLInstances associated with the IPinterface.
 */
class RPLInstanceList : public List
{

public:
	RPLInstanceList();
	virtual ~RPLInstanceList();
	RPLInstance *m_RPLInstance;

};
#endif // !defined(EA_ED43C9A8_4008_4df7_9DFD_6E36ECB5B988__INCLUDED_)
