#include<stdio.h>
#include<conio.h>

int main()
{
    char src[20] = "" , Csrc[20] = "";
    int i = 0;

    printf("\n Enter any string : ");
    gets(src);

    for(i = 0 ; src[i] != '\0' ; i++)
    {
        Csrc[i] = src[i];
    }

    Csrc[i] = '\0';

    printf("\n Copied string is %s",Csrc);

    getch();
    return 0;

}

