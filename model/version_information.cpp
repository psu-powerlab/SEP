
#include "include/sep/version_information.hpp"

namespace sep
{
    VersionInformation::VersionInformation()
    {
        default_namespace_ = "urn::ieee:std::2030.5:ns";
        element_form_default_ = "qualified";
        schema_location_ = "sep.xsd";
        target_namespace_ = default_namespace_;
        trace_id_ = "";
        version_ = "1.0";
    }

    VersionInformation::~VersionInformation()
    {
        // do nothing
    }
} // namespace sep