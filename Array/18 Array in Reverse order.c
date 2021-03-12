#include<stdio.h>
#include<conio.h>
#define max 100

int main()
{
    int i , No[max];
    int size;

    printf("\n Enter any size of array = ");
    scanf("%d",&size);

    printf("\n----------------------------------------\n");

    printf("\n Enter elements in array => ");

    for(i=0;i<size;i++)
    {
        scanf("%d",&No[i]);
    }

    printf("\n----------------------------------------\n");

    printf("\n Array in Reverse order : ");

    printf("\n----------------------------------------\n");

    for(i=size-1;i>=0;i--)
    {
        printf("%d\t ",No[i]);
    }

    return 0;
}
