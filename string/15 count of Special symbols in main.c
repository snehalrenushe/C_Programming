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
        if(!((src[i] >= '0' && src[i] <= '9') || (src[i] >= 'a' && src[i] <= 'z') || (src[i] >= 'A' && src[i] <= 'Z') || (src[i] == ' ')))
        {
            Cnt++;
        }

        i++;
    }

    printf("\n Count of special symbols in given string is %d",Cnt);

    getch();
    return 0;

}

