// FREE


#include <malloc.h>
#include <stdio.h>


typedef struct PointF {
    float x, y;
} PointF;



int main()
{
    PointF *ptf_array = malloc(sizeof(PointF) * 10);

    // do some stuff

    // don't need it no more



    free(ptf_array);

    ptf_array = NULL;

    
}