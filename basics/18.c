// POINTER INTRO

#include <stdio.h>

void main(){
    int a = 10;

    /**
     * 
     *    memory: ***********a*****
     *                       ^ ptr_to_a 
     */

    int *ptr_to_a = &a;

    printf("ptr_to_a: %p\n", (void *)ptr_to_a);
}