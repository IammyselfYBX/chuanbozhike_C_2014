#include "Tree.h"
#include <iostream>
using namespace std;

int main()
{
    Tree t1;
    t1.set_ages(100);
    t1.grow(20);
    int tmp = t1.get_ages();
    cout<<"The tree ages"<<tmp<<endl;

    return 0;
}