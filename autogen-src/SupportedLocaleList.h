///////////////////////////////////////////////////////////
//  SupportedLocaleList.h
//  Implementation of the Class SupportedLocaleList
//  Created on:      13-Apr-2020 2:51:44 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_ECD5CAEA_FC6B_49f9_83B7_9413621DBA19__INCLUDED_)
#define EA_ECD5CAEA_FC6B_49f9_83B7_9413621DBA19__INCLUDED_

#include "List.h"
#include "SupportedLocale.h"

/**
 * A List element to hold SupportedLocale objects.
 */
class SupportedLocaleList : public List
{

public:
	SupportedLocaleList();
	virtual ~SupportedLocaleList();
	SupportedLocale *m_SupportedLocale;

};
#endif // !defined(EA_ECD5CAEA_FC6B_49f9_83B7_9413621DBA19__INCLUDED_)
