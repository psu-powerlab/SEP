#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <gtest/gtest.h>
#include <xml/active_power_adapter.hpp>
#include "xml_validator.hpp"


class TestActivePowerXML : public ::testing::Test 
{
protected:
    void SetUp() override 
    {        
        XMLPlatformUtils::Initialize();

        // read in the sample file
        std::ifstream ifs("./sep_examples/ActivePower.xml");
        if (ifs)
        {
            std::ostringstream oss;
            oss << ifs.rdbuf();
            xml_str_ = oss.str();        
        }
        else
        {
            std::cout << "couldn't open xml file" << std::endl;
        };

        // initialize the test variables
        std::shared_ptr<sep::ActivePower> active_power;
        active_power_xml_ = new xml::ActivePowerAdapter(active_power);
    }

    void TearDown() override
    {
        XMLPlatformUtils::Terminate(); 
    }

protected:
    const char *xsd_path_ = "./sep.xsd";
    std::string xml_str_;
    std::shared_ptr<sep::ActivePower> active_power_xml_;
};

TEST_F(TestActivePowerXML, IsSampleValid) 
{    
    bool valid = ValidateSchema(xsd_path_, xml_str_);
    EXPECT_EQ(valid, true);       
}

TEST_F(TestActivePowerXML, IsAdapterParseValid) 
{    
    active_power_xml_->parse(xml_str_);
    EXPECT_EQ(active_power_xml_->active_power_->multiplier_, sep::PowerOfTenMultiplierType::HECTO);
    EXPECT_EQ(active_power_xml_->active_power_->value_, -32000);  
}

TEST_F(TestActivePowerXML, IsAdapterSerializeValid)
{    
    active_power_xml_->parse(xml_str_);  // this should be saved in the test harness already
    std::string adapter_xml = active_power_xml_->serialize();
    EXPECT_EQ(adapter_xml, xml_str_);    
}