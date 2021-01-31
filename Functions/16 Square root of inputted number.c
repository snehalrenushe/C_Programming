#include<Stdio.h>
#include<conio.h>

int Squareroot_Function(int);

int main()
{
    int No1,Res;
    printf("\nEnter a Number :");
    scanf("%d",&No1);

    Res = Squareroot_Function(No1);

    printf("\n Square root of a %d is = %d",No1,Res);

    return 0;
    getch();
}
int Squareroot_Function(int N1)
{
    float temp,sqroot;
    sqroot=N1/2;                ///144/2=72
    temp=0;

    while(sqroot != temp)
    {
        temp=sqroot;                   ///72
        sqroot=(N1/temp+ temp)/2;          ///(144/72+72)/2=>(2+72)/2=>74/2=>37
    }

    return sqroot;

}

