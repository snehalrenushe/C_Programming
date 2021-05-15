#include<stdio.h>
#include<conio.h>

int MultFact(int iNo)
{
    int i = 1, sum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    printf("\nFactors are : ");

    for(i = 1 ; i < iNo ; ++i)
    {
        if(iNo % i == 0)
        {
            printf(" %d ",i);
            sum = sum + i;
        }
    }

    printf("\n*******************************************\n");
    printf("The sum of non factors is %d",sum);

    printf("\n*******************************************\n");

    if(sum == iNo)
    {
        printf("Sum of factors of given number is equal to the entered number ,therefore %d is a perfect number\n\n",iNo);
    }
    else
    {
        printf("Sum of factors of given number is not equal to the entered number ,therefore %d is not a perfect number\n\n",iNo);
    }

    return;

}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("\nEnter number: ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    getch();

    return 0;
}

