// realloc

#include <malloc.h>
#include <stdio.h>


int main(){
    size_t size_of_int = sizeof(int);
    size_t number_of_ints_to_allocate = 5;

    int *ints_ptr = malloc(number_of_ints_to_allocate * size_of_int);

    ints_ptr[0] = 10;
    ints_ptr[1] = 20;
    ints_ptr[2] = 30;
    ints_ptr[3] = 40;
    ints_ptr[4] = 50;


    for(int i = 0; i < number_of_ints_to_allocate; i++)
    {
        printf("(ints_ptr + %d): %p, ints_ptr[%d]: %d\n",i, (void *)(ints_ptr + i), i, ints_ptr[i]);
    }

    size_t new_number_of_ints_needed = 10;

    ints_ptr = realloc(ints_ptr, new_number_of_ints_needed * size_of_int);

    printf("\n AFTER REALLOC\n");
    
    for(int i = 0; i < new_number_of_ints_needed; i++)
    {
        printf("(ints_ptr + %d): %p, ints_ptr[%d]: %d\n",i, (void *)(ints_ptr + i), i, ints_ptr[i]);
    }

    return 0;
}