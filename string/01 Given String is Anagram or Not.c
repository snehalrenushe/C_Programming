#include<stdio.h>
#include<conio.h>

int main()
{
    char str1[20],str2[20];
    int len1, len2, len3, i, j, ret=0, bret=0;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    len2 = strlen(str1);
    len3 = strlen(str2);

    if(len2 == len3)
    {
        len1= len2;
        for(i=0; i<len1; i++)
        {
            ret = 0;
            for(j=0; j<len2; j++)
            {
                if(str1[i] == str2[j])
                {
                    ret = 1;
                    break;
                }
            }
            if(ret == 0)
            {
                bret = 1;
                break;
            }
        }
        if(bret == 1)
            printf("\nStrings are not Anagram");
        else
            printf("\nStrings are Anagram");
    }
    else
        printf("\nBoth string must contain same number of character to be an Anagram Strings");
    getch();
    return 0;
}

