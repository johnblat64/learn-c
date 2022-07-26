// arithmetic operators

#include <stdio.h>

void main(){
    int x = 10;
    int y = 15;

    int add_result = x + y;
    int sub_result = x - y;
    int mul_result = x * y;
    int div_result = x / y;
    int mod_result = x % y;

    // arithmetic on self
    int a = 10;
    int b = 5;

    a += b; // a = a + b
    a -= b;
    a *= b;
    a /= b;
    a %= b;

    // increment and decrement

    int inc = 1;
    inc++; // 2

    int dec = 1;
    dec--; // 0

}