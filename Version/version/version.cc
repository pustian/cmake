#include <iostream>
#include <string>
#include "version/version.h"

namespace pustian {
    const int version_major = PUSTIAN_VERSION_MAJOR;
    const int version_minor = PUSTIAN_VERSION_MINOR;
    const int version_micro = PUSTIAN_VERSION_MICRO;
    const int version_patch = PUSTIAN_VERSION_PATCH;
    const std::string version_misc_suffix = PUSTIAN_VERSION_MISC_SUFFIX;
    
    const std::string version_string = "" 
        + std::to_string(version_major) + "." 
        + std::to_string(version_minor) + "."
        + std::to_string(version_micro) + "." 
        + std::to_string(version_patch) + "." 
        + version_misc_suffix;

}
