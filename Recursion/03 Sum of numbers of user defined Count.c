#include<stdio.h>
#include<conio.h>

int Rec_Sum(int);

int main()
{
    int No=0,Res=0;

    printf("\nEnter count to add the given numbers : ");
    scanf("%d",&No);

    Res=Rec_Sum(No);

    printf("\nSum of given numbers is %d",Res);

    getch();
    return 0;
}

int Rec_Sum(int Num)

{
    static int i=0,sum=0;
    int cnt=0;

    if(i<Num)
    {
        printf("\nNumber %d = ",++i);
        scanf("%d",&cnt);
        sum=Rec_Sum(Num)+cnt;
    }
    return sum;
}
