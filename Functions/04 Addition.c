/*
4th Type Of Function
Accept Something Return something

     syntax  =>  DataType < FunctionName > (DT1 Arg1,DT2 Arg2,......,N Arg N);'
     Example =>  int Add(int No1,int No2);

*/

#include<stdio.h>
#include<conio.h>

int Add(int,int);                /// Function Declaration

int main()
{
    int No1=0,No2=0,Res=0;

    printf("\nEnter 2 Numbers for Addition : ");
    scanf("%d%d",&No1,&No2);

    Res=Add(No1,No2);                 /// Function Call

    printf("\nAddition of %d and %d is = %d.",No1,No2,Res);

    getch();
    return 0;
}

int Add(int N1,int N2)                 /// Function Definition

{
    int Sum=0;

    Sum=N1+N2;

    return Sum;

}
