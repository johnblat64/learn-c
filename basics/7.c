// floating point number types

#include <stdio.h>

void main(){
    //
    // FLOAT
    //
    // size = 4 bytes
    // range = 1.2E-38 to 3.4E+38
    // precision = 6 decimal digits 
    float float_var = 5.673492;

    //
    // DOUBLE
    //
    // size = 8 bytes
    // range = 2.3E-308 to 1.7E+308
    // precision = 15 decimal digits 

    double double_var = 7.67923453;

    //
    // LONG DOUBLE
    //
    // size = 10 bytes
    // range = 3.4E-4932 to 1.1E+4932
    // precision = 19 decimal digits 

    long double long_double_var = 9.6792234234234;

    printf("float_var: %f\n", float_var);

    printf("double_var: %e\n", double_var);

    printf("long_double_var: %Le\n", long_double_var);

}