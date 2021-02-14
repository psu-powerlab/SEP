#ifndef __DER_CONTROL_BASE_H__
#define __DER_CONTROL_BASE_H__
#include <string>
#include <cstdint>
#include "power_factor_with_excitation.hpp"
#include "fixed_var.hpp"
#include "signed_per_cent.hpp"
#include "freq_droop_type.hpp"
#include "per_cent.hpp"
#include "reactive_power.hpp"
#include "active_power.hpp"

namespace sep
{
    // Distributed Energy Resource (DER) control values.
    class DERControlBase
    {
    public:
        DERControlBase(
            bool op_mod_connect = false,
            bool op_mod_energize = false,
            sep::PowerFactorWithExcitation *op_mod_fixed_pf_absorb_w = nullptr,
            sep::PowerFactorWithExcitation *op_mod_fixed_pf_inject_w = nullptr,
            sep::FixedVAR *op_mod_fixed_var = nullptr,
            sep::SignedPerCent *op_mod_fixed_w = nullptr,
            sep::FreqDroopType *op_mod_freq_droop = nullptr,
            std::string op_mod_freq_watt = "",
            std::string op_mod_hfrt_may_trip = "",
            std::string op_mod_hfrt_must_trip = "",
            std::string op_mod_hvrt_may_trip = "",
            std::string op_mod_hvrt_momentary_cessation = "",
            std::string op_mod_hvrt_must_trip = "",
            std::string op_mod_lfrt_may_trip = "",
            std::string op_mod_lvrt_momentary_cessation = "",
            std::string op_mod_lvrt_must_trip = "",
            sep::PerCent *op_mod_max_lim_w = nullptr,
            sep::ReactivePower *op_mod_target_var = nullptr,
            sep::ActivePower *op_mod_target_w = nullptr,
            std::string op_mod_volt_var = "",
            std::string op_mod_volt_watt = "",
            std::string op_mod_watt_pf = "",
            std::string op_mod_watt_var = "",
            uint16_t ramp_tms = 0);
        ~DERControlBase();

    public:
        bool op_mod_connect_;
        bool op_mod_energize_;
        sep::PowerFactorWithExcitation *op_mod_fixed_pf_absorb_w_;
        sep::PowerFactorWithExcitation *op_mod_fixed_pf_inject_w_;
        sep::FixedVAR *op_mod_fixed_var_;
        sep::SignedPerCent *op_mod_fixed_w_;
        sep::FreqDroopType *op_mod_freq_droop_;
        std::string op_mod_freq_watt_;
        std::string op_mod_hfrt_may_trip_;
        std::string op_mod_hfrt_must_trip_;
        std::string op_mod_hvrt_may_trip_;
        std::string op_mod_hvrt_momentary_cessation_;
        std::string op_mod_hvrt_must_trip_;
        std::string op_mod_lfrt_may_trip_;
        std::string op_mod_lvrt_momentary_cessation_;
        std::string op_mod_lvrt_must_trip_;
        sep::PerCent *op_mod_max_lim_w_;
        sep::ReactivePower *op_mod_target_var_;
        sep::ActivePower *op_mod_target_w_;
        std::string op_mod_volt_var_;
        std::string op_mod_volt_watt_;
        std::string op_mod_watt_pf_;
        std::string op_mod_watt_var_;
        uint16_t ramp_tms_; // ramp time, in hundredths of a second
    };
};     // namespace sep
#endif // __DER_CONTROL_BASE_H__