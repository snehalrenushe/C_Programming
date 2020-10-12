#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("\nEnter first String : ");
    gets(str1);
    printf("\nEnter second String : ");
    gets(str2);

    strcat(str1,str2);

    printf("\n***************************************************OUTPUT********************************************************\n");

    printf("\nString after concat : %s \n",str1);

    printf("\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t ***Thank You*** \n\t\t\t\t   I Hope u are Satisfying with my program !!\n\n\n\n\n\n\n\n");


    getch();
    return 0;

}






























