#include<stdio.h>
#include<conio.h>

int main()

{
    int No=0,i=0;

    printf("\nEnter any Number to print their Factors : ",No);
    scanf("%d",&No);

    printf("\n***************************************************OUTPUT********************************************************\n");


    printf("\n\t\t\tFactors of %d :",No);

    for(i=1;i<=No;i++)
    {
        if(No%i==0)
        {

           printf(" %d ",i);

        }
    }

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t ***Thank You*** \n\t\t\t\t   I Hope u are Satisfying with my program !!\n\n\n\n\n");

    getch();
    return 0;
}
