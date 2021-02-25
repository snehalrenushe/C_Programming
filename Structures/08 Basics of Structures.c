#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int RollNo;
    char Name[80];
    char City[20];
    float Per;
}obj = {21,"snehal renushe","uk",93.8865};

int main()
{
    printf("\nStudent Details are Given are => \n\n\tRoll No - %d.\n\tName - %s.\n\tCity - %s.\n\tPercentage - %0.2f.\n\n",obj.RollNo,obj.Name,obj.City,obj.Per);

    getch();

    strcpy(obj.City,"Renushewadi");

    printf("\nStudent Details are Given are => \n\n\tRoll No - %d.\n\tName - %s.\n\tCity - %s.\n\tPercentage - %0.2f.\n\n",obj.RollNo,obj.Name,obj.City,obj.Per);
    getch();

    return 0;
}
