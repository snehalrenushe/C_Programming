#include<stdio.h>
#include<conio.h>

int D_Count(char src[])
{
    int i = 0 , Cnt = 0;

    while(src[i] != '\0')
    {
        if(src[i] >= '0' && src[i] <= '9')
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
    int D_Cnt = 0;

    printf("\n Enter any string : ");
    gets(Csrc);

    D_Cnt = D_Count(Csrc);

    printf("\n Count of Digits in given string is %d",D_Cnt);

    getch();
    return 0;

}

