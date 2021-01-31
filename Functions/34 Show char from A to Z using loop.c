#include<stdio.h>
#include<conio.h>

char Ascii(char);

int main()
{
    char ch;

    printf("The Alphabets from A to Z are: \n");

    Ascii(ch);

    getch();
    return 0;
}

char Ascii(char i)

{
    for(i='A';i<='Z';++i)
    {
        printf("%c ", i);
    }
    return i;

}
