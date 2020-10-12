#include<stdio.h>
#include<conio.h>

int Anagram(long int,long int);
int check_length(long int);

int main()
{
    long int No1=0,No2=0;

    printf("\nEnter two numbers to check whether it is Anagram or Not : ");
    scanf("%d%d",&No1,&No2);

    if(Anagram(No1,No2))
    {
        printf("\nGiven Numbers are Anagram : ");
    }
    else
    {
        printf("\nGiven Numbers are Not Anagram : ");
    }

    getch();
    return 0;

}

int check_length(long int No)
{
    int i=0;
    while(No>0)
    {
        No=No/10;
        i++;
    }
    return i;
}

int Anagram(long int N1,long int N2)
{
    int ret=0;
    int i=0;
    int Arr1[10]={0},Arr2[10]={0};

    if(check_length(N1)!=check_length(N2))
    {
        return ret;
    }

    while(N1>0)
    {
        Arr1[N1%10]++;
        N1=N1/10;
        Arr2[N2%10]++;
        N2=N2/10;
    }

    for(i=0;i<10;i++)
    {
        if(Arr1[i]!=Arr2[i])
        {
            ret=0;
            break;
        }
        ret=1;
    }
    return ret;
}
