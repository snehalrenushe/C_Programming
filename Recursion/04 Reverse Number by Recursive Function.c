#include<stdio.h>
#include<conio.h>

int Reverse(int);

int main()
{
    int No = 0,Rev = 0;

    printf("\nEnter a number to print its Reverse Number : ");
    scanf("%d",&No);

    Rev=Reverse(No);

    printf("\nReverse of %d = %d",No,Rev);

    getch();
    return 0;

}

int Reverse(int Num)
{
    static int i = 0;

    if(Num==0)
    {
        return 0;
    }
    else
    {
         i=i*10;
         i=i+Num%10;
         Reverse(Num/10);
    }
    return i;
}
