// POINTER DEREFERENCING

#include <stdio.h>

void main(){
    int int_var = 10;

    int *int_var_ptr = &int_var;

    int dereferenced_value = *int_var_ptr;

    printf("int_var: %d\n", int_var); 
    printf("int_var_ptr: %p\n", int_var_ptr);
    printf("dereferenced_value: %d\n", dereferenced_value); 
    printf("*int_var_ptr: %d\n", *int_var_ptr);


}