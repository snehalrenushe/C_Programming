#include<stdio.h>
#include<conio.h>

int main()
{
    char src[20]="";
    int i=0 , Cnt = 0;

    printf("\n Enter any string : ");
    gets(src);

    while(src[i] != '\0')
    {
        if(src[i] >= 'A' && src[i] <= 'Z')
        {
            Cnt++;
        }

        i++;
    }

    printf("\n Count of Capital letters in given string is %d",Cnt);

    getch();
    return 0;

}

