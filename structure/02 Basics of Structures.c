#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int RollNo;
    char Name[80];
    char City[20];
    float Per;
};

int main()

{

    printf("\nSize for given Structures = %d",sizeof(struct student));

    getch();
    return 0;
}
