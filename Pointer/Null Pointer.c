#include<stdio.h>
#include<conio.h>

int main()
{
    int *ptr = NULL;
    int *str;

    str = (int*)malloc(4 * sizeof(int));

    printf("\nNull Pointer points to the %d .",ptr);
    //printf("\nValue of Null Pointer is %d.",*ptr);

    if(str != NULL)
    {
        printf("\nMemory Present");
    }
    else
    {
        printf("\nNot present Memory");
    }

    getch();
    return 0;
}
