#include<Stdio.h>
#include<conio.h>

void Table(int);

int main()
{
    int No;

    printf("\nEnter any number to print its table : ");
    scanf("%d",&No);

    Table(No);

    return 0;
}

void Table(int  No)
{
    int i;

    for(i=10;i>=1;i--)
    {
        printf("\n%d*%d=%d",No,i,No*i);
    }
    return i;
}
