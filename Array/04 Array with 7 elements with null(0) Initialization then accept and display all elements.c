#include<stdio.h>
#include<conio.h>

int main()
{
    int No[7] = {0}, i = 0;

    printf("\nEnter 1st Elements for given array => ");
    scanf("%d",&No[0]);

    printf("\nEnter 2nd Elements for given array => ");
    scanf("%d",&No[1]);

    printf("\nEnter 3rd Elements for given array => ");
    scanf("%d",&No[2]);

    printf("\nEnter 4th Elements for given array => ");
    scanf("%d",&No[3]);

    printf("\nEnter 5th Elements for given array => ");
    scanf("%d",&No[4]);

    printf("\nEnter 6th Elements for given array => ");
    scanf("%d",&No[5]);

    printf("\nEnter 7th Elements for given array => ");
    scanf("%d",&No[6]);


    printf("\n %d Elements is : %d",++i,No[0]);

    printf("\n %d Elements is : %d",++i,No[1]);

    printf("\n %d Elements is : %d",++i,No[2]);

    printf("\n %d Elements is : %d",i++,No[3]);

    printf("\n %d Elements is : %d",i++,No[4]);

    printf("\n %d Elements is : %d",i++,No[5]);

    printf("\n %d Elements is : %d",i++,No[6]);

    getch();
    return 0;
}
