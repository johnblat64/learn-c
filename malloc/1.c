// MALLOC INTRO

#include <malloc.h>
#include <stdio.h>


int main(){
    // Earlier we were initalizing pointers like this:
    int some_int = 5;
    int *int_ptr = &some_int;

    // What if we want to allocate memory before setting the values contained in the pointers?

    // can use malloc, a std lib function to get the operating system to dynamically allocate the program memory


    size_t int_size = sizeof(int);

    // malloc takes in the size in bytes of the memory to allocate

    int *ptr = malloc(int_size);

    *ptr = 5;

    printf("ptr address:    %p\n", ptr);
    printf("ptr dereferece: %d\n", *ptr);



    int *ptr2;

    //*ptr2 = 10;
}