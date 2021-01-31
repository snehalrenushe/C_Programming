#include<stdio.h>
#include<conio.h>

int Power(int,int);

int main()
{
    int No1=0,No2=0,Res=0;

    printf("\nEnter Two numbers to find its power : ");
    scanf("%d%d",&No1,&No2);

    Res=Power(No1,No2);

    printf("\nPower of (%d)^%d = %d\n",No1,No2,Res);

    getch();
    return 0;
}

int Power(int num1,int num2)

{
    static int Temp=0,Pow=1;

    if(num2==0)
    {
        return 1;
    }
    else if(num2>Temp)
    {
      Pow = num1*Power(num1,num2-1);
    }
    return Pow;
}
