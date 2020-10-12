#include<stdio.h>
#include<conio.h>

int main()

{
    int ch=0;

    printf("\nPress Enter to print characters A to Y : ");
    scanf("%c",&ch);


    printf("\n***************************************************OUTPUT********************************************************\n\n");

    for(ch='A' ; ch<='Y' ; ch++)
      {
          printf("   %c",ch);
      }

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\  Thank You So Much !!!!!\n\n\n\n\n");

    return 0;
    getch();

}
