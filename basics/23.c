// STRUCTS
// 

// look up function pointers if you want to store a function in a struct or variable

#include <stdio.h>

struct Point 
{
    float x;
    float y;
};




int main(){

    struct Point pt1;
    pt1.x = 5.0f;
    pt1.y = 10.0f;


    struct Point pt2 = {5.0f, 10.0f};

    printf("pt1.x = %f, pt.y = %f\n", pt1.x, pt2.y);

}