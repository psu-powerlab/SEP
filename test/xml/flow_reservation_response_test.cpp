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

TEST_F(TestFlowReservationResponseXML, IsAdapterTranslationAccurate) 
{   
    sep::FlowReservationResponse *fr_response = new sep::FlowReservationResponse;
    xml::Parse(xml_str, fr_response);
    EXPECT_EQ(xml::util::ToUnderlyingType(fr_response->subscribable), 0);
    EXPECT_EQ(fr_response->reply_to, "http://uri1");
    EXPECT_EQ(xml::util::ToUnderlyingType(fr_response->response_required), 0x00);
    EXPECT_EQ(fr_response->href, "http://uri1");
    EXPECT_EQ(fr_response->mrid,"0FB7");
    EXPECT_EQ(fr_response->description, "description1");
    EXPECT_EQ(fr_response->version, 0);
    EXPECT_EQ(fr_response->creation_time, 1);
    EXPECT_EQ(xml::util::ToUnderlyingType(fr_response->event_status.current_status), 0);
    EXPECT_EQ(fr_response->event_status.date_time, 1);
    EXPECT_EQ(fr_response->event_status.potentially_superseded, true);
    EXPECT_EQ(fr_response->event_status.potentially_superseded_time, 1);
    EXPECT_EQ(fr_response->event_status.reason, "reason1");
    EXPECT_EQ(fr_response->interval.duration,0);
    EXPECT_EQ(fr_response->interval.start, 1);
    EXPECT_EQ(fr_response->energy_available.multiplier,1);
    EXPECT_EQ(fr_response->energy_available.value,-140737488355328);
    EXPECT_EQ(fr_response->power_available.multiplier,1);
    EXPECT_EQ(fr_response->power_available.value,1);
    EXPECT_EQ(fr_response->subject, "0FB7");
    delete fr_response;
}