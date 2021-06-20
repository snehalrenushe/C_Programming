#include<stdio.h>
#include<conio.h>

int Factorial(int);

int main()
{
    int No=0,Fact=0;

    printf("\nEnter any Number : ");
    scanf("%d",&No);

    Fact = Factorial(No);

    printf("\nFactorial of Given number %d is = %d",No,Fact);

    getch();
    return 0;
}

int Factorial(int Num)
{
    static int Res = 1;

    if(Num >= 2)
    {
        Res = Factorial(Num-1);
    }

    return Res*Num;
}
