#ifndef __VERSION_INFORMATION_H__
#define __VERSION_INFORMATION_H__
#include <string>

namespace sep
{
class VersionInformation
{
    public:
        VersionInformation ();
        ~VersionInformation ();
        
    public:
        std::string default_namespace_;
        std::string element_form_default_;
        std::string schema_location_;
        std::string target_namespace_;
        std::string trace_id_;
        std::string version_;
};
}; // namespace




#endif // __VERSION_INFORMATION_H__