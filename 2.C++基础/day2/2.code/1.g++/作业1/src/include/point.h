#pragma once
class Point{
private:
    double x;
    double y;
public:
    double get_distance();
    double get_distance(Point p1, Point p2);
    void set_coordinate(double x, double y);
};