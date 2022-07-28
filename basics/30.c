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


void square_all_elements(int *array, int array_length)
{
    for(int i = 0; i < array_length; i++)
    {
        array[i] = array[i] * array[i];
    }
}


void main()
{

    int array[7] = {10,20,30,40,50,60,70};

    print_array_elements(array, 7);


    square_all_elements(array, 7);

    print_array_elements(array, 7);
}