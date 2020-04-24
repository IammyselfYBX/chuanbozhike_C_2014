#include "circle.h"
#include <iostream>

using namespace std;

int main()
{
    circle c1, c2;
    cout<<"set c1"<<endl;
    c1.set_center();
    c1.set_radius();
    cout<<"set c2"<<endl;
    c2.set_center();
    c2.set_radius();
    if(c1.intersection(c2)){
        cout<<"intersection"<<endl;
    }else
    {
        cout<<"Not intersection"<<endl;
    }
    
    return 0;
}