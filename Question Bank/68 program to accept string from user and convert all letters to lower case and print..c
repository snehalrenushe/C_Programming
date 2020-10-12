#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i=0;
    char cSrc[50] = {'\0'};

    printf("\nEnter a string : ");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='A' && cSrc[i]<='Z')
        {
            cSrc[i]=cSrc[i]+32;
        }
        i++;
    }

    printf("\nGiven String is after conversion : %s.",cSrc);

    getch();
    return 0;
}
