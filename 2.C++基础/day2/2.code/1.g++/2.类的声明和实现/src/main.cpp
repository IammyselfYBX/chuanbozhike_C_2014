#include "MyTeacher.h"
#include <iostream>
using namespace std;

int main()
{
    MyTeacher t1;
    t1.set_age(100);
    int age = t1.get_age();
    t1.set_name((char* )"YBX");
    string name = t1.get_name();
    cout<<"T1 age: "<<age<<endl;
    cout<<"T1 name: "<<name<<endl;

    return 0;
}
