#include <iostream>
#include <fstream>
#include <string>
#include <gtest/gtest.h>
#include <xml/active_power_adapter.hpp>

std::string 

TEST(ActivePowerXML, ReadXML) {
    std::ifstream ifs("sep_examples/ActivePower.xml");
    std::string file_string( 
        std::istreambuf_iterator<char>(ifs),
        std::istreambuf_iterator<char>() 
    );
    std::cout << file_string << std::endl;
}