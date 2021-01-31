#include<Stdio.h>
#include<conio.h>

int Factorial(int);
int main()
{
    int No=0,Res=0;

    UP:
    printf("\nEnter any number to find its factorial : ");
    scanf("%d",&No);

    if(No<0)
    {
        printf("\nINVALID INPUT..........");
        goto UP;
    }

    Res = Factorial(No);

    printf("\n*********************************************************\n");

    printf("\nFactorial of Given number %d is = %d\n\n\n\n",No,Res);

    getch();
    return 0;

}

int Factorial(Num)
{
    int Fac=1;

    while(Num>1)
    {
        Fac=Fac*Num;
        Num--;
    }

    return Fac;
}
