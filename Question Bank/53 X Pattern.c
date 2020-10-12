#include<stdio.h>
#include<conio.h>

int main()

{
    int r=0,c=0,i=0,j=0;

    printf("\nEnter a value for expected Pattern : ");
    scanf("%d%d",&r,&c);

    printf("\n***************************************************OUTPUT********************************************************\n");

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
       {
           if(i==j||i+j==r+1)
           {
               printf(" * ");
           }
           else
           {
               printf("   ");
           }
       }
        printf("\n");
    }

    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t   Thank You !!!!!\n \t\t\t\t\tSuccessfully Display Your ' X ' Pattern ...    \n\n\n\n\n\n\n");

    getch();
    return 0;

}
