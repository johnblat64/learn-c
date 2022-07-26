// MACROS - DEFINING IN COMPILER

#include <stdio.h>

// gcc 17.c -DSOME_MACRO=5 -o bin/17

int main(){
    int x = SOME_MACRO;

    printf("x = %d\n", x);
}