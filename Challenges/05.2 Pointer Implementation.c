#include<stdio.h>

int main()
{
    char ch = 'A';  //100
    char *p = &ch;  //200
    char **q = &p;  //300
    char **x = &p;  //400
    char *y = &ch;  //500

    printf("\n%d",&ch);     //100
    printf("\n%d",p);       //100
    printf("\n%d",&p);      //200
    printf("\n%d",&q);      //300
    printf("\n%d",q);       //200
    printf("\n%c",**x);     //A
    printf("\n%c",**q);     //A
    printf("\n%d",*q);      //100

    return 0;
}
