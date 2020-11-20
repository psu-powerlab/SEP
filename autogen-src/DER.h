///////////////////////////////////////////////////////////
//  DER.h
//  Implementation of the Class DER
//  Created on:      13-Apr-2020 2:51:24 PM
//  Original author: vanausse
///////////////////////////////////////////////////////////

#if !defined(EA_2A977C36_B92C_4db7_85E7_CB62CE3FD9E8__INCLUDED_)
#define EA_2A977C36_B92C_4db7_85E7_CB62CE3FD9E8__INCLUDED_

#include "AssociatedDERProgramListLink.h"
#include "CurrentDERProgramLink.h"
#include "AssociatedUsagePointLink.h"
#include "DERAvailabilityLink.h"
#include "DERCapabilityLink.h"
#include "DERStatusLink.h"
#include "SubscribableResource.h"
#include "DERSettingsLink.h"

/**
 * Contains links to DER resources. 
 */
class DER : public SubscribableResource
{

public:
	DER();
	virtual ~DER();
	AssociatedDERProgramListLink *m_AssociatedDERProgramListLink;
	CurrentDERProgramLink *m_CurrentDERProgramLink;
	AssociatedUsagePointLink *m_AssociatedUsagePointLink;
	DERAvailabilityLink *m_DERAvailabilityLink;
	DERCapabilityLink *m_DERCapabilityLink;
	DERStatusLink *m_DERStatusLink;
	DERSettingsLink *m_DERSettingsLink;

};
#endif // !defined(EA_2A977C36_B92C_4db7_85E7_CB62CE3FD9E8__INCLUDED_)
