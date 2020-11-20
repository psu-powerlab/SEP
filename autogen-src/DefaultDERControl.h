///////////////////////////////////////////////////////////
//  DefaultDERControl.h
//  Implementation of the Class DefaultDERControl
//  Created on:      13-Apr-2020 2:51:24 PM
//  Original author: vanausse
///////////////////////////////////////////////////////////

#if !defined(EA_174F061F_5E16_4bcf_9F05_68907D5E27F1__INCLUDED_)
#define EA_174F061F_5E16_4bcf_9F05_68907D5E27F1__INCLUDED_

#include "UInt32.h"
#include "UInt16.h"
#include "Int16.h"
#include "SubscribableIdentifiedObject.h"
#include "DERControlBase.h"

/**
 * Contains control mode information to be used if no active DERControl is found.
 */
class DefaultDERControl : public SubscribableIdentifiedObject
{

public:
	DefaultDERControl();
	virtual ~DefaultDERControl();
	/**
	 * Enter service delay, in hundredths of a second. When present, this value SHALL
	 * update the value of the corresponding setting (DERSettings::setESDelay).
	 */
	UInt32 setESDelay;
	/**
	 * Enter service frequency high. Specified in hundredths of Hz. When present, this
	 * value SHALL update the value of the corresponding setting (DERSettings::
	 * setESHighFreq).
	 */
	UInt16 setESHighFreq;
	/**
	 * Enter service voltage high. Specified as an effective percent voltage, defined
	 * as (100% * (locally measured voltage - setVRefOfs) / setVRef), in hundredths of
	 * a percent. When present, this value SHALL update the value of the corresponding
	 * setting (DERSettings::setESHighVolt).
	 */
	Int16 setESHighVolt;
	/**
	 * Enter service frequency low. Specified in hundredths of Hz. When present, this
	 * value SHALL update the value of the corresponding setting (DERSettings::
	 * setESLowFreq).
	 */
	UInt16 setESLowFreq;
	/**
	 * Enter service voltage low. Specified as an effective percent voltage, defined
	 * as (100% * (locally measured voltage - setVRefOfs) / setVRef), in hundredths of
	 * a percent. When present, this value SHALL update the value of the corresponding
	 * setting (DERSettings::setESLowVolt).
	 */
	Int16 setESLowVolt;
	/**
	 * Enter service ramp time, in hundredths of a second. When present, this value
	 * SHALL update the value of the corresponding setting (DERSettings::setESRampTms).
	 */
	UInt32 setESRampTms;
	/**
	 * Enter service randomized delay, in hundredths of a second. When present, this
	 * value SHALL update the value of the corresponding setting (DERSettings::
	 * setESRandomDelay).
	 */
	UInt32 setESRandomDelay;
	/**
	 * Set default rate of change (ramp rate) of active power output due to command or
	 * internal action, defined in %setWMax / second.  Resolution is in hundredths of
	 * a percent/second. A value of 0 means there is no limit. Interpreted as a
	 * percentage change in output capability limit per second when used as a default
	 * ramp rate. When present, this value SHALL update the value of the corresponding
	 * setting (DERSettings::setGradW).
	 */
	UInt16 setGradW;
	/**
	 * Set soft-start rate of change (soft-start ramp rate) of active power output due
	 * to command or internal action, defined in %setWMax / second.  Resolution is in
	 * hundredths of a percent/second. A value of 0 means there is no limit.
	 * Interpreted as a percentage change in output capability limit per second when
	 * used as a ramp rate. When present, this value SHALL update the value of the
	 * corresponding setting (DERSettings::setSoftGradW).
	 */
	UInt16 setSoftGradW;
	DERControlBase *m_DERControlBase;

};
#endif // !defined(EA_174F061F_5E16_4bcf_9F05_68907D5E27F1__INCLUDED_)
