#include "MyTeacher.h"
#include <string.h>

MyTeacher::MyTeacher(void)
{

}

MyTeacher::~MyTeacher(void)
{

}

int MyTeacher::get_age(){
    return age;
}
void MyTeacher::set_age(int val){
    age=val;
}

char* MyTeacher::get_name(){
    return name;
}

void MyTeacher::set_name(char *name_val){
    strcpy(name,name_val);
}
