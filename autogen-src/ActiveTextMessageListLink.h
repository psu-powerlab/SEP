///////////////////////////////////////////////////////////
//  ActiveTextMessageListLink.h
//  Implementation of the Class ActiveTextMessageListLink
//  Created on:      13-Apr-2020 2:51:20 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_85D42D4C_F285_4381_A324_735B7E1310FB__INCLUDED_)
#define EA_85D42D4C_F285_4381_A324_735B7E1310FB__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of active TextMessage instances.
 */
class ActiveTextMessageListLink : public ListLink
{

public:
	ActiveTextMessageListLink();
	virtual ~ActiveTextMessageListLink();

};
#endif // !defined(EA_85D42D4C_F285_4381_A324_735B7E1310FB__INCLUDED_)
