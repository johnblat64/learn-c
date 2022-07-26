// printf integer types

#include <stdio.h>

void main(){
    char char_var = -6;
    unsigned char unsigned_char_var = 6;
    signed char signed_char_var = -10;

    short short_var = -100;
    unsigned short unsigned_short_var = 100;
    
    int int_var = -10;
    unsigned int unsigned_int_var = 100; 
    
    long long_var = -10000000;
    unsigned long unsigned_long_var = 10000000;

    printf("char_var: %d\n", char_var);

    printf("signed_char_var: %d\n", signed_char_var);

    printf("unsigned_char_var: %u\n", unsigned_char_var);

    printf("short_var: %d\n", short_var);

    printf("unsigned_short_var: %u\n", unsigned_short_var);

    printf("int_var: %d\n", int_var);

    printf("unsigned_int_var: %u\n", unsigned_int_var);

    printf("long_var: %ld\n", long_var);

    printf("unsigned_long_var: %lu\n", unsigned_long_var);

}