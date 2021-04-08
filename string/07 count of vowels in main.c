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
        if(src[i] == 'a' || src[i] == 'e' || src[i] == 'i' || src[i] == 'o' || src[i] == 'u' || src[i] == 'A' || src[i] == 'E' || src[i] == 'I' || src[i] == 'O' || src[i] == 'U')
        {
            Cnt++;
        }

        i++;
    }

    printf("\n Count of vowels in given string is %d",Cnt);

    getch();
    return 0;

}
