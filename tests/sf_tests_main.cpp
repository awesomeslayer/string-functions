#include "sf_tests.h"
#define DEBUG_MODE

int main()
{
    #ifdef DEBUG_MODE
        printf("DEBUG_MODE\n");

        test_my_puts();
        test_my_strchr();
        test_my_strlen();
        test_my_strcpy();
        test_my_strncpy();
        test_my_strcat();
        test_my_strncat();
        test_my_strcmp();
        test_my_strdup();
        test_my_getline();
        test_my_fgets();
    #endif

    return 0;
}
