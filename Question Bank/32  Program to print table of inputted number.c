#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,No=0;

    printf("\nEnter any Number to print it's Table : ");
    scanf("%d",&No);

    printf("\n\n***************************************************OUTPUT********************************************************\n");

    for(i=1;i<=10;i++)
    {
       printf("\n  %d",No*i);
    }

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t Your Table is Successfully Completed !!!!!\n\n\n\n\n");

    return 0;
    getch();

}
