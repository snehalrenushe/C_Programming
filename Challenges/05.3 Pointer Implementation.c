#include<stdio.h>

int main()
{
    int arr[] = {10,20,30,40,50};   //100
    int *p = arr;                   //200

    printf("\n%d",arr);
    printf("\n%d",&arr);
    printf("\n%d",p);
    printf("\n%d",*p);
    printf("\n%d",sizeof(arr));
    printf("\n%d",sizeof(arr[0]));
    printf("\n%d",sizeof(p));
    printf("\n%d",sizeof(*p));

    return 0;
}
