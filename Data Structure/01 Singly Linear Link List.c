#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

struct Node
{
    int Data;
    struct Node *Link;
};

void Insert_First(struct Node **First,int N)
{
    struct Node *New = NULL;

    New = (struct Node*)malloc(sizeof(struct Node));

    New->Data = N;
    New->Link = NULL;

    if(NULL == *First)
    {
        *First = New;
    }
    else
    {
        New->Link = *First;
        *First = New;
    }

    printf("\n\n %d element is Created Successfully !!! \n",N);

    return;

}

void Display_Link_List(struct Node *First)
{
    if(NULL == First)
    {
        printf("\nGiven List is Already Empty !!!! ");
        printf("\n\n-------------------------------------------------------------------");
    }
    else
    {
        printf("\nElements in Given List are => \n");

        while(First != NULL)
        {
            printf("\t | %d |   ->" ,First->Data);
            First = First->Link;
        }
        printf("\n-------------------------------------------------------------------");
    }
    return;
}

int main()
{
    int iNo = 100;

    struct Node *Head = NULL;

    Display_Link_List(Head);

    getch();

    Insert_First(&Head,iNo);
    Insert_First(&Head,200);
    Insert_First(&Head,300);

    printf("\n\n--------------------------------------------------------------------");

    getch();

    Display_Link_List(Head);

    getch();

    getch();
    return 0;
}
