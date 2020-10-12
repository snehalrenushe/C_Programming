#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,temp=0,D_cnt=0,Sum=0;

    printf("\nEnter a 3 Digit Number to find its sum:");
    scanf("%d",&i);

    for(temp=i;temp!=0;temp=temp/10)
    {
        D_cnt++;
    }
    if(D_cnt==3)
    {
        for(temp=i;temp!=0;temp=temp/10)
        {
            Sum=Sum+(temp%10);
        }
    }

    printf("\n***************************************************OUTPUT********************************************************\n");

    printf("\n\t\t\t\t\tSum of Given 3 Digit Number %d is %d.\n",i,Sum);

    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t ***Thank You*** \n\t\t\t\t   I Hope u are Satisfying with my program !!");





    getch();
    return 0;
}
