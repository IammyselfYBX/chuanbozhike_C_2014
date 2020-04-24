#include <iostream>
using namespace std;

const double PI=3.1415926;

class MyCircle
{
private:
    double r;
    double area;

public:
    void setR(double R){
        r = R;
    }
    double getR(){
        return r;
    }

    double getArea(){
        return PI*r*r;
    }
};

int main()
{
    MyCircle c1;
    double R=0;
    cout<<"Please input R: ";
    cin>>R;
    c1.setR(R);

    cout<<"The r is "<< c1.getR()<<endl;
    cout<<"The area is "<<c1.getArea()<<endl;



    return 0;
}