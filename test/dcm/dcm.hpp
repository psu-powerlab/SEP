#ifndef __DCM_H__
#define __DCM_H__
#include <iostream>
#include <sep/models.hpp>
#include <vector>

struct Entity
{
    virtual void Update (double elapsed_time) {};
};

struct Player : Entity
{
};


class DCM : public Entity
{
public:
    DCM()
    {
        sep::DeviceCapability dcap;
        dcap.href = "https://gsp.com/dcap";
        dcap.poll_rate = 1500;
        dcap.end_device_list_link = "https://gsp.com/edev";

        Player p;
        resource_pool_.emplace_back(p);
    };
    ~DCM(){};
    void Update (double elapsed_time)
    {
        for (auto resource : resource_pool_)
        {
            
            if ( Player *dcap = dynamic_cast<Player*>(&resource) ) {
                
            } else {
                // different derived class
            }
        }
    };

    void ResourceHandler (sep::DeviceCapability &dcap)
    {
        std::cout << dcap.poll_rate << std::endl;
    }
private:
    std::vector<Entity> resource_pool_;
};



namespace der
{

} // namespace der

#endif // __DCM_H__