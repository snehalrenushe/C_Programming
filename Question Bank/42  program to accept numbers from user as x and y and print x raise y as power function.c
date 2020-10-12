#include<stdio.h>
#include<conio.h>

int main()

{
    int No1=0,No2=0,Pow=1,temp=0;

    printf("\nEnter two numbers for power function : ");
    scanf("%d%d",&No1,&No2);

    for(temp=No2;temp>=1;temp--)
    {
        Pow = Pow * No1;
    }

    printf("\n\n************************************************ OUTPUT ************************************************\n");

    printf("\nPower of (%d)^%d = %d\n",No1,No2,Pow);

    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t ***SUCCESSFULLY COMPLETE*** \n\t\t\t\t    Thank You for giving me these Task!!!");


    getch();
    return 0;

}
