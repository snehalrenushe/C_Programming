#include<stdio.h>
#include<conio.h>

int Addition(int);

int main()
{
    int No = 0,temp = 0;

    printf("\nEnter any count to find its sum : ");
    scanf("%d",&No);

    temp = Addition(No);

    printf("\nSum of given numbers is %d ",temp);

    getch();
    return 0;
}

int Addition(int Num)
{
    static int i = 1,sum = 0;
    int cnt = 0;

    if(i <= Num)
    {
        printf("\nEnter Number %d = ",i++);
        scanf("%d",&cnt);

        sum = Addition(Num) + cnt;
    }
    return sum;
}
