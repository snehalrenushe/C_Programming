#include<stdio.h>
#include<conio.h>
#define Num 4

int Sum_Of_Elements(int *m,int N1)
{
    int i = 0 , sum = 0;

    for(i = 0 ; i < Num ; i++)
    {
        sum = sum + m[i];
    }

    return sum;
}

int main()
{
    int No[Num] = {0} ,i = 0 , Ret = 0;

    for(i = 0 ; i < Num ; i++)
    {
        printf("\nEnter %d Elements for given array => ",i);
        scanf("%d",&No[i]);
    }

    printf("\n*******Elements Displaying**************\n");

    for(i = 0 ; i < Num ; i++)
    {
        printf("\n \t %d Elements is : %d",i,No[i]);
    }

    printf("\n\n*******Summation of Elements**************\n");

    Ret = Sum_Of_Elements(No,i);

    printf("\n-----------------------------------------------");
    printf("\n Sum of given array elements is = %d",Ret);
    printf("\n-----------------------------------------------");

    getch();
    return 0;
}
