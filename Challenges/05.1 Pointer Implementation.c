#include<stdio.h>

int main()
{
    double no = 3.14; // Consider address of no as 100
    double *a = &no; // Consider address of a as 200
    double **b = &a; // Consider address of b as 300
    double ***c = &b; // Consider address of c as 400
    double ****d = &c; // Consider address of d as 500

    printf("%d\n",sizeof(no));          //
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));
    printf("%d\n",sizeof(**d));
    printf("%d\n",sizeof(****d));
    printf("%d\n",sizeof(*a));
    printf("%d\n",sizeof(***c));
    printf("%d\n",sizeof(**c));

    return 0;
}
