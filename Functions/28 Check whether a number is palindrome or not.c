#include<stdio.h>
#include<conio.h>

int Prime(int);

int main()
{
    int No=0,Res=0;

    printf("\nEnter any number to check whether it is Prime or Not =>");
    scanf("%d",&No);

    Res=Prime(No);

    if(Res==1)
    {
        printf("\n Entered Number is equal to its Reverse . Therefore , Given Number is palindrome :",Res);
    }
    else
    {
        printf("\n Entered Number is Not equal to its Reverse . Therefore , Given Number is Not palindrome :",Res);
    }

    getch();
    return 0;
}
int Prime(int num)
{
    int Temp=0,Dig=0,Rev=0;

    for(Temp=num;Temp!=0;Temp=Temp/10)
    {
        Dig=Temp%10;
        Rev=(Rev*10)+Dig;
    }

    if(num==Rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
