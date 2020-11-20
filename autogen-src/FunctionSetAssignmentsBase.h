///////////////////////////////////////////////////////////
//  FunctionSetAssignmentsBase.h
//  Implementation of the Class FunctionSetAssignmentsBase
//  Created on:      13-Apr-2020 2:51:30 PM
///////////////////////////////////////////////////////////

#if !defined(EA_A07B4C3C_A91B_404c_9BA0_7ABE64C0B3B3__INCLUDED_)
#define EA_A07B4C3C_A91B_404c_9BA0_7ABE64C0B3B3__INCLUDED_

#include "TimeLink.h"
#include "DemandResponseProgramListLink.h"
#include "FileListLink.h"
#include "PrepaymentListLink.h"
#include "UsagePointListLink.h"
#include "DERProgramListLink.h"
#include "ResponseSetListLink.h"
#include "CustomerAccountListLink.h"
#include "MessagingProgramListLink.h"
#include "TariffProfileListLink.h"
#include "Resource.h"

/**
 * Defines a collection of function set instances that are to be used by one or
 * more devices as indicated by the EndDevice object(s) of the server. 
 */
class FunctionSetAssignmentsBase : public Resource
{

public:
	FunctionSetAssignmentsBase();
	virtual ~FunctionSetAssignmentsBase();
	TimeLink *m_TimeLink;
	DemandResponseProgramListLink m_DemandResponseProgramListLink;
	FileListLink *m_FileListLink;
	PrepaymentListLink *m_PrepaymentListLink;
	UsagePointListLink *m_UsagePointListLink;
	DERProgramListLink *m_DERProgramListLink;
	ResponseSetListLink *m_ResponseSetListLink;
	CustomerAccountListLink *m_CustomerAccountListLink;
	MessagingProgramListLink *m_MessagingProgramListLink;
	TariffProfileListLink m_TariffProfileListLink;

};
#endif // !defined(EA_A07B4C3C_A91B_404c_9BA0_7ABE64C0B3B3__INCLUDED_)
