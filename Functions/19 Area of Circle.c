#include<stdio.h>
#include<conio.h>

#define pi 3.14

float Area_Circle(float);

int main()
{
    float r;
    float Res;

    printf("\nEnter the measures of Circle to find its Area : ");
    scanf("%f",&r);

    Res=Area_Circle(r);

    printf("\nArea of given Circle is %.2f.",Res);

    getch();
    return 0;
}
float Area_Circle(float Radius)
{
    float area;

    area=pi*Radius*Radius;

    return area;
}
