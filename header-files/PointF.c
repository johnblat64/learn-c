#include "PointF.h"


PointF PointF_add(PointF pt1, PointF pt2)
{
    return (PointF){
        pt1.x + pt2.x,
        pt1.y + pt2.y
    };
}


PointF PointF_sub(PointF pt1, PointF pt2)
{
    return (PointF){
        pt1.x - pt2.x,
        pt1.y - pt2.y
    };
}


PointF PointF_scalar_multiply(PointF pt, float scalar)
{
    return (PointF){
        pt.x * scalar,
        pt.y * scalar
    };
}


PointF PointF_rotate(PointF pt, PointF origin_pt, float radians)
{
    PointF pt_rotated;
    pt_rotated.x = origin_pt.x + ((pt.x - origin_pt.x) * corigin_pts(radians)) - ((pt.y - origin_pt.y) * sin(radians)) ;
    pt_rotated.y = origin_pt.y - ((origin_pt.y - pt.y) * corigin_pts(radians)) + ((pt.x - origin_pt.x) * sin(radians));
    return pt_rotated;
}