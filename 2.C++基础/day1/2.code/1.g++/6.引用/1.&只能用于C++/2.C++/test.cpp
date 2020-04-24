#include <stdio.h>

int main()
{
    int a = 0;
    int &b = a; //int * const b = &a
    b = 11; //*b = 11;
    printf("a:%d b:%d\n", a, b);
    
    return 0;
}
