// out of bounds arrays

#include <stdio.h>

int main(){

    int array_of_ints[10] = {1,2,3,4,5,6,7,8,9,10};
    int array_of_ints2[10] = {100,200,300,400,500,600,700,800,900,1000};

    int val_at_15 = array_of_ints[15];

    printf("%d\n", val_at_15);

    return 0;
}