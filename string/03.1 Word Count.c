#include <stdio.h>
#include <string.h>

void main()
{
    char src[200];
    int cnt = 0, i = 0;

    printf("\n Enter the string : ");
    //scanf("%[^\n]s", src);
    gets(src);

    for (i = 0;src[i] != '\0';i++)
    {
        if(src[i] == ' ' && src[i+1] != ' ')
        cnt++;
    }

    printf("\n Number of words in given string are: %d",cnt + 1);

    getch();
    return 0;
}
