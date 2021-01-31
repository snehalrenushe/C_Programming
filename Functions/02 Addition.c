/*
2nd Type Of Function
Accept Nothing Return Something

     syntax  =>  void < FunctionName > (void);
     Example =>

*/

#include<stdio.h>
#include<conio.h>

int Add();                /// Function Declaration

int main()
{
    int Sum = 0;
    Sum = Add();                 /// Function Call

    printf ("\nAddition is = %d.",Sum);

    getch();
    return 0;
}

int Add()                 /// Function Definition

{
    int No1=0,No2=0,Sum=0;

    printf("\nEnter 2 Numbers for Addition : ");
    scanf("%d%d",&No1,&No2);

    Sum=No1+No2;

    return Sum;

}


























