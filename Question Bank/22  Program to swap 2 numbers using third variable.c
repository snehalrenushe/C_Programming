#include<stdio.h>
#include<conio.h>

int main()

{
    int No1=0,No2=0,Temp=0;

    printf("\nEnter two numbers before Swapping :",No1,No2);
    scanf("%d%d",&No1,&No2);

    Temp = No1;
    No1 = No2;
    No2 = Temp;

    printf("\n***************************************************OUTPUT********************************************************\n");

    printf("\n\t\t\t\t\tTwo numbers after swapping : %d %d\n",No1,No2);

    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t ***Thank You*** \n\t\t\t\t   I Hope u are Satisfying with my program !!\n\n\n\n\n");

    getch();
    return 0;
}
