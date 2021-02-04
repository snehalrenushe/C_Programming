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
    struct student std1,std2;

    std1.RollNo = 65;
    strcpy(std1.Name,"Snehal Renushe");
    strcpy(std1.City,"Karad");
    std1.Per = 93.3826931;

    printf("\nStudent Details are Given are => \n\n\tRoll No - %d.\n\tName - %d.\n\tCity - %d.\n\tPercentage - %d.",std1.RollNo,std1.Name,std1.City,std1.Per);




    getch();
    return 0;
}
