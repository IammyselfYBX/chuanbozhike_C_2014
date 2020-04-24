#include <stdio.h>

int main()
{
    int a=10, b=20;
    //用C语言实现C++的效果
    *(a>b? &a:&b)=30;
    printf("a = %d, b = %d\n", a, b);

    return 0;
}