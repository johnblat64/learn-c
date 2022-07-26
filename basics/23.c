// PASSING ARRAYS TO FUNCTIONS

#include <stdio.h>

void print_array_elements(int *array, int array_length)
{
    printf("\n");

    for(int i = 0; i < array_length; i++)
    {
        printf("array[%d]: %d\n", i, array[i]);
    }

    printf("\n");
}


void square_all_elements(int *in_array, int *out_array, int array_length)
{
    for(int i = 0; i < array_length; i++)
    {
        out_array[i] = in_array[i] * in_array[i];
    }
}


void main()
{

}