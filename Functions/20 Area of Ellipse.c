#include<stdio.h>
#include<conio.h>
#define pi 3.14

float Area_Ellipse(float,float);

int main()
{
    float r1,r2;
    float Res;

    printf("\nEnter the Radius of Ellipse to find its Area : ");
    scanf("%f%f",&r1,&r2);

    Res=Area_Ellipse(r1,r2);

    printf("\nArea of given Ellipse is %.2f.",Res);

    getch();
    return 0;

}
float Area_Ellipse(float R1,float R2)

{
    float area;

    area=pi*R1*R2;

    return area;
}
