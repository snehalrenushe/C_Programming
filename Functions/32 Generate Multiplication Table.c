#include<stdio.h>
#include<conio.h>

int Table(int);

int main()
{
    int No=0;

    printf("\nEnter any Positive Number : ");
    scanf("%d",&No);

    Table(No);

    printf("\nMultiplication Table of %d is : \n ",No);

    getch();
    return 0;
}
int Table(int i)
{
    int Num=0;

    for(Num=1;Num<=10;Num++)
    {
        printf("\n%d * %d = %d",i,Num,Num*i);
    }

    return Num*i;
}
