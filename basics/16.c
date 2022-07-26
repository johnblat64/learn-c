// PREPROCESSOR INTRODUCTION

#include <stdio.h>

#define MACRO_1 5

#define MACRO_2 (5 < 7)

#define MACRO_3 "hello\n"


int main(){
    int x = MACRO_1;
    int a = MACRO_2;

    printf("x = %d\n", x);
    printf("a = %d\n", a);
    printf(MACRO_3);
}