#include<stdio.h>
#include<conio.h>

int main()

{
    int x=0,i=0,j=0;
    char ch='A';

    printf("\nEnter a value for expected Pattern : ");
    scanf("%d",&x);

    printf("\n***************************************************OUTPUT********************************************************\n");

    for(i=1;i<=x;i++)
    {
        for(j=1,ch='A';j<=x;j++,ch++)
       {
           if((i>=j)&&(i+j<=x+1))
           {
               printf(" %c",ch);
           }
           else
           {
               printf("   ");
           }
       }
        printf("\n");
    }

    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t   Thank You !!!!!\n \t\t\t\t\tSuccessfully Display Your Pattern ...    \n\n\n\n\n\n\n");

    getch();
    return 0;

}
