#include<stdio.h>
#include "sub/Demo5.h"
int main(int argc, char* argv[]) {
    if(2 == argc ) {
        message(argv[1]);
    } else {
        message("c world");
    }
    return 0;
}
