#include "der_control_base.hpp"

namespace sep
{
DERControlBase::DERControlBase(
    bool op_mod_connect,
    bool op_mod_energize,
    sep::PowerFactorWithExcitation* op_mod_fixed_pf_absorb_w,
    sep::PowerFactorWithExcitation* op_mod_fixed_pf_inject_w,
    sep::FixedVAR* op_mod_fixed_var,
    sep::SignedPerCent* op_mod_fixed_w,
    sep::FreqDroopType* op_mod_freq_droop,
    std::string op_mod_freq_watt,
    std::string op_mod_hfrt_may_trip,
    std::string op_mod_hfrt_must_trip,
    std::string op_mod_hvrt_may_trip,
    std::string op_mod_hvrt_momentary_cessation,
    std::string op_mod_hvrt_must_trip,
    std::string op_mod_lfrt_may_trip,
    std::string op_mod_lvrt_momentary_cessation,
    std::string op_mod_lvrt_must_trip,
    sep::PerCent* op_mod_max_lim_w,
    sep::ReactivePower* op_mod_target_var,
    sep::ActivePower* op_mod_target_w,
    std::string op_mod_volt_var,
    std::string op_mod_volt_watt,
    std::string op_mod_watt_pf,
    std::string op_mod_watt_var,
    unsigned int ramp_tms) 
{
    op_mod_connect_ = op_mod_connect;
    op_mod_energize_ = op_mod_energize;
    op_mod_fixed_pf_absorb_w_ = op_mod_fixed_pf_absorb_w;
    op_mod_fixed_pf_inject_w_ = op_mod_fixed_pf_inject_w_;
    op_mod_fixed_var_ = op_mod_fixed_var;
    op_mod_fixed_w_ = op_mod_fixed_w;
    op_mod_freq_droop_ = op_mod_freq_droop;
    op_mod_freq_watt_ = op_mod_freq_watt;
    op_mod_hfrt_may_trip_ = op_mod_hfrt_may_trip;
    op_mod_hfrt_must_trip_ = op_mod_hfrt_must_trip;
    op_mod_hvrt_may_trip_ = op_mod_hvrt_may_trip;
    op_mod_hvrt_momentary_cessation_ = op_mod_hvrt_momentary_cessation;
    op_mod_hvrt_must_trip_ = op_mod_hvrt_must_trip;
    op_mod_lfrt_may_trip_ = op_mod_lfrt_may_trip;
    op_mod_lvrt_momentary_cessation_ = op_mod_lvrt_momentary_cessation;
    op_mod_lvrt_must_trip_ = op_mod_lvrt_must_trip;
    op_mod_max_lim_w_ = op_mod_max_lim_w;
    op_mod_target_var_ = op_mod_target_var;
    op_mod_target_w_ = op_mod_target_w;
    op_mod_volt_var_ = op_mod_volt_var;
    op_mod_volt_watt_ = op_mod_volt_watt;
    op_mod_watt_pf_ = op_mod_watt_pf;
    op_mod_watt_var_ = op_mod_watt_var;
    ramp_tms_ = ramp_tms;
}

DERControlBase::~DERControlBase() 
{
    delete op_mod_fixed_pf_absorb_w_;
    delete op_mod_fixed_pf_inject_w_;
    delete op_mod_fixed_var_;
    delete op_mod_fixed_w_;
    delete op_mod_freq_droop_;
    delete op_mod_max_lim_w_;
    delete op_mod_target_var_;
    delete op_mod_target_w_;
}
} // namespace