#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,Temp=0,Dig=0,O_cnt=0,E_cnt=0;

    printf("\nEnter any number to count Odd and Even count on it : ");
    scanf("%d",&i);

    for(Temp=i;Temp!=0;Temp=Temp/10)
    {
        Dig=Temp%10;

        if(Dig%2==0)
        {
            E_cnt++;
        }
        else
        {
            O_cnt++;
        }
    }

    printf("\n***************************************************OUTPUT********************************************************\n");

    printf("\nEven Digit Count =%d \nOdd Digit Count=%d ",E_cnt,O_cnt);                   //Zero also can be counted as Even digit.

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t   Thank You !!!!!\n \t\t\t\t \t Your Digits are Successfully Count...    \n\n\n\n\n\n\n");

    getch();
    return 0;

}
