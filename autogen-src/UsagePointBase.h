///////////////////////////////////////////////////////////
//  UsagePointBase.h
//  Implementation of the Class UsagePointBase
//  Created on:      13-Apr-2020 2:51:47 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_BA4B8ACA_CEEA_429a_864C_D70E395C0636__INCLUDED_)
#define EA_BA4B8ACA_CEEA_429a_864C_D70E395C0636__INCLUDED_

#include "RoleFlagsType.h"
#include "ServiceKind.h"
#include "UInt8.h"
#include "IdentifiedObject.h"

/**
 * Logical point on a network at which consumption or production is either
 * physically measured (e.g. metered) or estimated (e.g. unmetered street lights).
 * A container for associating ReadingType, Readings and ReadingSets.
 */
class UsagePointBase : public IdentifiedObject
{

public:
	UsagePointBase();
	virtual ~UsagePointBase();
	/**
	 * Specifies the roles that apply to the usage point.
	 */
	RoleFlagsType roleFlags;
	/**
	 * The kind of service provided by this usage point. 
	 */
	ServiceKind serviceCategoryKind;
	/**
	 * Specifies the current status of the service at this usage point.
	 * 0 = off
	 * 1 = on
	 */
	UInt8 status;

};
#endif // !defined(EA_BA4B8ACA_CEEA_429a_864C_D70E395C0636__INCLUDED_)
