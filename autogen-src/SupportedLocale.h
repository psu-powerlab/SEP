///////////////////////////////////////////////////////////
//  SupportedLocale.h
//  Implementation of the Class SupportedLocale
//  Created on:      13-Apr-2020 2:51:44 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_3E850637_1A68_495f_A181_9CA2A3B691BB__INCLUDED_)
#define EA_3E850637_1A68_495f_A181_9CA2A3B691BB__INCLUDED_

#include "LocaleType.h"
#include "Resource.h"

/**
 * Specifies a locale that is supported
 */
class SupportedLocale : public Resource
{

public:
	SupportedLocale();
	virtual ~SupportedLocale();
	/**
	 * The code for a locale that is supported 
	 */
	LocaleType locale;

};
#endif // !defined(EA_3E850637_1A68_495f_A181_9CA2A3B691BB__INCLUDED_)
