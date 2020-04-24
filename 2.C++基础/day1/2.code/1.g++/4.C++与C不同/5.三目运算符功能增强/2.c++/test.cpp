#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    //返回一个最小数 并且给最小数赋值成 3
    //三目运算符是一个表达式 ，表达式不可能做左值
    (a < b ? a : b )= 30;
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}