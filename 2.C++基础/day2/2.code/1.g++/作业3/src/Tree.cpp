#include "Tree.h"

int Tree::get_ages()
{
    return ages;
}

void Tree::set_ages(int age)
{
    ages=age;
}

void Tree::grow(int years)
{
    ages = years+ages;
}