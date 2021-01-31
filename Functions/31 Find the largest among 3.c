#include<stdio.h>
#include<conio.h>

int largest(int,int,int);

int main()
{
    int No1,No2,No3,Res;

    printf("\nEnter Three numbers to find largest number from it : ");
    scanf("%d%d%d",&No1,&No2,&No3);

    Res=largest(No1,No2,No3);

    printf("\nLargest Number among three is : %d",Res);

    getch();
    return 0;
}
int largest(int i,int j,int k)
{
    int Large = 0;
       if(i>j && i>k)
       {
           Large=i;
       }
       else if(j>i && j>k)
       {
           Large=j;
       }
       else
       {
            Large=k;
       }

   return Large;
}
