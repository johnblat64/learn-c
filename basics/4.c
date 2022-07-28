// integer variable types

#include <stdio.h>

void main(){
    
    //
    // CHAR
    //
    // size = 1 byte
    // range = -128 to 127 OR 0 to 255

    char char_val = 100; 
    char char_val1 = 130; // will end up as -126 bc the value will "wrap back around"
    
    printf("char_val1: %d\n", char_val1);

    //
    // SHORT
    //
    // size = 2 bytes
    // range = -32,768 to 32,767

    short short_val = 200; 

    //
    // INT
    //
    // size = 4 bytes
    // range = -2,147,483,648 to 2,147,483,647

    int int_val = 100; 

    //
    // LONG
    //
    // size = 8 bytes
    // range = -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

    long long_val = 900; 

}