#include<stdio.h>
#include<conio.h>

int main()
{
    char src[20]="";
    int i=0;

    printf("\nEnter any string : ");
    gets(src);

    /*for(i = 0 ; i <= 20 ; i++)
    {
        if(src[i] == '\0')
        {
            break;
        }
        i++;
    }*/

    while(src[i] != '\0')
    {
        i++;
    }

    printf("\nLength of given string is %d",i);

    getch();
    return 0;

}
