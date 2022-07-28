// arrays

#include "stdio.h"

void main(){
    int i_array[] = {1,2,3,4,5};
    
    int i_array_2[5] = {1,2,3,4,5};

    int i_array_undefined[5];

    int i_array_zeroed_out[5] = {0};
    int i_array_default_valued_out[5] = {99};

    int i_array_whatever[10];

    i_array_whatever[4] = 40;

    int val_at_index_four = i_array_whatever[4];
}