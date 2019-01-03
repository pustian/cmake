#include<stdio.h>
#include "config.h"

#ifdef USE_LOCAL_TEST
    static void message() {
        printf("function STATIC message 0: hello c \n");
    }
#else
    #include "sub/Demo3.h"
#endif

int main() {
    message();
#ifdef USE_LOCAL_TEST
    puts("LOCAL_TEST defined");
#else
    puts("LOCAL_TEST not defined");
#endif
    return 0;
}
