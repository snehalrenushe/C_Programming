#include<stdio.h>
#include<conio.h>

int Str_Copy(char instr[],char outstr[])
{
    int i = 0;

    for(i = 0 ; instr[i] != '\0' ; i++)
    {
        outstr[i] = instr[i];
    }

    outstr[i] = '\0';

    return 0;
}
int main()
{
    char Csrc[20] = "" , src[20] = {'\0'};
    int Cpy = 0;

    printf("\n Enter any string : ");
    gets(Csrc);

    Cpy = Str_Copy(Csrc,src);

    printf("\n Copied string is %s.",src);

    getch();
    return 0;

}

