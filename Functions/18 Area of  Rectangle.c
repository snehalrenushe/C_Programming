#include<stdio.h>
#include<conio.h>

float Area_Rectangle(float,float);

int main()
{
    float No1,No2;
    float Res;

    printf("\nEnter the measures of Circle to find its Area : ");
    scanf("%f%f",&No1,&No2);

    Res=Area_Rectangle(No1,No2);

    printf("\nArea of given Rectangle is %.2f.",Res);

    getch();
    return 0;
}
float Area_Rectangle(float length,float breadth)
{
    return length*breadth;
}
