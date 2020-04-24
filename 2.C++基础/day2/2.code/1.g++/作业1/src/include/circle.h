#pragma once
#include "point.h"

class circle:Point
{
private:
    Point center;
    double radius;

public:
    void set_center();
    void set_radius(void);
    bool intersection(circle c1);
};