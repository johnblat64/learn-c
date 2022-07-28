// LOGICAL MULTI DIMENSIONAL ARRAY

#include <stdio.h>

int array2d_access(int *array, int row, int col, int num_cols)
{
    int index = (row * num_cols) + col;
    int value = array[index];
    return value;
}

void array2d_set(int *array, int row, int col, int num_cols, int value)
{
    int index = (row * num_cols) + col;
    array[index] = value;
}


#define NUM_ROWS 3
#define NUM_COLS 4

int main()
{   
    // 3 * 4 = 12
    int array2d[NUM_ROWS * NUM_COLS] = {0};




    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            int value = (row * 10) + col;
            array2d_set(array2d, row, col, 4, value);
        }
    }




    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            int value = array2d_access(array2d, row, col, 4);
            printf("(row = %d, col = %d) = %d\n", row, col, value);
        }
    }


}