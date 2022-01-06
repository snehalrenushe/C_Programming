#include<stdio.h>

int main()
{
    double no = 3.14;          //100
    double *a = &no;           //200
    double **b = &a;           //300
    double ***c = &b;          //400
    double ****d = &c;         //500

    printf("\n%0.2f",no);     //3.14
    printf("\n%d",&no);        //100
    printf("\n%d",a);          //100
    printf("\n%d",&a);         //200
    printf("\n%d",&c);         //400
    printf("\n%d",&d);         //500
    printf("\n%d",d);          //400
    printf("\n%d",**d);        //200
    printf("\n%d",**c);        //100
    printf("\n%d",*b);         //100

    return 0;
}
