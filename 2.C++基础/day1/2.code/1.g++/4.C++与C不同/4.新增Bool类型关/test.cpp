/*C++中的布尔类型
    C++在 C 语言的基本类型系统之上增加了 bool
    C++中的 bool 可取的值只有 true 和 false
    理论上 bool 只占用一个字节，
    如果多个 bool 变量定义在一起，可能会各占一个 bit，这取决于编译器的实现
    true 代表真值，编译器内部用 1 来表示
    false 代表非真值，编译器内部用 0 来表示
    bool 类型只有 true（非 0）和 false（0）两个值
    C++编译器会在赋值时将非 0 值转换为 true，0 值转换为 false 
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int a;
    bool b = true;
    printf("b = %d, sizeof(b) = %d\n", b, sizeof(b));
    b = 4;
    a = b;
    printf("a = %d, b = %d\n", a, b);
    b = -4;
    a = b;
    printf("a = %d, b = %d\n", a, b);
    a = 10;
    b = a;
    printf("a = %d, b = %d\n", a, b);
    b = 0;
    printf("b = %d\n", b);

    return 0;
}