// boolean operators

#include <stdio.h>

void main(){
    // 0 = false;
    // 1 = true;

    int is_greater = 6 > 10;
    int is_less_than = 6 < 10;
    int is_equal = 6 == 10;
    int is_not_equal = 6 != 10;

    printf("is_greater: %d\n", is_greater);
    printf("is_less_than: %d\n", is_less_than);
    printf("is_equal: %d\n", is_equal);
    printf("is_not_equal: %d\n", is_not_equal);

    int is_greater_AND_is_less_than = is_greater && is_less_than;

    int is_greater_OR_is_less_than = is_greater || is_less_than;
    
    int NOT_is_greater_AND_NOT_is_less_than = !is_greater && !is_less_than;

}