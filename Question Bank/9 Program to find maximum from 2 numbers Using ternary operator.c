#include<stdio.h>
#include<conio.h>

int main()

{
    int No1=0,No2=0;

    printf("\nEnter any number to find Maximum number from them : ");
    scanf("%d%d",&No1,&No2);

    printf("\n*******************************************\n");


    (No1>No2)?printf("\n\t %d is Maximum Number",No1):printf("\n\t %d is Maximum Number",No2);


    printf("\n\n*******************************************\n");


    getch();
    return 0;
}
