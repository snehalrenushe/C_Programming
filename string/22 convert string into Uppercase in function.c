#include<stdio.h>
#include<conio.h>

int Upper(char instr[])
{
    int i = 0;

    while(instr[i] != '\0')
    {
        if(instr[i] >= 'a' && instr[i] <= 'z')
        {
            instr[i] = instr[i] - 32;
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

    Temp = Upper(Csrc);

    printf("\n Copied string is %s.",Csrc);

    getch();
    return 0;

}

