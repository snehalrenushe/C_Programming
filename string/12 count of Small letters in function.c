#include<stdio.h>
#include<conio.h>

int S_Count(char src[])
{
    int i = 0 , Cnt = 0;

    while(src[i] != '\0')
    {
        if(src[i] >= 'a' && src[i] <= 'z')
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

    S_Cnt = S_Count(Csrc);

    printf("\n Count of Small letters in given string is %d",S_Cnt);

    getch();
    return 0;

}

