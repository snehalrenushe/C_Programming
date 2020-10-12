#include<stdio.h>
#include<conio.h>

int main()

{
    int No=0,binary_No=0,decimal_No=0,base=1,Temp=0;

    printf("Enter a binary number(1s and 0s) : ");
    scanf("%d",&No);

    binary_No=No;

    while(No>0)
    {
        Temp=No%10;
        decimal_No=decimal_No+Temp*base;
        No=No/10;
        base=base*2;
    }

    printf("\n***************************************************OUTPUT********************************************************\n");

    printf("\n\t\t\t\t\t Its decimal equivalent is = %d \n",decimal_No);

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t   Thank You !!!!!\n \t\t\t\tSuccessfully Found your Decimal Equivalent Number ...    \n\n\n\n\n\n\n");

    getch();
    return 0;

}
