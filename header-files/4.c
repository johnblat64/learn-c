#include "PointF.h"
#include <stdio.h>

// gcc 4.c PointF.c -o bin/4

int main(){
    PointF pt1 = {10.0f, 20.0f};
    PointF pt2 = {100.0f, 200.0f};

    PointF pt_add_result = PointF_add(pt1, pt2);

    printf("pt_add_result.x = %f, pt_add_result.y = %f\n", pt_add_result.x, pt_add_result.y);

    return 0;
}