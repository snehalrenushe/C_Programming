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

void Delete_First(struct Node **First)
{
    if(NULL == *First)
    {
        printf("\nList is Empty...can't delete any element !!! ");
    }
    struct Node *Temp = *First;

    *First = Temp -> Link;

    printf("\n------------------------------------------");
    printf("\n Deleted First element in list is = %d.",Temp -> Data);
    printf("\n------------------------------------------");

    free(Temp);

    return;
}

void Delete_Last(struct Node **First)
{
    if(NULL == *First)
    {
        printf("\nList is Empty...can't delete any element !!! ");
    }

    struct Node *Temp = *First;

    if(Temp -> Link != NULL)
    {
        while(Temp -> Link -> Link != NULL)
        {
            Temp = Temp -> Link;
        }
    }

    printf("\n------------------------------------------");
    printf("\n Deleted Last element in list is = %d.",Temp -> Link -> Data);
    printf("\n------------------------------------------");

    free(Temp -> Link);

    Temp -> Link = NULL;

    return;
}

void Display_Link_List(struct Node *First)
{
    if(NULL == First)
    {
        printf("\nGiven List is Already Empty !!!! ");
    }
    else
    {
        printf("\n\n\n Elements in Given List are => \n");

        while(First != NULL)
        {
            printf("\t | %d |   ->" ,First->Data);
            First = First->Link;
        }
        printf(" NULL\n\n");
    }

    return;
}

void Insert_Last(struct Node **First,int N)
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
        struct Node *Temp = *First;

        while(Temp -> Link != NULL)
        {
            Temp = Temp->Link;
        }

        Temp->Link = New;
    }

    printf("\n\n %d element is Created Successfully !!! \n",N);

    return;

}

int main()
{
    struct Node *Head = NULL;

    Display_Link_List(Head);

    getch();

    Insert_First(&Head,100);
    Insert_First(&Head,200);
    Insert_First(&Head,300);

    printf("\n\n--------------------------------------------------------------------");

    Insert_Last(&Head,400);
    Insert_Last(&Head,500);
    Insert_Last(&Head,600);

    Delete_First(&Head);

    getch();

    Display_Link_List(Head);
    getch();


    Delete_First(&Head);
    getch();

    Display_Link_List(Head);
    getch();

    Delete_Last(&Head);
    getch();

    Display_Link_List(Head);
    getch();

    Delete_Last(&Head);
    getch();

    Display_Link_List(Head);
    getch();


    return 0;
}
