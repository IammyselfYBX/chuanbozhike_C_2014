/*C++中所有的变量和函数都必须有类型
C 语言中的默认类型在 C++中是不合法的
函数 f 的返回值是什么类型，参数又是什么类型？
函数 g 可以接受多少个参数？
*/
//更换成.cpp 试试
#include <stdio.h>

f(i)
{
    printf("i = %d\n", i);
}

g()
{
    return 5;
}
int main(int argc, char *argv[])
{
    f(10);
    printf("g() = %d\n", g(1, 2, 3, 4, 5));
    getchar();

    return 0;
}