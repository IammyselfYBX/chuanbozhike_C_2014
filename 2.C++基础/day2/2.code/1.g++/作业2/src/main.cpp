#include "Rectangle.h"
#include <iostream>
using namespace std;

int main()
{
    Rectangle r1;
    r1.set_point();
    double area = r1.get_area();
    cout<<"area: "<<area<<endl;

    return 0;
}
