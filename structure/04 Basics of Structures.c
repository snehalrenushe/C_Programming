#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int RollNo;
    char Name[80];
    char City[20];
    float Per;

    int No;
    char Nav[80];
    char Gav[20];
    float takke;

};

int main()

{
    struct student std1,std2;

    printf("\nSize for given Structures = %d",sizeof(std1,std2));

    getch();
    return 0;
}
