#include<stdio.h>
#include<conio.h>

int main()

{
    int No1=0,No2=0,No3;

    printf("\nEnter 3 numbers from user to display maximum from it : ");
    scanf("%d%d%d",&No1,&No2,&No3);

    printf("\n****************************************************************************************************************\n");

    if((No1==No2)&&(No1==No3))
    {
        printf("\nGiven All 3 three numbers are Equal:\n");
    }

    else if((No1>No2) && (No1>No3))
    {
        printf("\n%d is Maximum Number.\n",No1);
    }

    else if(No2>No3)
    {
        printf("\n%d is Maximum Number.\n",No2);
    }

    else
    {
        printf("\n%d is maximum Number.\n",No3);
    }

    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t ***SUCCESSFULLY COMPLETE*** \n\t\t\t\t\t Thank You for giving me these Task!!!");


    printf("\n\n***************************************************************************************************************\n");


    getch();
    return 0;
}
