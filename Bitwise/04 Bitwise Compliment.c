#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No1 = 0 , Res = 0;

    printf("\nEnter a Number =>" );
    scanf("%d",&No1);

    Res = ~No1;

    printf("\nBitwise Compliment  Between %d ^ %d = %d.",No1,Res);

    return 0;
}
