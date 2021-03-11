#include<stdio.h>
#include<conio.h>

int main()
{
    int No[7] = {0}, i;

    for(i = 1 ; i < 8 ; i++)
    {
        printf("\nEnter %d Elements for given array => ",i);
        scanf("%d",&No[i]);
    }
    for(i = 1 ; i < 8 ; i++)
    {
        printf("\n %d Elements is : %d",i,No[i]);
    }

    getch();
    return 0;
}
