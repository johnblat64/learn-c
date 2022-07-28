// FUCNTION LIKE MACROS
#include <stdio.h>

#define MIN(a, b)(a < b ? a : b)
#define MAX(a, b)(a > b ? a : b)


int main(){
    double x = 64.0f;
    double y = 102.0f;

    double smallest_value = MIN(x, y);

    printf("smallest_value: %f\n", smallest_value);
}