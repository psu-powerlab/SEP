#include <gtest/gtest.h>
#include <string>
#include <memory>
#include <sep/active_power.hpp>
#include <xml/active_power_adapter.hpp>

int main(int argc, char **argv) {
    std::shared_ptr<sep::ActivePower> active_power = std::make_shared<sep::ActivePower>();
    xml::ActivePowerAdapter ap_adapter(active_power);

    // read in the sample file
    std::string xml_str;
    std::ifstream ifs("./sep_examples/ActivePower.xml");
    if (ifs)
    {
        std::ostringstream oss;
        oss << ifs.rdbuf();
        xml_str = oss.str();
        std::cout << xml_str << std::endl;      
    }
    else
    {
        std::cout << "couldn't open xml file" << std::endl;
    };

    boost::property_tree::ptree pt = ap_adapter.parse(xml_str);
    std::cout << ap_adapter.Serialize(pt) << std::endl;

    ap_adapter.Translate(pt);
    boost::property_tree::ptree pt_adapter = ap_adapter.Treeify();
    std::cout << ap_adapter.Serialize(pt_adapter) << std::endl;
    //::testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();
}
