#include <stdio.h>

int main()
{
    const int a=10; 
    //C++里面a是真正的常量
    int *p = (int *)&a;
    printf("a=====>%d\n", a);
    *p=100;
    printf("a=====>%d\n", a);

    return 0;
}
