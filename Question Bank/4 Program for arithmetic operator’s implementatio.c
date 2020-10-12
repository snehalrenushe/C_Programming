#include<stdio.h>
#include<conio.h>

int main()
{
   int a,b,add,subtract,multiply;
   float divide;

   printf("Enter two integers:");
   scanf("%d%d",&a,&b);

   add = a+b;
   subtract = a-b;
   multiply = a*b;
   divide = a/b;   //typecasting

   printf("\nSum = %d\n", add);
   printf("\nDifference = %d\n", subtract);
   printf("\nMultiplication = %d\n", multiply);
   printf("\nDivision = %.2f\n", divide);

   printf("\n**************************************************\n");

   getch();
   return 0;

}
