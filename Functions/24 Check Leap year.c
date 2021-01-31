#include<stdio.h>
#include<conio.h>

int check_leap_year(int);

int main()
{
    int i=0,Res=0;

    printf("\n Enter any Year to check it is leap or not .");
    scanf("%d",&i);

    if(check_leap_year(i))
    {
        printf("\n Given Year is a leap Year.",i);
    }
    else
    {
        printf("\n Given Year is not leap Year.",i);
    }
    getch();
    return 0;
}
int check_leap_year(int Y)
{
    if(Y%4==0)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}
