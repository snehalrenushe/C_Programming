#include<stdio.h>
#include<conio.h>

int main()

{
    int No=0,binary_No=0,decimal_No=0,base=1,Temp=0;

    printf("Enter a decimal number : ");
    scanf("%d",&No);

    decimal_No=No;

    while(No>0)
    {
        Temp=No%2;
        binary_No=binary_No+Temp*base;
        No=No/2;
        base=base*10;
    }

    printf("\n***************************************************OUTPUT********************************************************\n");

    printf("\n\t\t\t\t\t Its Binary equivalent is = %d \n",binary_No);

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t   Thank You !!!!!\n \t\t\t\tSuccessfully Found your Binary Equivalent Number ...    \n\n\n\n\n\n\n");

    getch();
    return 0;

}
