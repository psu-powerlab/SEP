///////////////////////////////////////////////////////////
//  ResponseSet.h
//  Implementation of the Class ResponseSet
//  Created on:      13-Apr-2020 2:51:40 PM
///////////////////////////////////////////////////////////

#if !defined(EA_4FA0EB38_C583_4107_99C7_ACB6ABDE9202__INCLUDED_)
#define EA_4FA0EB38_C583_4107_99C7_ACB6ABDE9202__INCLUDED_

#include "ResponseListLink.h"
#include "IdentifiedObject.h"

/**
 * A container for a ResponseList.
 */
class ResponseSet : public IdentifiedObject
{

public:
	ResponseSet();
	virtual ~ResponseSet();
	ResponseListLink *m_ResponseListLink;

};
#endif // !defined(EA_4FA0EB38_C583_4107_99C7_ACB6ABDE9202__INCLUDED_)
