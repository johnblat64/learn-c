// calloc

#include <malloc.h>
#include <stdio.h>


int main(){
    size_t size_of_int = sizeof(int);
    size_t number_of_ints_to_allocate = 5;

    int *ints_ptr = calloc(number_of_ints_to_allocate, size_of_int);


    for(int i = 0; i < number_of_ints_to_allocate; i++)
    {
        printf("ints_ptr[%d]: %d\n", i, ints_ptr[i]);
    }

    return 0;
}