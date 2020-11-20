///////////////////////////////////////////////////////////
//  TextMessage.h
//  Implementation of the Class TextMessage
//  Created on:      13-Apr-2020 2:51:44 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_1C5FF40F_5621_4cfe_A6E8_CD5DB54D1921__INCLUDED_)
#define EA_1C5FF40F_5621_4cfe_A6E8_CD5DB54D1921__INCLUDED_

#include "String20.h"
#include "PriorityType.h"
#include "string.h"
#include "Event.h"

/**
 * Text message such as a notification. 
 */
class TextMessage : public Event
{

public:
	TextMessage();
	virtual ~TextMessage();
	/**
	 * Indicates the human-readable name of the publisher of the message
	 */
	String20 originator;
	/**
	 * The priority is used to inform the client of the priority of the particular
	 * message.  Devices with constrained or limited resources for displaying Messages
	 * should use this attribute to determine how to handle displaying currently
	 * active Messages (e.g. if a device uses a scrolling method with a single Message
	 * viewable at a time it MAY want to push a low priority Message to the background
	 * and bring a newly received higher priority Message to the foreground). 
	 */
	PriorityType priority;
	/**
	 * The textMessage attribute contains the actual UTF-8 encoded text to be
	 * displayed in conjunction with the messageLength attribute which contains the
	 * overall length of the textMessage attribute.  Clients and servers SHALL support
	 * a reception of a Message of 100 bytes in length.  Messages that exceed the
	 * clients display size will be left to the client to choose what method to handle
	 * the message (truncation, scrolling, etc.).
	 */
	string textMessage;

};
#endif // !defined(EA_1C5FF40F_5621_4cfe_A6E8_CD5DB54D1921__INCLUDED_)
