// SIZEOF

#include <stdio.h>

void main(){
    // sizeof on types
    
    int char_size_in_bytes = sizeof(char);
    int short_size_in_bytes = sizeof(short);
    int int_size_in_bytes = sizeof(int);
    int long_size_in_bytes = sizeof(long);
    
    printf("char_size_in_bytes: %d\n", char_size_in_bytes);
    printf("short_size_in_bytes: %d\n", short_size_in_bytes);
    printf("int_size_in_bytes :%d\n", int_size_in_bytes);
    printf("long_size_in_bytes :%d\n\n", long_size_in_bytes);

    
    // sizeof on variables

    char char_var = 1;
    short short_var = 2;
    int int_var = 5;
    long long_var = 10;

    int char_var_size_in_bytes = sizeof char_var;
    int short_var_size_in_bytes = sizeof short_var;
    int int_var_size_in_bytes = sizeof int_var;
    int long_var_size_in_bytes = sizeof long_var;

    printf("char_var_size_in_bytes: %d\n", char_var_size_in_bytes);
    printf("short_var_size_in_bytes: %d\n", short_var_size_in_bytes);
    printf("int_var_size_in_bytes :%d\n", int_var_size_in_bytes);
    printf("long_var_size_in_bytes :%d\n", long_var_size_in_bytes);


}