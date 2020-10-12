#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,Dig=0,Rev=0,Temp=0;

    printf("\nEnter a number to check whether palindrome or not : ");
    scanf("%d",&i);

    for(Temp = i ; Temp != 0 ; Temp=Temp/10)

    {
        Dig = Temp % 10;
        Rev = (Rev*10) + Dig;
    }

    printf("\n***************************************************OUTPUT********************************************************\n");

    if(i == Rev)

    {
        printf("\n\t\t Entered Number is equal to its Reverse . Therefore , Given Number is palindrome :",i);
    }

    else

    {
        printf("\n\t\t Entered Number is not equal to its Reverse . Therefore , Given Number is not palindrome:",i);
    }

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t ***Thank You*** \n\t\t\t\t   I Hope u are Satisfying with my program !!\n\n\n\n\n");

    getch();
    return 0;
}
