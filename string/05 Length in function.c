#include<stdio.h>
#include<conio.h>

int strLen(char* str)         //  (char str[]) can also used
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char src[50] = "";
    int Len = 0;

    printf("\n Enter any string : ");
    gets(src);

    Len = strLen(src);

    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");

    printf("\n\n Length of given string is %d\n",Len);

    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");

    getch();
    return 0;

}
