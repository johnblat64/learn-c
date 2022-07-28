// MULTI DIMENSIONAL ARRAY

#include <stdio.h>

#define NUM_ROWS 3
#define NUM_COLS 4

void main(){
    int array2d[NUM_ROWS][NUM_COLS] = {
        {10,20,30,40},
        {11,21,31,41},
        {12,22,32,42}
    };


    for(int row = 0; row < NUM_ROWS; row++)
    {
        for(int col = 0; col < NUM_COLS; col++)
        {
            int item = array2d[row][col];

            printf("[%d][%d] = %d, ", row, col, item);
        }
        printf("\n");
    }
}