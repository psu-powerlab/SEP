#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <climits>
#include <algorithm>
#include <gtest/gtest.h>
#include "models.hpp"
#include "adapter.hpp"
#include "xml_validator.hpp"

class TestFlowReservationResponseXML : public ::testing::Test 
{
protected:
    void SetUp() override 
    {        
        // read in the sample file
        std::ifstream ifs("./sep_examples/FlowReservationResponse.xml");
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
        // do nothing
    }

protected:
    std::string xml_str;
    XmlValidator validator;
};

TEST_F(TestFlowReservationResponseXML, IsSampleValid) 
{   
    EXPECT_TRUE(validator.ValidateXml(xml_str));      
}

TEST_F(TestFlowReservationResponseXML, IsAdapterValid) 
{   
    sep::FlowReservationResponse *fr_response = new sep::FlowReservationResponse;
    EXPECT_TRUE(xml::Parse(xml_str, fr_response));
    delete fr_response;
}