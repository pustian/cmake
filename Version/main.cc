#include <iostream>

#include "version/version.h"

int main() {
    std::cout<<"version:"
        <<"+"<<pustian::version_major
        <<"+"<<pustian::version_minor
        <<"+"<<pustian::version_micro
        <<"+"<<pustian::version_patch
        <<"+"<<pustian::version_misc_suffix
        <<"\nversion_string:"
        <<pustian::version_string
        <<std::endl;
    return 0;
}
