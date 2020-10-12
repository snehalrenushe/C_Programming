#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,temp=0,D_cnt=0,Rev=0;

    printf("\nEnter a 4 Digit Number to find its sum:");
    scanf("%d",&i);

    for(temp=i;temp!=0;temp=temp/10)
    {
        D_cnt++;
    }
    if(D_cnt==4)
    {
        for(temp=i;temp!=0;temp=temp/10)
        {
            Rev=(Rev*10)+(temp%10);
        }
    }
    else
    {
        printf("\nDigit Count is INVALID:");
        goto down;
    }

    printf("\n***************************************************OUTPUT********************************************************\n");

    printf("\n\t\t\t\t\tReverse of Given 4 Digit Number %d is %d.\n",i,Rev);

    down:

    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t ***Thank You*** \n\t\t\t\t   I Hope u are Satisfying with my program !!");

    getch();
    return 0;
}
