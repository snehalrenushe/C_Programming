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
    struct student std1 = {21,"snehal","Renushewadi",93.8865};

    struct student std2;

    struct student std3;

    printf("\nStudent Details are Given are => \n\n\tRoll No - %d.\n\tName - %s.\n\tCity - %s.\n\tPercentage - %0.2f.\n",std1.RollNo,std1.Name,std1.City,std1.Per);
    printf("\n*******************************************************************************************");

    getch();

    strcpy(std1.Name,"Abhi Yadav");
    strcpy(std1.City,"Karad");

    std2.RollNo = 58;
    strcpy(std2.Name,"Priyanka More");
    strcpy(std2.City,"Umraj");
    std2.Per = 88.98;

    std3 = std2;

    printf("\nStudent Details are Given are => \n\n\tRoll No - %d.\n\tName - %s.\n\tCity - %s.\n\tPercentage - %0.2f.\n",std1.RollNo,std1.Name,std1.City,std1.Per);

    printf("\nStudent Details are Given are => \n\n\tRoll No - %d.\n\tName - %s.\n\tCity - %s.\n\tPercentage - %0.2f.\n",std2.RollNo,std2.Name,std2.City,std2.Per);

    printf("\nStudent Details are Given are => \n\n\tRoll No - %d.\n\tName - %s.\n\tCity - %s.\n\tPercentage - %0.2f.\n\n\n\n",std3.RollNo,std3.Name,std3.City,std3.Per);

    getch();

    return 0;
}
