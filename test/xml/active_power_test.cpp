#include <iostream>
#include <fstream>
#include <string>
#include <gtest/gtest.h>
#include <xml/active_power_adapter.hpp>
#include "xml_validator.hpp"


class TestActivePowerXML : public ::testing::Test 
{
protected:
    void SetUp() override 
    {        
        XMLPlatformUtils::Initialize();
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
        }
        active_power_xml_ = new xml::ActivePowerAdapter(xml_str_);
    }

    void TearDown() override
    {
        XMLPlatformUtils::Terminate(); 
    }

protected:
    std::string xml_str_;
    xml::ActivePowerAdapter *active_power_xml_;
};

TEST_F(TestActivePowerXML, IsSampleValid) 
{    
    const char *xsd_path = "./sep.xsd";
    const char *xml_path = "./sep_examples/ActivePower.xml";
     
    bool valid = ValidateSchema(xsd_path, xml_path);
    EXPECT_EQ(valid, true);       
}

TEST_F(TestActivePowerXML, IsStr2AdapterValid) 
{    
    EXPECT_EQ(xml_str_, active_power_xml_->serialize());    
}
