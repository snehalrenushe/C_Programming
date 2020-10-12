#include<stdio.h>
#include<conio.h>
#include<string.h>
#define size 50

int main()

{
    char cnt[size];

    printf("\n Enter any string to print its words size : ");
    gets(cnt);

	int i,S_word=0,E_word;

	for(i=0;i<=strlen(cnt);i++)
    {
        if(cnt[i]==' '||i==strlen(cnt))
        {
            E_word=i;
            printf("\nLengths of words in given string is = %.*s = %d \n",(E_word-S_word),cnt+S_word,(E_word-S_word));
            S_word=i+1;
        }
    }

     int j=0;
     int p1=NULL;
     int p2=NULL;


    if(cnt[j]%2==0)
    {
        while(cnt[j]!='\0')
        {
            if(cnt[j]==' '|| cnt[j]==','|| cnt[j]=='.')
            {
               j++;
               continue;
            }

            p1=j+cnt;

            while(cnt[j]!=' '&&cnt[j]!=','&&cnt[j]!='.'&&cnt[j]!='\0')
            {
               j++;
            }

            p2 = cnt + j-1;

            while(p1<=p2)
            {
               char ch = p1;
               p1 = p2;
               p2 = ch;

                p1++;
                p2--;
            }
        printf("\nReverse String of given string is : %s",cnt);
        cnt[j]++;

       }
    }
    else
    {
        printf("\nThe length of given words in string is odd : ");
    }


    getch();
    return 0;

}






