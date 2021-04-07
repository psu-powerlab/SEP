#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <climits>
#include <algorithm>
#include <gtest/gtest.h>
#include <sep/models.hpp>
#include "dcm.hpp"
#include "random.hpp"

class TestDCM : public ::testing::Test 
{
protected:
    void SetUp() override 
    {        
        // do nothing
    }

    void TearDown() override
    {
        // do nothing
    }

protected:    
    DCM dcm;
};

TEST_F(TestDCM, IsSampleValid) 
{   
    dcm.Update(Random::Double());
}