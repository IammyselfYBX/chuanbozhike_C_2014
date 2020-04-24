#include "Rectangle.h"
#include <cmath>
#include <iostream>
using namespace std;

double Rectangle::get_area()
{
    double abs_x= fabs(p1.get_x()-p2.get_x());
    double abs_y= fabs(p1.get_y()-p2.get_y());

    return abs_x*abs_y;
}

void Rectangle::set_point()
{
    double x, y;
    cout<<"===>P1:"<<endl;
    cout<<"Please input coordinate X: ";
    cin>>x;
    cout<<"Please input coordinate Y: ";
    cin>>y;
    p1.set_coordinate(x, y);
    cout<<"===>P2:"<<endl;
    cout<<"Please input coordinate X: ";
    cin>>x;
    cout<<"Please input coordinate Y: ";
    cin>>y;
    p2.set_coordinate(x, y);
}