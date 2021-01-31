#include<stdio.h>
#include<conio.h>

void Swap(int*,int*);

int main()
{
    int No1,No2;

    printf("\nEnter two numbers before swapping : ");
    scanf("%d%d",&No1,&No2);

    Swap(&No1,&No2);

    printf("\nTwo numbers After swapping \n No1=%d \t No2=%d: ",No1,No2);

    getch();
    return 0;
}
void Swap(int *N1,int *N2)
{
    int Temp=0;

    Temp=*N1;
    *N1=*N2;
    *N2=Temp;
}
