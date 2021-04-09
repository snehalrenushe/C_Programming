#include<stdio.h>
#include<conio.h>

int V_Count(char src[])
{
    int i = 0 , Cnt = 0;

    while(src[i] != '\0')
    {
        if(src[i] == 'a' || src[i] == 'e' || src[i] == 'i' || src[i] == 'o' || src[i] == 'u' || src[i] == 'A' || src[i] == 'E' || src[i] == 'I' || src[i] == 'O' || src[i] == 'U')
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
    int V_Cnt = 0;

    printf("\n Enter any string : ");
    gets(Csrc);

    V_Cnt = V_Count(Csrc);

    printf("\n Count of vowels in given string is %d",V_Cnt);

    getch();
    return 0;

}

