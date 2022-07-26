// floating point number types
#include <stdio.h>

void main(){
    //
    // FLOAT
    //
    // size = 4 bytes
    // range = 1.2E-38 to 3.4E+38
    float float_var = 5.6792;

    //
    // DOUBLE
    //
    // size = 8 bytes
    // range = 2.3E-308 to 1.7E+308
    double double_var = 8.67923453;

    //
    // LONG DOUBLE
    //
    // size = 10 bytes
    // range = 3.4E-4932 to 1.1E+4932
    long double long_double_var = 3.6792234234234;

    printf("float_var: %f\n", float_var);

    printf("double_var: %e\n", double_var);

    printf("long_double_var: %Le\n", long_double_var);

}