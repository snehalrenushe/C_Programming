#include<stdio.h>
#include<conio.h>

int check_vowel(char);

int main()
{
    char ch=0,Res=0;

    printf("\nEnter any Character to check it is vowel or consonant :");
    scanf("%c",&ch);

    Res=check_vowel(ch);

    if(Res==1)
    {
        printf("\nGiven Character is Vowel.");
    }
    else
    {
        printf("\nGiven character is consonant.");
    }

    getch();
    return 0;
}

int check_vowel(char i)

{
    if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U'||i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
    {
        return 1;
    }
}
