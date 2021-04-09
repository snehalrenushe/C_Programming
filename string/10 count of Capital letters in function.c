#include<stdio.h>
#include<conio.h>

int C_Count(char src[])
{
    int i = 0 , Cnt = 0;

    while(src[i] != '\0')
    {
        if(src[i] >= 'A' && src[i] <= 'Z')
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
    int C_Cnt = 0;

    printf("\n Enter any string : ");
    gets(Csrc);

    C_Cnt = C_Count(Csrc);

    printf("\n Count of Capital letters in given string is %d",C_Cnt);

    getch();
    return 0;

}

