#include<stdio.h>
#include<conio.h>

int main()
{
    int No1,No2;

    printf("\nEnter Numbers Before Swapping:");
    scanf("%d%d",&No1,&No2);

    No1=No1+No2;
    No2=No1-No2;
    No1=No1-No2;

    printf("\nNumbers after swapping:\n number1=%d \t number2=%d\n",No1,No2);


    printf("\n**************************************************\n");

    getch();
    return 0;

}
