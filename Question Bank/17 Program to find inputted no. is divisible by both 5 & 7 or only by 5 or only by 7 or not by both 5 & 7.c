#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0;

    printf("\nEnter any Number:");
    scanf("%d",&i);

    if(i==0)
    {
        printf("\nINVALID INPUT:");
        goto down;
    }

    if((i%5==0) && (i%7==0))
    {
        printf("\n%d is divisible by both 5 and 7.");
    }

    else if(i%5==0)
    {
        printf("\n%d is divisible by only 5.");
    }

    else if(i%7==0)
    {
        printf("\n%d is divisible by only 7.");
    }

    else
    {
        printf("\n%d is neither divisible by 5 nor 7.");
    }

    down:
    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t ***Done*** \n\t\t\t\t\t   Keep Supporting Guys !!");


    printf("\n\n***************************************************************************************************************\n");


    getch();
    return 0;
}
