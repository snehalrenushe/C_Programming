#include<stdio.h>
#include<conio.h>

int main()

{
     char ch=0;

     printf("\nEnter any character to prints Message : ");
     scanf("%c",&ch);

     switch(ch)
     {
     case 'A':
        {
          printf("\nWelcome!!!!!!!!!");
          break;
        }

      case 'a':
        {
          printf("\nWelcome!!!!!!!!!");
          break;
        }

     case 'B':
        {
          printf("\n/Good Bye...........");
          break;
        }

     case 'b':
        {
          printf("\nGood Bye...........");
          break;
        }

     case 'C':
        {
          printf("\nHave a nice day!!!!!!!!!");
          break;
        }


     case 'c':
        {
          printf("\nHave a nice day!!!!!!!!!");
          break;
        }

     case 'D':
        {
          printf("\nGood Day!!!!!!!!!");
          break;
        }

     case 'd':
        {
          printf("\nGood Day!!!!!!!!!");
          break;
        }

   }

    printf("\n\n=================================================================================================================\n");

    printf("\n\t\t\t\t\t\t ***Thank You*** \n\t\t\t\t   I Hope u are Happy with my outout !!!!!\n\n\n\n\n");

    getch();
    return 0;
}
