#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/// Function Declaration

int Add(int,int);
int Sub(int,int);
int Mult(int,int);
int Div(int,int);
int Mod(int,int);

/// Main Function Definition

int main()
{
    int choice=0,No1=0,No2=0;

    for(;;)                        /// Unconditional loop
    {
        printf("\n************************ Calculator in 'c' ******************************\n");

        printf("\n============================$$$$$=============================================\n");

        printf("\n Select choice =>\n\t\t 1.Addition\n\t\t 2.Substraction\n\t\t 3.Multiplication\n\t\t 4.Division\n\t\t 5.Modulo\n\t\t 6.Exit\n");

        printf("\n============================$$$$$=============================================\n");

        printf("\n Enter any choice for working your Calculator => ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                  printf("\n Enter 2 Numbers for Addition =>");
                  scanf("%d%d",&No1,&No2);

                  printf("\n Addition of %d and %d is =%d",No1,No2,Add(No1,No2));
                  getch();
                  system("cls");
                  break;

            case 2:
                  printf("\n Enter 2 Numbers for substraction =>");
                  scanf("%d%d",&No1,&No2);

                  printf("\n Substraction of %d and %d is =%d",No1,No2,Sub(No1,No2));
                  getch();
                  system("cls");
                  break;

            case 3:
                  printf("\n Enter 2 Numbers for Multiplication =>");
                  scanf("%d%d",&No1,&No2);

                  printf("\n Multiplication of %d and %d is =%d",No1,No2,Mult(No1,No2));
                  getch();
                  system("cls");
                  break;

            case 4:
                  printf("\n Enter 2 Numbers for Division =>");
                  scanf("%d%d",&No1,&No2);

                  printf("\n Division of %d and %d is =%d",No1,No2,Div(No1,No2));
                  getch();
                  system("cls");
                  break;

            case 5:
                  printf("\n Enter 2 Numbers for Modulo =>");
                  scanf("%d%d",&No1,&No2);

                  printf("\n Modulo of %d and %d is =%d",No1,No2,Mod(No1,No2));
                  getch();
                  system("cls");
                  break;

            case 6:
                  break;

            default:

                  printf("\n============================$$$$$=============================================\n");

                  printf("\n Invalid Choice Please Select a Valid Choice.");
                  getch();
                  system("cls");
                  break;

        }
        if(choice==6)
        {
            break;
        }

    }

    DWN:
         printf("\n============================$$$$$=============================================\n");

         printf("\n\n\t\t****Thanks for Working With Demo Calculator!!!!!!****\n\n\n\n\n\n\n");

         getch();
         return 0;
}

///      Function Definition

int Add(int N1,int N2)
{
    int Sum=0;

    Sum=N1+N2;

    return Sum;
}

int Sub(int N1,int N2)
{
    int Minus=0;

    Minus=N1-N2;

    return Minus;
}

int Mult(int N1,int N2)
{
    int Multiply=0;

    Multiply=N1*N2;

    return Multiply;
}

int Div(int N1,int N2)
{
    int Divide=0;

    Divide=N1/N2;

    return Divide;
}

int Mod(int N1,int N2)
{
    int Modulo=0;

    Modulo=N1%N2;

    return Modulo;
}

