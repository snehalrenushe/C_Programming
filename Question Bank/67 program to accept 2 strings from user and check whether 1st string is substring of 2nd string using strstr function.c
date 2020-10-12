#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cSrc[50] = "";
    char cSub[50] = "";

    printf("\nEnter any to string to print its substring :");
    gets(cSrc);
    printf("\nEnter any string to search : ");
    gets(cSub);

    if(strstr(cSrc,cSub)==NULL)
    {
        printf("\nString is Not substring of Given I/P String .");
    }
    else
    {
        printf("\nString is substring of Given I/P String .");
    }

    getch();
    return 0;

}
