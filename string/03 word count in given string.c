#include<stdio.h>
#include<conio.h>

int main()
{
    char src[50]="";
    int i=0;
    int W_cnt=0;

    printf("\nEnter any string to count words in it : ");
    gets(src);

    while(src[i]!='\0')
    {
        if(src[i]==' ')
        {
            i++;
            continue;
        }
        else
        {
            while(src[i]!=' '&& src[i]!='\0')
            {
               i++;
            }
            W_cnt++;
        }

    }

    printf("\nWord count of given string is %d",W_cnt);

    getch();
    return 0;

}
