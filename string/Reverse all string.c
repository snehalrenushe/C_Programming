#include<stdio.h>
#include<conio.h>

void Reverse_Each_String(char*);

int main()
{
    char ch[20]="";

    printf("\nEnter a String:");
    gets(ch);

    Reverse_Each_String(ch);

    printf("\nAfter Reverse Each String:%s",ch);

    getch();
    return 0;
}

void Reverse_Each_String(char *str)

{
    int i=0;
    char *p1=NULL;
    char *p2=NULL;

    while(str[i]!='\0')
    {
        if(str[i]==' '|| str[i]==','|| str[i]=='.')
        {
            i++;
            continue;
        }

        p1=i+str;

        while(str[i]!=' '&&str[i]!=','&&str[i]!='.'&&str[i]!='\0')
        {
            i++;
        }

        p2 = str + i-1;

        while(p1<=p2)
        {
            char ch = *p1;
            *p1 = *p2;
            *p2 = ch;

             p1++;
             p2--;
        }

    }

    return;


}
