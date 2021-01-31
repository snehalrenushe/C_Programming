#include<stdio.h>
#include<conio.h>

char Ascii(char);

int main()
{
    char ch;

    printf("\nEnter any character to print its Ascii Value : ");
    scanf("%c",&ch);

    Ascii(ch);

    return 0;
}

char Ascii(char i)

{
    printf("\n\t ASCII VALUE of Given character is %d",i);

    return i;
}
