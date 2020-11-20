///////////////////////////////////////////////////////////
//  FunctionSetAssignments.h
//  Implementation of the Class FunctionSetAssignments
//  Created on:      13-Apr-2020 2:51:30 PM
///////////////////////////////////////////////////////////

#if !defined(EA_F26B4DF9_D8EB_4836_B55B_98D356A3E922__INCLUDED_)
#define EA_F26B4DF9_D8EB_4836_B55B_98D356A3E922__INCLUDED_

#include "String32.h"
#include "mRIDType.h"
#include "SubscribableType.h"
#include "VersionType.h"
#include "FunctionSetAssignmentsBase.h"

/**
 * Provides an identifiable, subscribable collection of resources for a particular
 * device to consume. 
 */
class FunctionSetAssignments : public FunctionSetAssignmentsBase
{

public:
	FunctionSetAssignments();
	virtual ~FunctionSetAssignments();
	/**
	 * The description is a human readable text describing or naming the object. 
	 */
	String32 description;
	/**
	 * The global identifier of the object. 
	 */
	mRIDType mRID;
	/**
	 * Indicates whether or not subscriptions are supported for this resource, and
	 * whether or not conditional (thresholds) are supported. If not specified, is
	 * "not subscribable" (0).
	 */
	SubscribableType subscribable;
	/**
	 * Contains the version number of the object. See the type definition for details. 
	 */
	VersionType version;

};
#endif // !defined(EA_F26B4DF9_D8EB_4836_B55B_98D356A3E922__INCLUDED_)
