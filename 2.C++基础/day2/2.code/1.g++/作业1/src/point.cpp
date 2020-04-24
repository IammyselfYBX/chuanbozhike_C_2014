#include "point.h"
#include <cmath>

double Point::get_distance()
{
    return sqrt(pow(x, 2)+pow(y, 2));
}

double Point::get_distance(Point p1, Point p2)
{
    return sqrt(pow((fabs(p1.x-p2.x)),2)+pow((fabs(p1.y-p2.y)),2));
}

void Point::set_coordinate(double x1, double y1)
{
    x = x1;
    y = y1;
}