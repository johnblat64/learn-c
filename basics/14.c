// FUNCTIONS

#include <stdio.h>

int sum(int a, int b){
    int result = a + b;
    return result;
}

void print_number(int a){
    printf("%d\n", a);
}

void print_newline(){
    printf("\n");
}


void main(){
    int sum_result = sum(5, 10);
    print_number(sum_result);
    print_newline();
}