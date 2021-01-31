#include<stdio.h>
#include<conio.h>

int Even_Odd(int);
int main()
{
    int No1=0;

    printf("\nEnter any number :");
    scanf("%d",&No1);

    Even_Odd(No1);

    if(No1==1)
    {
        printf("\nGiven number is even .",Even_Odd(No1));
    }
    else
    {
        printf("\nGiven number is odd.",Even_Odd(No1));
    }

    getch();
    return 0;
}

int Even_Odd(int N1)
{
    if(N1%2==0)
    {
        return 1;
    }
    return N1;
}
