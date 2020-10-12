#include<stdio.h>
#include<conio.h>

int main()

{
    char ch=0;

    printf("\nTo Check entered Character is Uppercase or Lowercase.:");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
    {
        printf("\n%c is Uppercase:",ch);
    }

    else if(ch>=97 && ch<=122)
    {
        printf("\n%c is Lowercase:",ch);
    }

    else if(ch>=48 && ch<=57)
    {
        printf("\n%c is Number:");
    }

    else
    {
        printf("\n%c is an Special Symbol:");
    }


    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t ***Done*** \n\t\t\t\t\t   Keep Supporting Guys !!");


    printf("\n\n***************************************************************************************************************\n");


    getch();
    return 0;
}
