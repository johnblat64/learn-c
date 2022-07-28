// macros conditional

#include <stdio.h>

#ifdef LARGE_ARRAY
    const size_t array_len = 8128;
    int array[8128];
#else
    const size_t array_len = 1024;
    int array[1024];
#endif

void main(){
    printf("array length: %ld\n", array_len);
}