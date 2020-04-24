#include <stdio.h>
struct Student
{
public:
    char name[100];
//private:
    int age;
};

int main(int argc, char *argv[])
{
    Student s1 = {"wang", 1};
    Student s2 = {"wang2", 2};
    
    printf("%s,%d\n",s1.name, s1.age);
    printf("%s,%d\n",s2.name, s2.age);

    return 0;
}