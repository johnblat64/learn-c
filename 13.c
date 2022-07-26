// malloc and pointer arithmetic

#include <malloc.h>

void main(){

    // allocating memory to be used by a pointer

    const size_t number_of_floats_to_allocate = 10;
    const size_t number_of_floats = number_of_floats_to_allocate;

    const size_t size_of_float_type_in_bytes = sizeof(float);

    size_t number_of_bytes_to_allocate = number_of_floats_to_allocate * size_of_float_type_in_bytes;

    float *ptr_to_floats;

    ptr_to_floats = malloc(number_of_bytes_to_allocate);

    // Setting values by pointer arithmetic
    // really, its saying:
    // "set value at the memory address 'ptr_to_floats' + offset as the size of a float"
    // so if ptr_to_floats is 0x0000010
    // then ptr_to_floats + 1 is 0x0000014

    *(ptr_to_floats + 0) = 0.0f;
    *(ptr_to_floats + 1) = 1.0f;
    *(ptr_to_floats + 2) = 2.0f;
    *(ptr_to_floats + 3) = 3.0f;
    *(ptr_to_floats + 4) = 4.0f;
    *(ptr_to_floats + 5) = 5.0f;
    *(ptr_to_floats + 6) = 6.0f;
    *(ptr_to_floats + 7) = 7.0f;
    *(ptr_to_floats + 8) = 8.0f;
    *(ptr_to_floats + 9) = 9.0f;

    // accessing values with pointer arithmetic

    float first_val = *ptr_to_floats;

    float second_val = *(ptr_to_floats + 1);

    float third_val = *(ptr_to_floats + 2);

    // accessing values as if they were an array

    float first_val_accessed_like_array = ptr_to_floats[0];

    float second_val_accessed_like_array = ptr_to_floats[1];

    float third_val_accessed_like_array = ptr_to_floats[2];

    // accessing array like pointer arithmetic

    float array_of_floats[10];

    *(array_of_floats + 0) = 0.0f;
    *(array_of_floats + 1) = 10.0f;
    *(array_of_floats + 2) = 20.0f;


    float first_val_accessed_by_address = *(array_of_floats + 0);

    float second_val_accessed_by_address = *(array_of_floats + 1);

    float third_val_accessed_by_address = *(array_of_floats + 2);

}