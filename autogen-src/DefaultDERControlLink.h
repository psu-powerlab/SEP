///////////////////////////////////////////////////////////
//  DefaultDERControlLink.h
//  Implementation of the Class DefaultDERControlLink
//  Created on:      13-Apr-2020 2:51:24 PM
//  Original author: kelynn
///////////////////////////////////////////////////////////

#if !defined(EA_1E4E3A07_D970_411b_8F4A_C50E5D928AA9__INCLUDED_)
#define EA_1E4E3A07_D970_411b_8F4A_C50E5D928AA9__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of DefaultDERControl. This is the default
 * mode of the DER which MAY be overridden by DERControl events. 
 */
class DefaultDERControlLink : public Link
{

public:
	DefaultDERControlLink();
	virtual ~DefaultDERControlLink();

};
#endif // !defined(EA_1E4E3A07_D970_411b_8F4A_C50E5D928AA9__INCLUDED_)
