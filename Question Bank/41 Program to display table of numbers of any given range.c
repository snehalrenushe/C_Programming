#include<stdio.h>
#include<conio.h>

int main()

{
    int i=0,j=0,sp=0,ep=0;

    printf("\nEnter any Range to print its table : ");
    scanf("%d%d",&sp,&ep);

    printf("\n\n************************************************ OUTPUT ************************************************\n\n");

    if(sp > ep)
    {
        printf("\nINVALID....");
    }

    for(i=1;i<=10;i++)
    {
        for(j=sp;j<=ep;j++)
        {
            printf(" %5d",i*j);
        }

        printf("\n");
    }
    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t Your Tables are Successfully printed !!!!!\n\n\n\n\n");

    getch();
    return 0;

}
