#include<stdio.h>
#include<conio.h>

float Degree(float);

int main()
{
    float Fahrenheit=0,Res=0;

    printf("\nEnter a temperature in Fahrenheit to convert it into Degree : ");
    scanf("%f",&Fahrenheit);

    Res=Degree(Fahrenheit);

    printf("\nTemperature in Degree is %2.f",Res);

    getch();
    return 0;
}
float Degree(float Fah)
{
    float Degree=0;

    Degree=(5.0/9.0)*(Fah-32.0);

    return Degree;

}
