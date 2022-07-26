// pointer basics

#include <stdio.h>

int main(){
    int a = 5;

    int *ptr_a = &a;

    printf("ptr_a = %p \n", ptr_a);
    printf("&a = %p\n", &a);
    
    printf("a = %d\n", a);
    printf("*ptr_a = %d \n", *ptr_a);
}