// ARRAYS INTRO

#include <stdio.h>

// what if we want to print arrays of any size???

void print_array_10(int array[10])
{
    printf("\n-------------------------\n");
    
    for(int i = 0; i < 10; i++)
    {
        printf("array[%d]: %d\n", i, array[i]);
    }

    printf("------------------------\n");
}



void main(){
    // initialize array with data
    int array_initialized[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int array_uninitialized[10];

    print_array_10(array_initialized);
    print_array_10(array_uninitialized);

    int array_zeroed_out[10] = {0};
    print_array_10(array_zeroed_out);

    int array_initialized_with_100[10] = {100};
    print_array_10(array_initialized_with_100);

    
    // automatic length detection initialization
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // sizeof array
    printf("sizeof array: %ld\n", sizeof array);


    // array access

    //get
    int val_at_5 = array[5];

    //set
    array[2] = 10000;
    
    print_array_10(array);
    

}