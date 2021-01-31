#include<Stdio.h>
#include<conio.h>

int Find_Max(int,int);
int main()
{
    int No1=0,No2=0,Res=0;
    printf("\nEnter 2 Numbers to check Maximum from it : ");
    scanf("%d%d",&No1,&No2);

    Res=Find_Max(No1,No2);

    if(Res==-1)
    {
        printf("\nBoth numbers are EQUAL :");
    }
    else
    {
        printf("\n%d is Maximum .",Res);
    }

    getch();
    return 0;
}
int Find_Max(int N1,int N2)
{
    int flag=0;
    if(N1==N2)
    {
        flag=-1;
    }
    else if(N1>N2)
    {
        flag=N1;
    }
    else
    {
        flag=N2;
    }
    return;
}
