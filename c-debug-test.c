#include <stdio.h>
#include "c-debug.h"
void test_call(void)
{
    printf("Inside function\n");
}

unsigned int test_call_return(void)
{
    return 0xC0FFEE;
}

int main(void)
{
    unsigned int test = 0xDEADBEEF;
    C_DEBUG_PRINT_X32(test);
    C_DEBUG_PRINT_CALL_RETURN_X32(test = test_call_return());
    C_DEBUG_PRINT_CALL_RETURN_VOID(test_call());
    return 0;
}
