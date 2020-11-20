///////////////////////////////////////////////////////////
//  MessagingProgram.h
//  Implementation of the Class MessagingProgram
//  Created on:      13-Apr-2020 2:51:34 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_D81E16DB_2B07_4ad9_A63C_6226E5E47A20__INCLUDED_)
#define EA_D81E16DB_2B07_4ad9_A63C_6226E5E47A20__INCLUDED_

#include "LocaleType.h"
#include "PrimacyType.h"
#include "ActiveTextMessageListLink.h"
#include "TextMessageListLink.h"
#include "SubscribableIdentifiedObject.h"

/**
 * Provides a container for collections of text messages.
 */
class MessagingProgram : public SubscribableIdentifiedObject
{

public:
	MessagingProgram();
	virtual ~MessagingProgram();
	/**
	 * Indicates the language and region of the messages in this collection. 
	 */
	LocaleType locale;
	/**
	 * Indicates the relative primacy of the provider of this program.
	 */
	PrimacyType primacy;
	ActiveTextMessageListLink *m_ActiveTextMessageListLink;
	TextMessageListLink *m_TextMessageListLink;

};
#endif // !defined(EA_D81E16DB_2B07_4ad9_A63C_6226E5E47A20__INCLUDED_)
