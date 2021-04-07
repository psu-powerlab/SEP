#ifndef __DCM_H__
#define __DCM_H__
#include <iostream>
#include <sep/models.hpp>
#include <vector>
#include <memory>

struct Entity
{
    virtual void Update (double elapsed_time) = 0;
};

class DCM : public Entity
{
public:
    DCM()
    {
        sep::Resource *dcap = new sep::DeviceCapability;
        sep::Resource *edev = new sep::EndDevice;
        sep::Resource *sdev = new sep::SelfDevice;
        resource_pool_.emplace_back(dcap);
        resource_pool_.emplace_back(edev);
        resource_pool_.emplace_back(sdev);
    };
    ~DCM()
    {
    };
    void Update (double elapsed_time)
    {
        for (auto resource : resource_pool_)
        {
            std::cout << elapsed_time << std::endl;
            if ( sep::DeviceCapability *dcap = dynamic_cast<sep::DeviceCapability*>(resource) ) 
            {
                dcap->poll_rate = 9000;
                sep::DeviceCapability *dcap2 = dynamic_cast<sep::DeviceCapability*>(resource);
                std::cout << dcap2->poll_rate << std::endl;
            } 
            else if (sep::EndDevice *edev = dynamic_cast<sep::EndDevice*>(resource))
            {
                edev->changed_time = 6000;
            } 
            else if (sep::SelfDevice *sdev = dynamic_cast<sep::SelfDevice*>(resource))
            {
                sdev->poll_rate = 3000;
            }
            else
            {
                std::cout << "Cannot be dynamic cast" << std::endl;
            }
        }
    };

private:
    std::vector<sep::Resource*> resource_pool_;
};



namespace der
{

} // namespace der

#endif // __DCM_H__