#include<stdio.h>
#include<conio.h>
#define Num 4


int Max_Element(int *m,int N1)
{
    int i = 0 , max = 0;

    max = m[i];

    for(i = 0 ; i < Num ; i++)
    {
        if(max < m[i])
        {
            max = m[i];
        }
    }

    return max;
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

    printf("\n\n*******Maximum Elements Counting**************\n");

    Ret = Max_Element(No,i);

    printf("\n-----------------------------------------------");
    printf("\n Maximum element in given array is = %d",Ret);
    printf("\n-----------------------------------------------");

    getch();
    return 0;
}
