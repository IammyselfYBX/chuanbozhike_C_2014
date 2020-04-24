#include <stdio.h>

//const 存在作用域检查
void fun1()
{
    const int b=10;
}

void fun2()
{
    //int b;
    printf("b = %d\n", b);
}

int main()
{
    fun1();
    fun2();

    return 0;
}