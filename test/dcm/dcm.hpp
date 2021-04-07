#ifndef __DCM_H__
#define __DCM_H__
#include <iostream>
#include <sep/models.hpp>
#include <vector>

class Entity
{
public:
    virtual void Update (double elapsed_time) = 0;
};

class DCM : public Entity
{
public:
    DCM()
    {
        sep::DeviceCapability *dcap = new sep::DeviceCapability;
        dcap->href = "https://gsp.com/dcap";
        dcap->poll_rate = 1500;
        dcap->end_device_list_link = "https://gsp.com/edev";

        resource_pool_.emplace_back(dcap);
    };
    ~DCM(){};
    void Update (double elapsed_time)
    {
        for (auto it = resource_pool_.begin(); it != resource_pool_.end(); it++)
        {
            
        }
    };

    void ResourceHandler (sep::DeviceCapability &dcap)
    {
        std::cout << dcap.poll_rate << std::endl;
    }
private:
    std::vector<sep::FlowReservationRequest> resource_pool_;
    std::vector<sep::FlowReservationResponse> resource_pool_;
};



namespace der
{

} // namespace der

#endif // __DCM_H__