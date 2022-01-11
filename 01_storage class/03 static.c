#include<stdio.h>
#include<conio.h>

void fun()
{
    static int i = 100;

    printf("\n\n value of i is %d\n ",i);
    i *= 2;
}

int main()
{
    printf("\n Enter any key to go!!!!");

    fun();

    getch();

    fun();

    getch();

    fun();

    return 0;

}
