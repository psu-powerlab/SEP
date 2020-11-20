///////////////////////////////////////////////////////////
//  ResponseList.h
//  Implementation of the Class ResponseList
//  Created on:      13-Apr-2020 2:51:40 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_EA77DB0F_91C8_4796_8951_B460537D7894__INCLUDED_)
#define EA_EA77DB0F_91C8_4796_8951_B460537D7894__INCLUDED_

#include "List.h"
#include "Response.h"

/**
 * A List element to hold Response objects.
 */
class ResponseList : public List
{

public:
	ResponseList();
	virtual ~ResponseList();
	Response *m_Response;

};
#endif // !defined(EA_EA77DB0F_91C8_4796_8951_B460537D7894__INCLUDED_)
