#include<stdio.h>
#include<conio.h>

int Find_Quotient(int,int);
int Find_Remainder(int,int);

int main()
{
    int No1=0,No2=0,Res=0,Temp=0;

    printf("\nEnter two numbers to find Quotient and Remainder of them : ");
    scanf("%d%d",&No1,&No2);

    Res=Find_Quotient(No1,No2);
    Temp=Find_Remainder(No1,No2);

    printf("\nQuotient of given Numbers is %d.",Res);
    printf("\nRemainder of given Numbers is %d.",Temp);

    getche();
    return 0;
}

int Find_Quotient(int N1,int N2)
{
    return N1/N2;
}

int Find_Remainder(int N1,int N2)
{
    return N1%N2;
}
