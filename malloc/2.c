// MALLOC - PTR ARRAYS


#include <stdio.h>
#include <malloc.h>

void print_array_elements(int *array, int array_length)
{
    printf("\n");

    for(int i = 0; i < array_length; i++)
    {
        printf("array[%d]: %d\n", i, array[i]);
    }

    printf("\n");
}


int main()
{
    size_t array_length = 5;
    size_t int_size_in_bytes = sizeof(int);
    
    size_t total_allocation_size_in_bytes = array_length * int_size_in_bytes;
     
    int *int_ptr = malloc(total_allocation_size_in_bytes);

    *(int_ptr + 0) = 10;
    *(int_ptr + 1) = 20;
    *(int_ptr + 2) = 30;
    *(int_ptr + 3) = 40;
    *(int_ptr + 4) = 50;


    int_ptr[0] = 10;
    int_ptr[1] = 20;
    int_ptr[2] = 30;
    int_ptr[3] = 40;
    int_ptr[4] = 50;


    print_array_elements(int_ptr, array_length);

}