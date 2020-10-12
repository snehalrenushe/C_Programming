#include<stdio.h>
#include<conio.h>

int main()

{
    int Cnt=0,No1=0,No2=1,No3=0;

    printf("\nEnter a count for Fibonacci Series : ");
    scanf("%d",&Cnt);

    printf("\n***************************************************OUTPUT********************************************************\n");

    printf("\n\t\t\t\t Fibonacci Series for Expected Range : ");

    while(Cnt>=1)
    {
        printf(" %d",No3);
        No1 = No2;
        No2 = No3;
        No3 = No1+No2;

        Cnt--;
    }

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t ***Thank You*** \n\t\t\t\t   I Hope u are Satisfying with my program !!\n\n\n\n\n");

    getch();
    return 0;
}
