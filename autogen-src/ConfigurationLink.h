///////////////////////////////////////////////////////////
//  ConfigurationLink.h
//  Implementation of the Class ConfigurationLink
//  Created on:      13-Apr-2020 2:51:22 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_9285FA60_E647_4623_A372_80181F0521C7__INCLUDED_)
#define EA_9285FA60_E647_4623_A372_80181F0521C7__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of Configuration. 
 */
class ConfigurationLink : public Link
{

public:
	ConfigurationLink();
	virtual ~ConfigurationLink();

};
#endif // !defined(EA_9285FA60_E647_4623_A372_80181F0521C7__INCLUDED_)
