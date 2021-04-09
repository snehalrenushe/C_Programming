#include<stdio.h>
#include<conio.h>

int Spl_Symbol_Count(char src[])
{
    int i = 0 , Cnt = 0;

    while(src[i] != '\0')
    {
        if(!((src[i] >= '0' && src[i] <= '9') || (src[i] >= 'a' && src[i] <= 'z') || (src[i] >= 'A' && src[i] <= 'Z') || (src[i] == ' ')))
        {
            Cnt++;
        }

        i++;
    }

    return Cnt;
}
int main()
{
    char Csrc[20]="";
    int S_Cnt = 0;

    printf("\n Enter any string : ");
    gets(Csrc);

    S_Cnt = Spl_Symbol_Count(Csrc);

    printf("\n Count of Digits in given string is %d",S_Cnt);

    getch();
    return 0;

}

