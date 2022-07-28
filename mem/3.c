#include <stdio.h>
#include <stddef.h> 


typedef struct foo_t {
    int int_var; // 4 bytes
    long long_var; // 8 bytes
    int int_var2; // 4 bytes
} foo_t;


typedef struct bar_t {
    long long_var; // 8 bytes
    int int_var; // 4 bytes
    int int_var2; // 4 bytes
} bar_t;



int main(){

    size_t foo_size = sizeof(foo_t);
    size_t bar_size = sizeof(bar_t);

    printf("foo size: %ld \n", foo_size);
    printf("bar_size: %ld \n", bar_size);

    
    printf("&foo")

}