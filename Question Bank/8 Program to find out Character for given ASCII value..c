#include<stdio.h>
#include<conio.h>

int main()

{
    int i = 0;

    printf("\nEnter any ASCII VALUE to print its Character :");
    scanf("%d",&i);

    printf("\n*******************************************\n");

    printf("\n\t Character of %d is = %c\n",i,i);

    printf("\n*******************************************\n");


    getch();
    return 0;
}
