#include<stdio.h>
#include<conio.h>

int main()
{
    char src[20] = "" , Csrc[20] = "";
    int i = 0 , j = 0;

    printf("\n Enter any string : ");
    gets(src);

    while(src[i] != '\0')
    {
        i++;
    }

    i = i - 1;

    while(i >= 0)
    {
        Csrc[j] = src[i];
        j++;
        i--;
    }

    Csrc[j] != '\0';

    printf("\n Reverse of given string is %s",Csrc);

    getch();
    return 0;

}

