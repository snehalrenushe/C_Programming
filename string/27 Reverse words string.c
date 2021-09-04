/* Input :  India is my Country.
   Output : .Country my is India*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char Cstr[30] = "" , Pstr[30] = "";
    int i = 0,j = 0;

    printf("\nEnter the String : ");
    gets(Cstr);

    while(Cstr[i] != '\0')      ///To Check End of String
    {
        i++;
    }

    while(i > 0)        ///To Reverse the whole String
    {
        Pstr[j] = Cstr[--i];
        j++;
    }

    Pstr[j] = '\0';

    printf("\nReverse String is : ");

    for(i = 0 ; Pstr[i] != '\0' ; i++)
    {
        if(Pstr[i+1] == ' ' || Pstr[i+1] == '\0')
        {
            for(j = i ; ((j >= 0) && (Pstr[j] != ' ')) ; j--)
            {
                printf("%c",Pstr[j]);
            }

            printf(" ");
        }
    }

    getch();
    return 0;
}
