/*
3rd Type Of Function
Accept Something Return Nothing

     syntax  =>  void < FunctionName > (void);
     Example =>

*/

#include<stdio.h>
#include<conio.h>

void Add(No1,No2);                /// Function Declaration

int main()
{
    int No1=0,No2=0;

    printf("\nEnter 2 Numbers for Addition : ");
    scanf("%d%d",&No1,&No2);

    Add(No1,No2);                 /// Function Call

    getch();
    return 0;
}

void Add(int N1,int N2)                 /// Function Definition

{
    int Sum=0;

    Sum=N1+N2;

    printf ("\nAddition is = %d.",Sum);

    return;

}


























