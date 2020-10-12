#include<stdio.h>
#include<conio.h>

int main()

{
    int No1=0;

    printf("\nEnter any number to check prime number from it : ");
    scanf("%d",&No1);

    printf("\n*******************************************\n");


    (No1%2!=0)?printf("\n\t %d is Prime Number",No1):printf("\n\t %d is Not Prime Number",No1);


    printf("\n\n*******************************************\n");


    getch();
    return 0;
}
