#include<stdio.h>

void fun()
{
    auto int i = 10;
    int j = 20;

    //register auto int j = 20;

    int ret = 0;

    ret = i + j;

    return ret;
}

int main()
{
    printf("\nInside main");

    fun();

    return 0;
}
