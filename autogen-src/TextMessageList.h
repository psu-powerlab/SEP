///////////////////////////////////////////////////////////
//  TextMessageList.h
//  Implementation of the Class TextMessageList
//  Created on:      13-Apr-2020 2:51:45 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_7F11F21A_B180_4a46_88D6_897611F4116B__INCLUDED_)
#define EA_7F11F21A_B180_4a46_88D6_897611F4116B__INCLUDED_

#include "SubscribableList.h"
#include "TextMessage.h"

/**
 * A List element to hold TextMessage objects.
 */
class TextMessageList : public SubscribableList
{

public:
	TextMessageList();
	virtual ~TextMessageList();
	TextMessage *m_TextMessage;

};
#endif // !defined(EA_7F11F21A_B180_4a46_88D6_897611F4116B__INCLUDED_)
