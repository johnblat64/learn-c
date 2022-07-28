// types

#include <stdio.h>

void main(){
    // integer types

    // 1 byte
    char c_val = 0; 
    char c_val_letter = 'a';
    signed char sc_val = 1; 
    unsigned char uc_val = 1; 

    // 2 bytes
    short sh_val = 1; 
    unsigned short ush_val = 2; 

    // 4 bytes
    int i_val = 1; 
    unsigned int ui_val = 2; 

    // 8 bytes
    long l_val = 3; 
    unsigned long ul_val = 4; 

    // 16 bytes
    long long ll_val = 5; 
    unsigned long long ull_val = 6; 


    // character and integer interchangability
    char c_val2 = 'a';
    char c_val3 = 'b';

    char c_val4 = 64;

    int i_val2 = 'c';


    // floating point types
    float f_val = 1.5f; // 4 BYTES (usually)

    double d_val = 1.5f; // 8 BYTES

    long double ld_val = 1.5f; // 10 BYTES

}