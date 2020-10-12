#include<stdio.h>
#include<conio.h>

int main()

{
    char ch[50];

    printf("\nEnter any String to print its Reverse Order : ");
    gets(ch);

    strrev(ch);

    printf("\n*************************************************** OUTPUT ********************************************************\n");

    printf("\nReverse Order of given String is : %s ",ch);

    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t   Thank You !!!!!\n \t\t\t\t\tSuccessfully print Reverse string ...    \n\n\n\n\n\n\n");

    getch();
    return 0;

}
