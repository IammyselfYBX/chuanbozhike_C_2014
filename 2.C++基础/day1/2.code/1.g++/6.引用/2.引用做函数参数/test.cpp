#include <iostream>
using namespace std;

struct  Teacher
{
    char name[20];
    int age;
};

void printT(Teacher *pT)
{
    cout<<"point Change"<<endl;
    cout<<pT->age<<endl;
}

void printT2(Teacher &pT)
{
    cout<<"reference Change"<<endl;
    pT.age=100;
    cout<<pT.age<<endl;
}

void printT3(Teacher pT)
{
    cout<<"function Change(No change)"<<endl;
    pT.age = 45; //只会修改pT变量 ,不会修改t1变量
    cout<<pT.age<<endl;
}

int main()
{
    Teacher t1;
    t1.age = 35;
    printT(&t1);
    printT2(t1); //pT是t1的别名
    printf("t1.age:%d \n", t1.age); //33
    printT3(t1) ;// pT是形参 ,t1 copy一份数据 给pT //---> pT = t1
    printf("t1.age:%d \n", t1.age); //35
    
    return 0;
}