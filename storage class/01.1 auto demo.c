#include<stdio.h>

void gun()
{
    auto int no = 10;

    register float fvalue = 20.3;

    printf("\nValue of f is %f",fvalue);
}

int main()
{
    printf("Inside main");

    gun();

    return 0;
}
