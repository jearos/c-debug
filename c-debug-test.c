#include <stdio.h>
#include "c-debug.h"
void test_call(void)
{
    printf("Inside function\n");
}


int main(void)
{
    unsigned int test = 0xDEADBEEF;
    C_DEBUG_PRINT_X32(test);
    C_DEBUG_PRINT_CALL(test_call());
    return 0;
}
