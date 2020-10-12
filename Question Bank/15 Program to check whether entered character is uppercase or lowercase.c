#include<stdio.h>
#include<conio.h>

int main()

{
    char ch=0;

    printf("\nTo Check entered Character is Uppercase or Lowercase.:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("\n%c is Uppercase:",ch);
    }

    else if(ch>='a' && ch<='z')
    {
        printf("\n%c is Lowercase:",ch);
    }

    else
    {
        printf("\n%c is not an alphabet:");
    }


    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t ***Done*** \n\t\t\t\t\t   Keep Supporting Guys !!");


    printf("\n\n***************************************************************************************************************\n");


    getch();
    return 0;
}
