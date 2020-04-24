#include <iostream>
using namespace std;
#define CPP_TEST
#define MYFUNC(a, b) ((a) < (b) ? (a) : (b))
//上面的 宏定义 与下面的inline函数含义相同
inline int myfunc(int a, int b)
{
    return a < b ? a : b;
}


int main()
{
    int a = 1;
    int b = 3;
#ifdef C_TEST
    int c = myfunc(++a, b); 
#endif
#ifdef CPP_TEST
    int c = MYFUNC(++a, b);
#endif
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}
