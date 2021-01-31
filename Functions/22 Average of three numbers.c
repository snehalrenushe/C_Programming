#include<stdio.h>
#include<conio.h>

int Find_Average(int,int,int);

int main()
{
    int No1,No2,No3;
    float Res=0.0;

    printf("\nEnter Three numbers to find its average =>");
    scanf("%d%d%d",&No1,&No2,&No3);

    Res=Find_Average(No1,No2,No3);

    printf("\nAverage of given three numbers is %.2f .",Res);

    getch();
    return 0;
}
int Find_Average(int N1,int N2,int N3)
{
    float Avg=(N1+N2+N3)/3;

    return Avg;
}
