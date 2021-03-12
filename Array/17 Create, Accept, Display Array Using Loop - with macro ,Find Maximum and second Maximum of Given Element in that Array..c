#include<stdio.h>
#include<conio.h>
#define Num 4

int Max = 0,S_Max=0;

int Max_Element(int *m,int N1)
{
    int i = 0;

    Max = m[i];

    for(i = 0 ; i < Num ; i++)
    {
        if(Max < m[i])
        {
            Max = m[i];
        }
    }

    return Max;
}

int Sec_Max_Element(int *m,int N1)
{
    int i = 0;

    S_Max = m[i];

    for(i = 0 ; i < Num ; i++)
    {
        if(m[i] == m[i - 1] || Max == m[i])
        {
            continue;
        }
        else if((S_Max < m[i] || Max == S_Max) && (m[i] != Max))
        {
            S_Max = m[i];
        }
    }

    return S_Max;
}

int main()
{
    int No[Num] = {0} ,i = 0 , Ret = 0 , SRet = 0;

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

    printf("\n\n*******Second Maximum Elements Counting**************\n");

    SRet = Sec_Max_Element(No,i);

    printf("\n-----------------------------------------------");
    printf("\n Second Maximum element in given array is = %d",SRet);
    printf("\n-----------------------------------------------");

    getch();
    return 0;
}
