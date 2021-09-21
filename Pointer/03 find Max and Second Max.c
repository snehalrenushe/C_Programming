#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

static int cnt;

struct stud
{
    int Roll_No;
    char Name[30];
    int Total;
};

void Max(struct stud *sp,int *ptr1,int *ptr2)
{
    int i = 0 , max1 = 0 , max2 = 0;

    for(i = 1 ; i <= cnt ; i++)
    {
        if(sp[i].Total)
        {
            max1 = sp[i].Total;
            *ptr1 = i;
        }
    }

    for(i = 1 ; i <= cnt ; i++)
    {
        if(sp[i].Total != max1 && sp[i].Total <= max1)
        {
            max2 = sp[i].Total;
            *ptr2 = i;
        }
    }

    return;
}

int main()
{
    int No1 = -1,No2 = -1;
    struct stud *sptr = NULL;

    printf("\nEnter a Marks count : ",cnt);
    scanf("%d",&cnt);

    sptr = (struct stud*)malloc(cnt * (sizeof(int)));

    for(int i = 0 ; i < cnt ; i++)
    {
        printf("\nEnter Roll no %d student : ",i + 1);
        scanf("%d",&sptr[i].Roll_No);

        printf("\nEnter Name %d student : ",i + 1);
        scanf("%s",&sptr[i].Name);

        printf("\nEnter Total Marks %d student : ",i + 1);
        scanf("%d",&sptr[i].Total);

    }

    Max(&sptr,&No1,&No2);

    printf("\nMaximum No. is = %d.",sptr[No1]->Total);
    printf("\nSecond Maximum No. is = %d.",sptr[No2]->Total);
    getch();

    return 0;

}
