///////////////////////////////////////////////////////////
//  PriceResponseCfgList.h
//  Implementation of the Class PriceResponseCfgList
//  Created on:      13-Apr-2020 2:51:38 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_C3DEE995_8927_4901_B338_EE05373B37EB__INCLUDED_)
#define EA_C3DEE995_8927_4901_B338_EE05373B37EB__INCLUDED_

#include "List.h"
#include "PriceResponseCfg.h"

/**
 * A List element to hold PriceResponseCfg objects.
 */
class PriceResponseCfgList : public List
{

public:
	PriceResponseCfgList();
	virtual ~PriceResponseCfgList();
	PriceResponseCfg *m_PriceResponseCfg;

};
#endif // !defined(EA_C3DEE995_8927_4901_B338_EE05373B37EB__INCLUDED_)
