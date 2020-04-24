#include <stdio.h>

//define 不存在作用域检查
void fun1()
{
    #define a 10
}

void fun2()
{
    printf("a = %d\n", a);  
    //原因是在编译的时候这里就变成了
    //printf("a = %d\n", 10); 
}

int main()
{
    fun1();
    fun2();

    return 0;
}