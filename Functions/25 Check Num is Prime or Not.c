#include<stdio.h>
#include<conio.h>

int Prime(int);

int main()
{
    int No=0,Res=0;

    printf("\n Enter any Number to check it is Prime or Not => ");
    scanf("%d",&No);

    if(Prime(No))
    {
        printf("\n Given number is Prime Number.",No);
    }
    else
    {
        printf("\n Given number is not Prime Number.",No);
    }

    getch();
    return 0;
}

int Prime(int i)
{
    if(i%2==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
