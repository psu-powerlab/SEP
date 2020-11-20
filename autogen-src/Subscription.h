///////////////////////////////////////////////////////////
//  Subscription.h
//  Implementation of the Class Subscription
//  Created on:      13-Apr-2020 2:51:43 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_A1C1B0E7_DA69_4313_92BB_C7BA5207A399__INCLUDED_)
#define EA_A1C1B0E7_DA69_4313_92BB_C7BA5207A399__INCLUDED_

#include "UInt8.h"
#include "String16.h"
#include "UInt32.h"
#include "anyURI.h"
#include "SubscriptionBase.h"
#include "Condition.h"

/**
 * Holds the information related to a client subscription to receive updates to a
 * resource automatically. 
 */
class Subscription : public SubscriptionBase
{

public:
	Subscription();
	virtual ~Subscription();
	/**
	 * 0 - application/sep+xml
	 * 1 - application/sep-exi
	 * 2-255 - reserved
	 */
	UInt8 encoding;
	/**
	 * Contains the preferred schema and extensibility level indication such as "+S1"
	 */
	String16 level;
	/**
	 * This element is used to indicate the maximum number of list items that should
	 * be included in a notification when the subscribed resource changes. This limit
	 * is meant to be functionally equivalent to the ‘limit’ query string parameter,
	 * but applies to both list resources as well as other resources.  For list
	 * resources, if a limit of ‘0’ is specified, then notifications SHALL contain a
	 * list resource with results=’0’ (equivalent to a simple change notification).
	 * For list resources, if a limit greater than ‘0’ is specified, then
	 * notifications SHALL contain a list resource with results equal to the limit
	 * specified (or less, should the list contain fewer items than the limit
	 * specified or should the server be unable to provide the requested number of
	 * items for any reason) and follow the same rules for list resources (e.g.,
	 * ordering).  For non-list resources, if a limit of ‘0’ is specified, then
	 * notifications SHALL NOT contain a resource representation (equivalent to a
	 * simple change notification).  For non-list resources, if a limit greater than
	 * ‘0’ is specified, then notifications SHALL contain the representation of the
	 * changed resource.
	 */
	UInt32 limit;
	/**
	 * The resource to which to post the notifications about the requested subscribed
	 * resource. Because this URI will exist on a server other than the one being
	 * POSTed to, this attribute SHALL be a fully-qualified absolute URI, not a
	 * relative reference. 
	 */
	anyURI notificationURI;
	Condition *m_Condition;

};
#endif // !defined(EA_A1C1B0E7_DA69_4313_92BB_C7BA5207A399__INCLUDED_)
