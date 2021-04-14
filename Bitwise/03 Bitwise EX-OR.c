/*
      Binary of 83 = 0 1 0 1 0 0 1 1
      Binary of 71 = 0 1 0 0 0 1 1 1
                    -----------------
      Bitwise XOR  = 0 0 0 1 0 1 0 0

      Decimal Number  =  0 0 0 1 0 1 0 0

                      =  [(2^7)*0]+[(2^6)*0]+[(2^5)*0]+[(2^4)*1]+[(2^3)*0]+[(2^2)*0]+[(2^1)*0]

                      =  (128*0)+(64*0)+(32*0)+(16*1)+(8*0)+(4*1)+(2*0)+(1*0)

                      =  0 + 0 + 0 + 16 + 0 + 4 + 0 + 0

                      =  20
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No1 = 0 , No2 = 0 , Res = 0;

    printf("\nEnter Two Numbers =>" );
    scanf("%d%d",&No1,&No2);

    Res = No1 ^ No2;

    printf("\n Bitwise EX-OR Between %d & %d = %d.",No1,No2,Res);

    getch();
    return 0;
}
