#include<stdio.h>
#include<conio.h>

int main()
{
    char src[20] = {'\0'};
    int i = 0;

    printf("\n Enter any string : ");
    gets(src);

    while(src[i] != '\0')
    {
        if(src[i] >= 'a' && src[i] <= 'z')
        {
            src[i] = src[i] - 32;
        }

        i++;
    }

    printf("\n Modified string is %s",src);

    getch();
    return 0;

}

