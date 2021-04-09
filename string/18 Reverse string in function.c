#include<stdio.h>
#include<conio.h>

int Reverse(char instr[],char outstr[])
{
    int i = 0 , j = 0;

    while(instr[i] != '\0')
    {
        i++;
    }

    i = i - 1;

    while(i >= 0)
    {
        outstr[j] = instr[i];
        j++;
        i--;
    }

    outstr[j] != '\0';

    return 0;
}
int main()
{
    char Csrc[20] = "" , src[20] = "";
    int Rev = 0;

    printf("\n Enter any string : ");
    gets(Csrc);

    Rev = Reverse(Csrc,src);

    printf("\n Reverse of given string is %s.",src);

    getch();
    return 0;

}

