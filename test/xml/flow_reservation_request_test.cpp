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

class TestFlowReservationRequestXML : public ::testing::Test 
{
protected:
    void SetUp() override 
    {        
        // read in the sample file
        std::ifstream ifs("./sep_examples/FlowReservationRequest.xml");
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

TEST_F(TestFlowReservationRequestXML, IsSampleValid) 
{   
    EXPECT_TRUE(validator.ValidateXml(xml_str));      
}

TEST_F(TestFlowReservationRequestXML, IsAdapterValid) 
{   
    // create model, convert it into a string and then reparse to see if the string was valid
    sep::FlowReservationRequest *fr_request = new sep::FlowReservationRequest;
    xml::Parse(xml_str, fr_request);
    EXPECT_TRUE(fr_request != nullptr);
    delete fr_request;
}


TEST_F(TestFlowReservationRequestXML, IsAdapterTranslationAccurate) 
{   
    // create model, convert it into a string and then reparse to see if the string was valid
    sep::FlowReservationRequest *fr_request = new sep::FlowReservationRequest;
    xml::Parse(xml_str, fr_request);
    EXPECT_EQ(fr_request->creation_time, 1);
    EXPECT_EQ(fr_request->duration_requested, 0);
    EXPECT_EQ(fr_request->energy_requested.multiplier, 1);
    EXPECT_EQ(fr_request->energy_requested.value, -140737488355328);
    EXPECT_EQ(fr_request->interval_requested.duration, 0);
    EXPECT_EQ(fr_request->interval_requested.start, 1);
    EXPECT_EQ(fr_request->power_requested.multiplier,1);
    EXPECT_EQ(fr_request->power_requested.value, 1);
    EXPECT_EQ(fr_request->request_status.datetime,1);
    EXPECT_EQ(xml::util::ToUnderlyingType(fr_request->request_status.status), 0);
    delete fr_request;
}
