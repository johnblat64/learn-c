// MULTI DIMENSIONAL ARRAY MEMORY LAYOUT

#include <stdio.h>

#define NUM_ROWS 3
#define NUM_COLS 4

void main(){
    int array2d[NUM_ROWS][NUM_COLS] = {
        {10,20,30,40},
        {11,21,31,41},
        {12,22,32,42}
    };

    int *array_ptr = &array2d[0][0];

    int value_at_idx_7 = array_ptr[7];

    printf("value_at_idx_7 = %d\n", value_at_idx_7);



    int total_num_elements = NUM_ROWS * NUM_COLS;

    for(int i = 0; i < total_num_elements; i++)
    {
        printf("array_ptr[%d] = %d\n", i, array_ptr[i]);
    }

    // MORAL OF THE STORY:
    /**
     * Although it appears to be
     * 
     *    X X X X
     *    X X X X
     *    X X X X 
     * 
     * 
     * It isactually laid out in memory like
     *    X X X X X X X X X X X X 
     * 
     *    ^       ^       ^
     *    
     */

}