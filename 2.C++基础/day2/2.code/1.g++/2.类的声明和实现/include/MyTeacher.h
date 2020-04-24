#pragma once //就编译一次
#include <string.h>
/**
上面的与下面等价
#ifndef __MYTEACHER_H__
#define __MYTEACHER_H__
#endif
*/
class MyTeacher
{
private:
    int age;
    char name[20];

public:
    MyTeacher(void);
    ~MyTeacher(void);
    int get_age();
    void set_age(int val);
    char* get_name();
    void set_name(char *name_val);
};