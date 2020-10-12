#include<stdio.h>
#include<conio.h>

int main()

{
    int No=0,i=0,Max=0,Min=0;

    printf("\nEnter 10 Numbers to find maximum and Minimum number from it : \n\n");

    for(i=0;i<=9;i++)
    {
        printf("   Enter %d Number : ",i+1);
        scanf("%d",&No);

        if(No>Max)
        {
            Max=No;
            continue;
        }
        else if(No<Min)
        {
            Min=No;
            continue;
        }
    }

    printf("\n***************************************************OUTPUT********************************************************\n");

    printf("\n\t\t\t \t   Maximum Number from given 10 Numbers is %d\n\t\t\t \t   Minimum Number from given 10 Numbers is %d",Max,Min);

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t   Thank You !!!!!\n \t\t\t\t\tSuccessfully Found your Maximum Number ...    \n\n\n\n\n\n\n");

    getch();
    return 0;

}
