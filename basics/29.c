// PASSING POINTERS TO FUNCTIONS

#include <stdio.h>


void set_int_to_zero(int *x)
{
    *x = 0;
}


void main()
{
    int x = 5;
    printf("x before call: %d\n", x);

    set_int_to_zero(&x);

    printf("x after call:  %d\n", x);
}