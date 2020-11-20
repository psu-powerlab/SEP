///////////////////////////////////////////////////////////
//  ResponseSetListLink.h
//  Implementation of the Class ResponseSetListLink
//  Created on:      13-Apr-2020 2:51:40 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_739AF2E3_6C39_4a6a_8C02_627D7430232E__INCLUDED_)
#define EA_739AF2E3_6C39_4a6a_8C02_627D7430232E__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of ResponseSet instances.
 */
class ResponseSetListLink : public ListLink
{

public:
	ResponseSetListLink();
	virtual ~ResponseSetListLink();

};
#endif // !defined(EA_739AF2E3_6C39_4a6a_8C02_627D7430232E__INCLUDED_)
