#include <iostream>
#include <cstdint>

// Just verify the models are linking properly
#include <sep/active_power.hpp>
#include <sep/power_of_ten_multiplier_type.hpp>

template <typename Enumeration>
auto as_value(Enumeration const value)
    -> typename std::underlying_type<Enumeration>::type
{
    return static_cast<typename std::underlying_type<Enumeration>::type>(value);
};

int main(int argc, char const *argv[])
{
    std::cout << "***SEP MODEL TESTING***" << std::endl;

    sep::PowerOfTenMultiplierType power_multiplier = sep::PowerOfTenMultiplierType::KILO;
    sep::ActivePower* active_power = new sep::ActivePower(power_multiplier, 1000);
    std::cout << "\tActive Power:" << as_value(active_power->multiplier_)*active_power->value_ << std::endl;

    return 0;
}
