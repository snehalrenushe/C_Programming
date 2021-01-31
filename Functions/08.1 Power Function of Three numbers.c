#include<Stdio.h>
#include<conio.h>

int Power(int,int);
int main()

{
    int No1,No2,No3,Res;
    printf("\nEnter a Number :");
    scanf("%d",&No1);
    printf("\nEnter a Number :");
    scanf("%d",&No2);
    printf("\nEnter a Number :");
    scanf("%d",&No3);

    if(No2<0 || No3<0)
    {
        printf("\nInvalid Input......");
        return -1;
    }

    printf("\n((%d)^%d)^%d = %d",No1,No2,No3,Power(Power(No1,No2),No3));
    return 0;
}
int Power(int N1,int N2)
{
    int Pow=1,Temp=0;
    for(Temp=N2;Temp>0;Temp--)
    {
        //Printf("\nIteration No=%d",Temp+1);
        Pow = Pow*N1;
    }
    return Pow;
}
