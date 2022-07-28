#pragma once


typedef struct PointF {
    float x, y;
} PointF;


PointF PointF_add(PointF pt1, PointF pt2);
PointF PointF_sub(PointF pt1, PointF pt2);
PointF PointF_scalar_multiply(PointF pt, float scalar);
PointF PointF_rotate(PointF pt, PointF origin_pt, float radians);