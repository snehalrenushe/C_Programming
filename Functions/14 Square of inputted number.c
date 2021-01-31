#include<Stdio.h>
#include<conio.h>

int Square_Function(int);

int main()
{
    int No1,Res;
    printf("\nEnter a Number :");
    scanf("%d",&No1);

    Res = Square_Function(No1);

    printf("\nSquare of a %d is = %d",No1,Res);
}
int Square_Function(int N1)
{
    return N1*N1;
}
