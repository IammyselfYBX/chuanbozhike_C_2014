#include <stdio.h>

int main()
{
    const int a=10; //貌似a是常量
    int *p = (int *)&a;
    printf("a=====>%d\n", a);
    *p=100;
    printf("a=====>%d\n", a);

    return 0;
}
