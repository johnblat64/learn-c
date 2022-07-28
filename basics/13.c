// BITWISE OPERATORS

#include <stdio.h>

void main(){

    int a = 0b0000000011110000;

    int b = 0b0000000000111111;


    // AND &
    
    int AND_result = a & b; // 0000 0000 0011 0000

    // OR  |
    int OR_result = a | b;  // 0000 0000 1111 1111

    // XOR ^
    int XOR_result = a ^ b; // 0000 0000 1100 1111

    // NOT ~
    int NOT_result = ~a;    // 1111 1111 0000 1111

    // LEFT SHIFT  <<
    int LS_result = a << 2; // 0000 0011 1100 0000

    // RIGHT SHIFT >>
    int RS_result = a >> 2; // 0000 0000 0011 1100

    // display
    printf("a: %x\n", a);
    printf("b: %x\n", b);
    printf("AND_result: %x\n", AND_result);
    printf("OR_result: %x\n", OR_result);
    printf("XOR_result: %x\n", XOR_result);
    printf("NOT_result: %x\n", NOT_result);
    printf("LS_result: %x\n", LS_result);
    printf("RS_result: %x\n", RS_result);


    // bitwise operations against self

    int x = 15;
    x |= 32; // x = x | 32

    printf("x: %x\n", x);
}

// used in flags often