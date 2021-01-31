#include<stdio.h>
#include<conio.h>

int fun();

int main()
{
    int cnt=0;

    printf("\nWelcome.......we are in main function");
    getch();

    cnt=fun();

    printf("\nBack to main() \t         No of calls to Fun are :%d",cnt);

    getch();
    return 0;

}

int fun()

{
    static int i=0;
    i++;

    printf("\nInside fun() function\t call No=%d",i);

    getch();

    if(i<=5)
    {
       fun();
    }
    return;
}
