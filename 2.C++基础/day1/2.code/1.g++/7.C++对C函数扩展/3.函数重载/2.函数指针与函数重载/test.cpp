#include <stdio.h>
#include <string.h>

int func(int x) // int(int a)
{
    return x;
}
int func(int a, int b)
{
    return a + b;
}
int func(const char* s)
{
    return strlen(s);
}
typedef int(*PFUNC)(int a); // int(int a)

int main()
{
    PFUNC p = func;
    int c = p(1);
    printf("c = %d\n", c);
    
    return 0;
}