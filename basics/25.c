// POINTER TYPES

#include <stdio.h>

void main(){
    // variables
    int int_var = 10;
    char char_var = 5;
    float float_var = 5.7f;

    // pointer with data type information
    int *int_var_ptr = &int_var;
    char *char_var_ptr = &char_var;
    float *float_var_ptr = &float_var;

    // pointer without data type information
    void *int_var_void_ptr = &int_var;
    void *char_var_void_ptr = &char_var;
    void *float_var_void_ptr = &float_var;

    printf("int_var_ptr: %p\n", (void *)int_var_ptr);
    printf("char_var_ptr: %p\n", (void *)char_var_ptr);
    printf("float_var_ptr: %p\n", (void *)float_var_ptr);

    printf("\nint_var_void_ptr: %p\n", int_var_void_ptr);
    printf("char_var_void_ptr: %p\n", char_var_void_ptr);
    printf("float_var_void_ptr: %p\n", float_var_void_ptr);


}