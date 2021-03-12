#include<stdio.h>
#include<conio.h>
#define Num 4

int Search_Element(int *m,int N1)
{
    int i = 0,size = 0;

    for(i = 0 ; i < Num ; i++)
    {
        if(m[i] == N1)
        {
            break;
        }
    }

    if(i == Num)
    {
        return -1;
    }

    return i;

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

    printf("\n\n*******Elements Searching**************\n");

    printf("\nEnter an Element which You want to search => ");
    scanf("%d",&i);

    Ret = Search_Element(No,i);

    if(Ret == -1)
    {
        printf("\n------------------------------------------");
        printf("\n\tElement is not found at any location!!!!");
        printf("\n------------------------------------------");
    }
    else
    {
        printf("\n------------------------------------------");
        printf("\n\tElement %d is found at %d location...",i,Ret);
        printf("\n------------------------------------------");
    }

    getch();
    return 0;
}
