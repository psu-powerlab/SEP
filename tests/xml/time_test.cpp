#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <climits>
#include <algorithm>
#include <gtest/gtest.h>
#include <sep/models.hpp>
#include <xml/adapter.hpp>
#include <xml/xml_validator.hpp>

class TestTimeXML : public ::testing::Test 
{
protected:
    void SetUp() override 
    {        
        // read in the sample file
        std::ifstream ifs("./Time.xml");
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

TEST_F(TestTimeXML, IsSampleValid) 
{   
    EXPECT_TRUE(validator.ValidateXml(xml_str));      
}

TEST_F(TestTimeXML, IsAdapterValid) 
{   
    sep::Time *time = new sep::Time;
    EXPECT_TRUE(xml::Parse(xml_str, time));
    delete time;
}

TEST_F(TestTimeXML, IsAdapterTranslationAccurate) 
{   
    sep::Time *time = new sep::Time;
    xml::Parse(xml_str, time);
    EXPECT_EQ(time->poll_rate, 900);
    EXPECT_EQ(time->href, "http://uri1");
    EXPECT_EQ(time->current_time, 1);
    EXPECT_EQ(time->dst_end_time, 1);
    EXPECT_EQ(time->dst_offset, 1);
    EXPECT_EQ(time->dst_start_time, 1);
    EXPECT_EQ(time->local_time, 1);
    EXPECT_EQ(time->quality, 3);
    EXPECT_EQ(time->tz_offset, 1);
    delete time;
}

TEST_F(TestTimeXML, CheckAdapterQualityMinValue) 
{   
    boost::property_tree::ptree pt;
    pt.put("Time.<xmlattr>.pollRate", 900);
    pt.put("Time.<xmlattr>.href", 1);
    pt.put("Time.currentTime", 1);
    pt.put("Time.dstEndTime", 1);
    pt.put("Time.dstOffset", 1);
    pt.put("Time.dstStartTime", 1);
    pt.put("Time.localTime", 1);
    pt.put("Time.quality", 2);
    pt.put("Time.tzOffset", 1);

    std::string xml_adapter = xml::util::Stringify(pt);
    sep::Time *time = new sep::Time;
    EXPECT_FALSE(xml::Parse(xml_adapter, time));
    delete time;
}

TEST_F(TestTimeXML, CheckAdapterQualityMaxValue) 
{   
    boost::property_tree::ptree pt;
    pt.put("Time.<xmlattr>.pollRate", 900);
    pt.put("Time.<xmlattr>.href", 1);
    pt.put("Time.currentTime", 1);
    pt.put("Time.dstEndTime", 1);
    pt.put("Time.dstOffset", 1);
    pt.put("Time.dstStartTime", 1);
    pt.put("Time.localTime", 1);
    pt.put("Time.quality", 8);
    pt.put("Time.tzOffset", 1);

    std::string xml_adapter = xml::util::Stringify(pt);
    sep::Time *time = new sep::Time;
    EXPECT_FALSE(xml::Parse(xml_adapter, time));
    delete time;;
}