#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,j=0,No=0;

    printf("\n\n************************************************ 5 To 10 Tables ************************************************\n\n");

    for(i=1;i<=10;i++)
    {
        No=i;
        for(j=5;j<=10;j++)
        {
            printf("  %5d",No*j);
        }

        printf("\n");
    }

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t Your Tables are Successfully Completed !!!!!\n\n\n\n\n");

    getch();
    return 0;

}
