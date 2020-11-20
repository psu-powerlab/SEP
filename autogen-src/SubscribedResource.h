///////////////////////////////////////////////////////////
//  SubscribedResource.h
//  Implementation of the Class SubscribedResource
//  Created on:      13-Apr-2020 2:51:43 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_5081A0A0_4110_4951_A0CE_C8B15167ADC6__INCLUDED_)
#define EA_5081A0A0_4110_4951_A0CE_C8B15167ADC6__INCLUDED_

#include "DERControlList.h"
#include "DERControl.h"
#include "FlowReservationResponseList.h"
#include "FlowReservationResponse.h"
#include "FlowReservationRequestList.h"
#include "FlowReservationRequest.h"
#include "PrepaymentList.h"
#include "BillingReadingSetList.h"
#include "BillingPeriodList.h"
#include "CustomerAgreementList.h"
#include "TextMessageList.h"
#include "TextMessage.h"
#include "MessagingProgramList.h"
#include "MessagingProgram.h"
#include "TimeTariffIntervalList.h"
#include "TimeTariffInterval.h"
#include "TariffProfileList.h"
#include "UsagePointList.h"
#include "ReadingSetList.h"
#include "MeterReadingList.h"
#include "EndDeviceControlList.h"
#include "DemandResponseProgramList.h"
#include "FileList.h"
#include "Configuration.h"
#include "LogEventList.h"
#include "FunctionSetAssignmentsBase.h"
#include "FunctionSetAssignmentsList.h"
#include "SelfDevice.h"
#include "EndDeviceList.h"
#include "EndDevice.h"
#include "DeviceCapability.h"

/**
 * Contains the subscribed resource.
 */
class SubscribedResource
{

public:
	SubscribedResource();
	virtual ~SubscribedResource();
	DERControlList *m_DERControlList;
	DERControl *m_DERControl;
	FlowReservationResponseList *m_FlowReservationResponseList;
	FlowReservationResponse *m_FlowReservationResponse;
	FlowReservationRequestList *m_FlowReservationRequestList;
	FlowReservationRequest *m_FlowReservationRequest;
	PrepaymentList *m_PrepaymentList;
	BillingReadingSetList *m_BillingReadingSetList;
	BillingPeriodList *m_BillingPeriodList;
	CustomerAgreementList *m_CustomerAgreementList;
	TextMessageList *m_TextMessageList;
	TextMessage *m_TextMessage;
	MessagingProgramList *m_MessagingProgramList;
	MessagingProgram *m_MessagingProgram;
	TimeTariffIntervalList *m_TimeTariffIntervalList;
	TimeTariffInterval *m_TimeTariffInterval;
	TariffProfileList *m_TariffProfileList;
	UsagePointList *m_UsagePointList;
	ReadingSetList *m_ReadingSetList;
	MeterReadingList *m_MeterReadingList;
	EndDeviceControlList *m_EndDeviceControlList;
	DemandResponseProgramList *m_DemandResponseProgramList;
	FileList *m_FileList;
	Configuration *m_Configuration;
	LogEventList *m_LogEventList;
	FunctionSetAssignmentsBase *m_FunctionSetAssignmentsBase;
	FunctionSetAssignmentsList *m_FunctionSetAssignmentsList;
	SelfDevice *m_SelfDevice;
	EndDeviceList *m_EndDeviceList;
	EndDevice *m_EndDevice;
	DeviceCapability *m_DeviceCapability;

};
#endif // !defined(EA_5081A0A0_4110_4951_A0CE_C8B15167ADC6__INCLUDED_)
