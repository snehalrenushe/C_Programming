#include<stdio.h>
#include<conio.h>

int Fibonacci_series(int);

int main()
{
    int No=0;

    printf("\nEnter a count for Fibonacci Series : ");
    scanf("%d",&No);

    Fibonacci_series(No);

    getch();
    return 0;
}

int Fibonacci_series(int Num)

{
   static int No1=0,No2=1,No3=0;

   if(Num>0)
    {

        No3 = No1+No2;
        No1 = No2;
        No2 = No3;

        printf("%d ",No3);
        Fibonacci_series(Num-1);
    }

    return No3;

}
