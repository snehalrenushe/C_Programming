#include<stdio.h>
#include<conio.h>

int main()

{
    int No=0,Temp=0,Fact=1;

    printf("\nEnter any number to print its Factorial : ");
    scanf("%d",&No);

    for(Temp = No ;  Temp > 1 ; Temp--)
    {
        Fact = Fact * Temp;
    }

    printf("\n***************************************************OUTPUT********************************************************\n");

    printf("\n\t\t\t\t  Factorial of given number %d is = %d",No,Fact);

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t ***Thank You*** \n\t\t\t\t   I Hope u are Satisfying with my program !!\n\n\n\n\n");

    getch();
    return 0;
}
