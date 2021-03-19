#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <climits>
#include <gtest/gtest.h>
#include <sep/active_power.hpp>
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
            xml_str = oss.str();        
        }
        else
        {
            std::cout << "couldn't open xml file" << std::endl;
        };
    }

    void TearDown() override
    {
        XMLPlatformUtils::Terminate(); 
    }

protected:
    const char *xsd_path = "./sep.xsd";
    std::string xml_str;
};

TEST_F(TestActivePowerXML, IsSampleValid) 
{    
    bool valid = ValidateSchema(xsd_path, xml_str);
    EXPECT_EQ(valid, true);       
}

TEST_F(TestActivePowerXML, IsAdaterValid) 
{   
    std::shared_ptr<sep::ActivePower> active_power = std::make_shared<sep::ActivePower>();
    xml::ActivePowerAdapter ap_adapter(active_power);

    boost::property_tree::ptree pt = ap_adapter.Parse(xml_str);
    ap_adapter.Translate(pt);

    EXPECT_EQ(active_power->multiplier, 1);
    EXPECT_EQ(active_power->value, -32000);
    
    boost::property_tree::ptree pt_adapter = ap_adapter.Treeify();
    std::string xml_adapter = ap_adapter.Serialize(pt_adapter);
    bool valid = ValidateSchema(xsd_path, xml_adapter);
    EXPECT_EQ(valid, true);   
}

TEST_F(TestActivePowerXML, DoesAdapterMatchSample) 
{   
    std::shared_ptr<sep::ActivePower> active_power = std::make_shared<sep::ActivePower>();
    xml::ActivePowerAdapter ap_adapter(active_power);

    boost::property_tree::ptree pt = ap_adapter.Parse(xml_str);
    ap_adapter.Translate(pt);    
    boost::property_tree::ptree pt_adapter = ap_adapter.Treeify();
    std::string xml_adapter = ap_adapter.Serialize(pt_adapter);
    EXPECT_EQ(xml_str, xml_adapter);   
}

TEST_F(TestActivePowerXML, DoesXercesCatchHighValues) 
{   
    std::shared_ptr<sep::ActivePower> active_power = std::make_shared<sep::ActivePower>();
    xml::ActivePowerAdapter ap_adapter(active_power);

    boost::property_tree::ptree pt = ap_adapter.Parse(xml_str);
    pt.put("ActivePower.multiplier", 9+1);
    pt.put("ActivePower.value", 32767 + 1);
    ap_adapter.Translate(pt);
    
    boost::property_tree::ptree pt_adapter = ap_adapter.Treeify();
    std::string xml_adapter = ap_adapter.Serialize(pt_adapter);
    bool valid = ValidateSchema(xsd_path, xml_adapter);
    EXPECT_EQ(valid, true);   
}