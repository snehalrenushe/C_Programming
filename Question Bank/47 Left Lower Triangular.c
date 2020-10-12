#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,j=0,r=0,c=0;

    printf("\nEnter Columns and Rows count : ");
    scanf("%d%d",&c,&r);

    printf("\n***************************************************OUTPUT********************************************************\n");

    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
       {
           if(i>=j)
           {
               printf(" * ");
           }
       }
        printf("\n");
    }

    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t   Thank You !!!!!\n \t\t\t\t\t  Successfully Display Your Pattern ...    \n\n\n\n\n\n\n");

    getch();
    return 0;

}
