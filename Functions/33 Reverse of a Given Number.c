#include<stdio.h>
#include<conio.h>

int Reverse(int);

int main()
{
    int No=0,Res=0;

    printf("\nEnter any Number to print its Reverse number :");
    scanf("%d",&No);

    Res=Reverse(No);

    printf("\nReverse of Given number is %d => %d",No,Res);

    getch();
    return 0;
}
int Reverse(int i)
{
    int Rev=0,Temp;

    for(Temp=i;Temp!=0;Temp=Temp/10)
    {
        Rev=(Rev*10)+(Temp%10);
    }

    return Rev;
}

