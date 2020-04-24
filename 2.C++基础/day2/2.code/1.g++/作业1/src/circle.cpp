#include "circle.h"
#include <cmath>
#include <iostream>
using namespace std;
#define DEBUG
void circle::set_radius()
{   
    double r;
    cout<<"Please input radius R: ";
    cin>>r;
    radius=r;
}

void circle::set_center()
{
    double x, y;
    cout<<"Please input coordinate X: ";
    cin>>x;
    cout<<"Please input coordinate Y: ";
    cin>>y;
    center.set_coordinate(x, y);
}

bool circle::intersection(circle c1)
{
    double c_d = get_distance(c1.center, center);
    double radius_tmp=c1.radius+radius;
#ifndef DEBUG
    cout<<"distance of circle= "<<c_d<<endl;
    cout<<"radius_tmp="<<radius_tmp<<endl;
#endif

    if(c_d<radius_tmp){
        return true;   //1
    }else
    {
        return false;   //0
    }
}