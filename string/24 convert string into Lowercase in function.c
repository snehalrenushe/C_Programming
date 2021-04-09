#include<stdio.h>
#include<conio.h>

int Lower(char instr[])
{
    int i = 0;

    while(instr[i] != '\0')
    {
        if(instr[i] >= 'A' && instr[i] <= 'Z')
        {
            instr[i] = instr[i] + 32;
        }

        i++;
    }

    return 0;
}
int main()
{
    char Csrc[20] = "";
    int Temp = 0;

    printf("\n Enter any string : ");
    gets(Csrc);

    Temp = Lower(Csrc);

    printf("\n Copied string is %s.",Csrc);

    getch();
    return 0;

}

