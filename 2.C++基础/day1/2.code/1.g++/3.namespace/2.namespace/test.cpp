#include <iostream>
using namespace std;
 
namespace namespaceA
{
    int a=10;
}

namespace namespaceB
{
    int a=20;
    namespace namespaceC
    {
        struct Teacher
        {
        char name[10];
        int age;
        };
    }
}
int main()
{
    using namespace namespaceA;
    cout<<a<<endl;
    using namespace namespaceB;
    cout<<namespaceB::a<<endl;

    namespaceB::namespaceC::Teacher t1={"YBX", 20};
    printf("t1.name = %s\n", t1.name);
    printf("t1.age = %d\n", t1.age);

    return 0;
}