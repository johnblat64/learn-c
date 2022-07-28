// CASTING
#include <stdio.h>

void main(){

    int int_var = 50;
    char char_var = 5;
    float float_var = 5.5f;

    // implicit casting
    int_var = char_var;
    char_var = int_var;

    // explicit casting
    float_var = (float)char_var;
    int_var = (int)float_var;
    char_var = (char)int_var;

    // example
    int another_int_var = (int)5.76f;

    printf("another_int_var: %d\n", another_int_var);
}