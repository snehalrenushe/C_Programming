#include<stdio.h>
#include<conio.h>
#define Num 4

int Even_Count_Element(int *m,int N1)
{
    int i = 0 , E_Cnt = 0;

    for(i = 0 ; i < Num ; i++)
    {
        if(m[i] % 2 == 0)
        {
            E_Cnt++;
        }
    }

    return E_Cnt;
}

int Odd_Count_Element(int *m,int N1)
{
    int i = 0 , O_Cnt = 0;

    for(i = 0 ; i < Num ; i++)
    {
        if(m[i] % 2 == 1)
        {
            O_Cnt++;
        }
    }

    return O_Cnt;
}

int Zero_Count_Element(int *m,int N1)
{
    int i = 0 , Z_Cnt = 0;

    for(i = 0 ; i < Num ; i++)
    {
        if(m[i] == 0)
        {
            Z_Cnt++;
        }
    }

    return Z_Cnt;
}

int main()
{
    int No[Num] = {0} ,i = 0 , Ret = 0;

    for(i = 0 ; i < Num ; i++)
    {
        printf("\nEnter %d Elements for given array => ",i);
        scanf("%d",&No[i]);
    }

    printf("\n******* Elements Displaying **************\n");

    for(i = 0 ; i < Num ; i++)
    {
        printf("\n \t %d Elements is : %d",i,No[i]);
    }

    printf("\n\n******* Even Elements Counting **************\n");

    Ret = Even_Count_Element(No,i);

    printf("\n-----------------------------------------------");
    printf("\n Even Count of given array elements is = %d",Ret);
    printf("\n-----------------------------------------------");

    printf("\n\n******* Odd Elements Counting **************\n");

    Ret = Odd_Count_Element(No,i);

    printf("\n-----------------------------------------------");
    printf("\n Odd Count of given array elements is = %d",Ret);
    printf("\n-----------------------------------------------");

    printf("\n\n******* Zero Elements Counting **************\n");

    Ret = Zero_Count_Element(No,i);

    printf("\n-----------------------------------------------");
    printf("\n Zero Count of given array elements is = %d",Ret);
    printf("\n-----------------------------------------------");

    getch();
    return 0;
}
