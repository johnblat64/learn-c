// POINTER AND ARRAYS

#include <stdio.h>

void main(){
    printf("\n-----\n");
    printf("INTEGER POINTER EXAMPLE\n");
    printf("-----\n\n");

    int int_array[5] = {10,20,30,40,50};
    
    int *int_ptr_0 = &int_array[0];

    printf("array[0]: %d\n", int_array[0]);
    printf("&array[0]: %p\n", (void *) &int_array[0]);
    printf("int_ptr_0: %p\n", (void *) int_ptr_0);

    // arrays are contiguous blocks of memory
    // if we get a pointer to the first element, we can "shift"
    // the pointer to get addresses of the other elements in the array

    int *int_ptr_1 = int_ptr_0 + 1;

    printf("int_ptr_1: %p\n", (void *)int_ptr_1);
    printf("*int_ptr_1: %d\n", *int_ptr_1);

    int *int_ptr_3 = int_ptr_0 + 3;
    //
    printf("int_ptr_3: %p\n", (void *)int_ptr_3);
    printf("*int_ptr_3: %d\n", *int_ptr_3);



    //
    // LONGS
    //

    printf("\n-----\n");
    printf("LONG POINTER EXAMPLE\n");
    printf("-----\n\n");

    long long_array[5] = {10,20,30,40,50};
    
    long *long_ptr_0 = &long_array[0];

    printf("long_array[0]: %ld\n", long_array[0]);
    printf("&long_array[0]: %p\n", (void *) &long_array[0]);
    printf("long_ptr_0: %p\n", (void *) long_ptr_0);


    long *long_ptr_1 = long_ptr_0 + 1;

    printf("long_ptr_1: %p\n", (void *)long_ptr_1);
    printf("*long_ptr_1: %ld\n", *long_ptr_1);

    long *long_ptr_3 = long_ptr_0 + 3;
    //
    printf("long_ptr_3: %p\n", (void *)long_ptr_3);
    printf("*long_ptr_3: %ld\n", *long_ptr_3);


    // SYNTAX SHORTCUTS
    int *int_array_ptr = int_array;
    // same as:
    // int *int_array_ptr  = &int_array[0];
    // 

    // LOOP EXAMPLE

    printf("\n");
    printf("Dereferencing ptr with ptr arithmetic...\n");
    printf("----\n");

    for(int i = 0; i < 5; i++){
        int dereferenced_value = *(int_array_ptr + i);
        int *address = int_array_ptr + 1;

        printf("\n");
        printf("*(int_array_ptr + %d): %d\n", i, dereferenced_value);
        printf("int_array_ptr + %d : %p\n", i, address);
    }
    
    printf("\n");
    printf("Dereferencing ptr like array...\n");
    printf("----\n");

    for(int i = 0; i < 5; i++){
        int dereferenced_value = int_array_ptr[i];

        printf("\n");
        printf("int_array_ptr[%d]: %d\n", i, dereferenced_value);
    }


}