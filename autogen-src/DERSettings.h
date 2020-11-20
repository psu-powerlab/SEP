///////////////////////////////////////////////////////////
//  DERSettings.h
//  Implementation of the Class DERSettings
//  Created on:      13-Apr-2020 2:51:26 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_27094925_9AE1_4195_859B_AAF62D45E5CD__INCLUDED_)
#define EA_27094925_9AE1_4195_859B_AAF62D45E5CD__INCLUDED_

#include "DERControlType.h"
#include "UInt32.h"
#include "UInt16.h"
#include "Int16.h"
#include "CurrentRMS.h"
#include "AmpereHour.h"
#include "ApparentPower.h"
#include "VoltageRMS.h"
#include "ReactivePower.h"
#include "WattHour.h"
#include "PowerFactor.h"
#include "TimeType.h"
#include "SubscribableResource.h"

/**
 * Distributed energy resource settings
 */
class DERSettings : public SubscribableResource
{

public:
	DERSettings();
	virtual ~DERSettings();
	/**
	 * Bitmap indicating the DER Controls enabled on the device. See DERControlType
	 * for values. If a control is supported (see DERCapability::modesSupported), but
	 * not enabled, the control will not be executed if encountered.
	 */
	DERControlType modesEnabled;
	/**
	 * Enter service delay, in hundredths of a second.
	 */
	UInt32 setESDelay;
	/**
	 * Enter service frequency high. Specified in hundredths of Hz.
	 */
	UInt16 setESHighFreq;
	/**
	 * Enter service voltage high. Specified as an effective percent voltage, defined
	 * as (100% * (locally measured voltage - setVRefOfs) / setVRef), in hundredths of
	 * a percent.
	 */
	Int16 setESHighVolt;
	/**
	 * Enter service frequency low. Specified in hundredths of Hz.
	 */
	UInt16 setESLowFreq;
	/**
	 * Enter service voltage low. Specified as an effective percent voltage, defined
	 * as (100% * (locally measured voltage - setVRefOfs) / setVRef), in hundredths of
	 * a percent.
	 */
	Int16 setESLowVolt;
	/**
	 * Enter service ramp time, in hundredths of a second.
	 */
	UInt32 setESRampTms;
	/**
	 * Enter service randomized delay, in hundredths of a second.
	 */
	UInt32 setESRandomDelay;
	/**
	 * Set default rate of change (ramp rate) of active power output due to command or
	 * internal action, defined in %setWMax / second.  Resolution is in hundredths of
	 * a percent/second. A value of 0 means there is no limit. Interpreted as a
	 * percentage change in output capability limit per second when used as a default
	 * ramp rate.
	 */
	UInt16 setGradW;
	/**
	 * AC current maximum. Maximum AC current in RMS Amperes.
	 */
	CurrentRMS setMaxA;
	/**
	 * Maximum usable energy storage capacity of the DER, in AmpHours. Note: this may
	 * be different from physical capability.
	 */
	AmpereHour setMaxAh;
	/**
	 * Apparent power charge maximum. Maximum apparent power the DER can absorb from
	 * the grid in Volt-Amperes. May differ from the apparent power maximum (setMaxVA).
	 */
	ApparentPower setMaxChargeRateVA;
	/**
	 * Maximum rate of energy transfer received by the storage device, in Watts.
	 * Defaults to rtgMaxChargeRateW.
	 */
	ActivePower setMaxChargeRateW;
	/**
	 * Apparent power discharge maximum. Maximum apparent power the DER can deliver to
	 * the grid in Volt-Amperes. May differ from the apparent power maximum (setMaxVA).
	 */
	ApparentPower setMaxDischargeRateVA;
	/**
	 * Maximum rate of energy transfer delivered by the storage device, in Watts.
	 * Defaults to rtgMaxDischargeRateW.
	 */
	ActivePower setMaxDischargeRateW;
	/**
	 * AC voltage maximum setting.
	 */
	VoltageRMS setMaxV;
	/**
	 * Set limit for maximum apparent power capability of the DER (in VA). Defaults to
	 * rtgMaxVA.
	 */
	ApparentPower setMaxVA;
	/**
	 * Set limit for maximum reactive power delivered by the DER (in var). SHALL be a
	 * positive value <= rtgMaxVar (default).  
	 */
	ReactivePower setMaxVar;
	/**
	 * Set limit for maximum reactive power received by the DER (in var). If present,
	 * SHALL be a negative value >= rtgMaxVarNeg (default). If absent, defaults to
	 * negative setMaxVar.
	 */
	ReactivePower setMaxVarNeg;
	/**
	 * Set limit for maximum active power capability of the DER (in W). Defaults to
	 * rtgMaxW.
	 */
	ActivePower setMaxW;
	/**
	 * Maximum energy storage capacity of the DER, in WattHours. Note: this may be
	 * different from physical capability.
	 */
	WattHour setMaxWh;
	/**
	 * Set minimum Power Factor displacement limit of the DER when injecting reactive
	 * power (over-excited); SHALL be a positive value between 0.0 (typically > 0.7)
	 * and 1.0.  SHALL be >= rtgMinPFOverExcited (default).
	 */
	PowerFactor setMinPFOverExcited;
	/**
	 * Set minimum Power Factor displacement limit of the DER when absorbing reactive
	 * power (under-excited); SHALL be a positive value between 0.0 (typically > 0.7)
	 * and 0.9999.  If present, SHALL be >= rtgMinPFUnderExcited (default).  If absent,
	 * defaults to setMinPFOverExcited.
	 */
	PowerFactor setMinPFUnderExcited;
	/**
	 * AC voltage minimum setting.
	 */
	VoltageRMS setMinV;
	/**
	 * Set soft-start rate of change (soft-start ramp rate) of active power output due
	 * to command or internal action, defined in %setWMax / second.  Resolution is in
	 * hundredths of a percent/second. A value of 0 means there is no limit.
	 * Interpreted as a percentage change in output capability limit per second when
	 * used as a ramp rate.
	 */
	UInt16 setSoftGradW;
	/**
	 * AC voltage nominal setting.
	 */
	VoltageRMS setVNom;
	/**
	 * The nominal AC voltage (RMS) at the utility's point of common coupling.
	 */
	VoltageRMS setVRef;
	/**
	 * The nominal AC voltage (RMS) offset between the DER's electrical connection
	 * point and the utility's point of common coupling.
	 */
	VoltageRMS setVRefOfs;
	/**
	 * Specifies the time at which the DER information was last updated. 
	 */
	TimeType updatedTime;

};
#endif // !defined(EA_27094925_9AE1_4195_859B_AAF62D45E5CD__INCLUDED_)
