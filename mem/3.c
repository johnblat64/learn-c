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


typedef struct burp_t {
    char char_var;
    int int_var;
} burp_t;


int main(){

    size_t foo_size = sizeof(foo_t);
    size_t bar_size = sizeof(bar_t);
    size_t burp_size = sizeof(burp_t);

    printf("foo size: %ld \n", foo_size);
    printf("bar_size: %ld \n", bar_size);
    printf("burp_size: %ld \n", burp_size);


    foo_t foo = {0};
    bar_t bar = {0};
    burp_t burp = {0};
    

    printf("&foo.int_var: %p\n", &foo.int_var);
    printf("&foo.long_var: %p\n", &foo.long_var);
    printf("&foo.int_var2: %p\n", &foo.int_var2);

    printf("\n");

    printf("&bar.long_var: %p\n", &bar.long_var);
    printf("&bar.int_var: %p\n", &bar.int_var);
    printf("&bar.int_var2: %p\n", &bar.int_var2);

    printf("\n");

    printf("&burp.char_var: %p\n", &burp.char_var);
    printf("&burp.int_var: %p\n", &burp.int_var);


    // what it looks like

    // 0 = padding

    // foo:  aaaa0000bbbbbbbbcccc
    // bar:  aaaaaaaabbbbcccc
    // burp: a000bbbb



}