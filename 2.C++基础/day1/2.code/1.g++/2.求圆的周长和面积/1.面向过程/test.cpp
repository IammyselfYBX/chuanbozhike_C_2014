#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

int main()
{
    double r = 0;
    double s = 0;
    cout<<"请输入圆形的半径: ";
    cin>>r;
    cout<<"r="<<r<<endl;
    cout<<"S="<<PI*r*r<<endl;

    return 0;
}