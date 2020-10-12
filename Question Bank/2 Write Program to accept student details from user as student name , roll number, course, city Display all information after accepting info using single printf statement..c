#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
     int Roll_No=0;
     char Name[30];
     char City[20];
     float Per;

     printf("\nEnter a Roll No of Student:");
     scanf("%d",&Roll_No);

     printf("\nEnter a Name of Student:");
     scanf("%s",&Name);

     printf("\nEnter a City name of Student:");
     scanf("%s",&City);

     printf("\nEnter a percentage of student:");
     scanf("%f",&Per);

     system("cls");

     printf("\n**************************************************\n");

     printf("\nStudent details are=>\n\n\t Roll No-%d\n\t Name-%s\n\t City-%s\n\t Percentage-%.2f\n\t",Roll_No,Name,City,Per);

     printf("\n**************************************************\n");

     getche();
     return 0;

}
