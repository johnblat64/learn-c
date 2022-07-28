// formatting printf output
// limits

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    char max_char = CHAR_MAX;
    int max_int = INT_MAX;
    float max_float = FLT_MAX;
    double max_double = DBL_MAX;

    printf("max char value: %c\n", max_char);
    printf("max int value: %d\n", max_int);
    printf("max float value: %f\n", max_float);
    printf("max double value: %g\n", max_double);


    printf("max int: %d, and max char: %c \n", max_int, max_char);

    
}