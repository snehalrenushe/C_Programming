#include<stdio.h>
#include<conio.h>

int str_is_Palindrome(char*);

int main()
{
    char ch[20] = "";
    int Res = 0;

    printf("\nEnter a String : ");
    gets(ch);

    Res = str_is_Palindrome(ch);

    if(Res == 1)
    {
        printf("\nGiven String is Palindrome . ");
    }
    else
    {
        printf("\nGiven String is not Palindrome . ");
    }

    getch();
    return 0;
}

int str_is_Palindrome(char *str)

{
    int i=0,j=0;

    while(str[j] != '\0')
    {
        j++;
    }
    j=j-1;

    while(i<j)
    {
        if(str[i] != str[j])
        {
            break;
        }
        i++;
        j--;
    }
    if(i >= j)
    {
        return 1;
    }
    return 0;
}
