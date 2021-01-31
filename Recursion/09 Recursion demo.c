#include<stdio.h>
#include<conio.h>

void fun();

int main()
{
    printf("\nHello.....");
    getch();

    fun();

    getch();
    return 0;

}

void fun()

{
    int i=0;

    i++;

    printf("\nfun() function call No : %d",i);
    getch();

    fun();

}
