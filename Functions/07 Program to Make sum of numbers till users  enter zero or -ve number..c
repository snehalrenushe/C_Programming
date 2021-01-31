#include<Stdio.h>
#include<conio.h>

void Sum_Calculator();
int Sum=0;
int main()
{
    Sum_Calculator();

    printf("\nSum of entered number(0 or negative to stop) : ");
    return 0;
}

void Sum_Calculator()
{
    while(1)
    {
        int No=0;
        printf("\nEnter a number : ");
        scanf("%d",&No);
        if(No<=0)
        {
            break;
        }
        Sum=Sum+No;
    }
    printf("\nSum=%d",Sum);
    return Sum;
}
