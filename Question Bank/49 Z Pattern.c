#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,j=0,r=0,c=0;

    printf("\nEnter Columns and Rows count : ");
    scanf("%d%d",&r,&c);

    printf("\n***************************************************OUTPUT********************************************************\n");

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
       {
           if(i==1||i==r||i+j==r+1)
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

    printf("\n\t\t\t\t\t\t   Thank You !!!!!\n \t\t\t\t\tSuccessfully Display Your ' Z ' Pattern ...    \n\n\n\n\n\n\n");

    getch();
    return 0;

}
