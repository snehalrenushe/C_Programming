#include<Stdio.h>
#include<conio.h>

int Power_Function(int,int);
int main()

{
    int No1,No2,Res;
    printf("\nEnter a Number :");
    scanf("%d",&No1);
    printf("\nEnter a Number :");
    scanf("%d",&No2);

    Res = Power_Function(No1,No2);

    printf("\n(%d)^%d = %d",No1,No2,Res);
    return 0;
}
int Power_Function(int N1,int N2)
{
    int Pow=1,Temp=0;
    for(Temp=N2;Temp>0;Temp--)
    {
        Pow = Pow*N1;
    }
    return Pow;
}
