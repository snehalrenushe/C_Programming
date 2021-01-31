/*
1st Type Of Function
Accept Nothing Return Nothing

     syntax  =>  void < FunctionName > (void);
     Example =>

*/

#include<stdio.h>
#include<conio.h>

void Add();                /// Function Declaration

void main()
{

    Add();                 /// Function Call

    getch();
    return 0;
}

void Add()                 /// Function Definition

{
    int No1=0,No2=0,Sum=0;

    printf("\nEnter 2 Numbers for Addition : ");
    scanf("%d%d",&No1,&No2);

    Sum=No1+No2;

    printf ("\nAddition is = %d.",Sum);

    return;

}


























