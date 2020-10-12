#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,No=0,Sum=0;

    printf("\nEnter 10 Number for Addition :\n");

    for(i=1;i<=10;i++)
    {
        printf("Number %d  : ",i);
        scanf("%d",&No);
        Sum = Sum + No;
    }

    printf("\n\n***************************************************OUTPUT********************************************************\n");

    printf("\n\t\t\t\t  Addition of given 10 inputted number : %d",Sum);

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t Your Addition is Successfully Completed !!!!!\n\n\n\n\n");

    return 0;
    getch();

}
