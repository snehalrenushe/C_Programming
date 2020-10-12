#include<stdio.h>
#include<conio.h>

int main()

{
    char ch=0;

    printf("\nEnter any Character to print its ASCII VALUE : ");
    scanf("%c",&ch);

    printf("\n*******************************************\n");

    printf("\n\t ASCII VALUE of %c is = %d\n",ch,ch);

    printf("\n*******************************************\n");

    getch();
    return 0;
}
