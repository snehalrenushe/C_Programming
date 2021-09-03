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

int Count_Position(struct Node *First)
{
    int Cnt = 0;

    if(First != NULL)
    {
        while(First != NULL)
        {
            Cnt++;
            First = First -> Link;
        }
    }

    return Cnt;
}

void Insert_At_Specific_Position(struct Node **First,int Num,int Cnt)
{
    int Ele_cnt = Count_Position(*First);

    if(Cnt <= 0 || Cnt >= (Cnt+1))
    {
        printf("There Is No Position Available !");
    }
    else if(Cnt == 1)
    {
        Insert_First(First,Num);
    }
    else if(Cnt >= Ele_cnt + 1)
    {
        if(Cnt == Ele_cnt + 1)
        {
            Insert_Last(First,Num);
        }
        else
        {
            printf("\nPosition you want is not valid did you want to insert element at %d position ?? (Y/N)",Ele_cnt + 1);

            char ch = getchar();

            fflush(stdin);

            if(ch == 'Y' || ch == 'y')
            {
                Insert_Last(First,Num);
            }
            else
            {
                printf("\n ERROR : Your Element is not been Inserted");
            }
        }
    }
    else
    {
        struct Node *New = NULL;

        New = (struct Node*)malloc(sizeof(struct Node));

        New->Data = Num;
        New->Link = NULL;

        struct Node *Temp = *First;

        while(Cnt - 2 > 0)
        {
            Temp = Temp -> Link;
            Cnt--;
        }

        New->Link = Temp->Link;
        Temp->Link = New;
    }

    return;
}

void Delete_First(struct Node **First)
{
    struct Node *Temp = *First;
    if(NULL == *First)
    {
        printf("\nList is Empty...can't delete any element !!! ");
        return;
    }
    else if(Temp -> Link == NULL)
    {
        *First = NULL;
    }
    else
    {
        *First = Temp->Link;
    }

    printf("\n\n Deleted First element in list is = %d.",Temp -> Data);

    free(Temp);

    return;
}

void Delete_Last(struct Node **First)
{
    if(NULL == *First)
    {
        printf("\nList is Empty...can't delete any element !!! ");
    }
    else
    {
        struct Node *Temp = *First;

        if(Temp->Link != NULL)
        {
            while(Temp->Link->Link != NULL)
            {
                Temp = Temp -> Link;
            }
        }

        printf("\n Deleted Last element in list is = %d.",Temp -> Link -> Data);

        free(Temp->Link);

        Temp->Link = NULL;
    }

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

int main()
{
    struct Node *Head = NULL;

    Display_Link_List(Head);

    getch();

    Insert_First(&Head,100);
    Insert_First(&Head,200);
    Insert_First(&Head,300);

    Insert_Last(&Head,400);
    Insert_Last(&Head,500);
    Insert_Last(&Head,600);

    Display_Link_List(Head);


    printf("\n\n--------------------------------------------------------------------");

    Delete_First(&Head);
    getch();

    Display_Link_List(Head);
    getch();


    Delete_Last(&Head);
    getch();

    Display_Link_List(Head);
    getch();

    Insert_At_Specific_Position(&Head,900,6);
    Display_Link_List(Head);

    return 0;
}
