#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[20] , i , size , sum;
    float average;

    printf("\nEnter any size to print its average : ");
    scanf("%d",&size);

    printf("\n----------------------------------\n");

    printf("\nEnter the numbers => ");

    for(i=1;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=1;i<=size;i++)
    {
        sum=sum+arr[i];
        average=sum/size;
    }

    printf("\n-------------------------------------------\n");

    printf("\n Average of entered numbers are : %f",average);

    getch();
    return 0;
}
