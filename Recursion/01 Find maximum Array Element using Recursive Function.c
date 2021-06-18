#include<stdio.h>
#include<conio.h>
#define Size 5

void Accept_Array_Elements(int*);
int Find_Max_Ele(int*);

int main()
{
    int Max=0,My_Arr[Size];

    Accept_Array_Elements(My_Arr);
    Max=Find_Max_Ele(My_Arr);

    printf("\nMaximum Element in given Array is = %d.",Max);

    getch();
    return 0;
}

void Accept_Array_Elements(int* A_Ptr)
{
    int i=0;

    for(i=0;i<Size;i++)
    {
        printf("\nEnter Element %d =",i+1);
        scanf("%d",&A_Ptr[i]);
    }
}

int Find_Max_Ele(int* M_Ptr)
{
    static int i=0;
    static int Maximum=0;

    if((i==0)||(M_Ptr[i]>Maximum))
    {
        Maximum=M_Ptr[i];
    }
    i++;
    if(i<Size)
    {
         Find_Max_Ele(M_Ptr);
    }

    return Maximum;
}

