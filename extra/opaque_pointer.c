#include "opaque_pointer.h"
#include <malloc.h>

struct Point {
    float x, y;
};

Point *Point_init(float x, float y)
{
    Point *p = malloc(sizeof(Point));
    p->x = x;
    p->y = y;

    return p;
}

Point *Point_free(Point *p)
{
    free(p);
    p = NULL;
    return p;
}