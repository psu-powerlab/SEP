///////////////////////////////////////////////////////////
//  LocaleType.h
//  Implementation of the Class LocaleType
//  Created on:      13-Apr-2020 2:51:33 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_269F930A_58E9_4617_9EE4_7174AC3B053C__INCLUDED_)
#define EA_269F930A_58E9_4617_9EE4_7174AC3B053C__INCLUDED_

#include "String42.h"

/**
 * [RFC 4646] identifier of a language-region
 */
class LocaleType : public String42
{

public:
	LocaleType();
	virtual ~LocaleType();

};
#endif // !defined(EA_269F930A_58E9_4617_9EE4_7174AC3B053C__INCLUDED_)
