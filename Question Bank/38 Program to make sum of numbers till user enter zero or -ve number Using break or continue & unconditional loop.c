#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,sum=0;

    printf("\nEnter Number for addition : \n(To Stop Enter zero or -ve Number :- \n");

    while(1)
    {
        printf("\nEnter Number : ");
        scanf("%d",&i);

        if(i<=0)
        {
            break;
        }

        sum = sum + i;
    }



    printf("\n***************************************************OUTPUT********************************************************\n");

    printf("\n\t\t\t \t  \tAddition of given Numbers is %d  ",sum);

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t   Thank You !!!!!\n\t\t\t\tSuccessfully Found your Addition of given entered Numbers ...    \n\n\n\n\n\n\n");

    getch();
    return 0;

}
