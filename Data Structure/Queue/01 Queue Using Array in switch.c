///Queue Using Array(Switch)

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define MAX 5

int Queue[MAX];
int Front = 0;
int Rear = 0;

void Enqueue()
{
    int iNo = 0;

    printf("\n\n Enter a Number to Enqueue : ");
    scanf("%d",&iNo);

    if(Is_Queue_Full())
    {
        printf("\n\nQueue is full!!!Can't add new Values...");
        return;
    }
    else
    {
        Queue[Rear] = iNo;
        Rear++;
        printf("\n Element is Enqueued...");
    }
}

int Is_Queue_Full()
{
    if(Rear == MAX)
    {
        return 1;
    }

    return 0;
}

void Dequeue()
{
    if(Is_Queue_Empty())
    {
        printf("\n\nQueue is now Empty!!can't Delete any Values...");
    }
    else
    {
        printf("\n\nDeleted value from Queue is = %d ",Queue[Front]);
        Queue[Front] = 0;
        Front++;
    }
}

int Is_Queue_Empty()
{
    if(Front == Rear)
    {
        return 1;
    }

    return 0;
}

void Queue_Display()
{
    if(Is_Queue_Empty())
    {
        printf("\n\nQueue is now Empty!!can't Display any Values...");
    }
    else
    {
        int i = 0;

        printf("\n\nNow values in Queue are : \n ");

        for(i = Front ; i < Rear; i++)
        {
            printf("\n\t | %d |",Queue[i]);
        }
    }
}

int Count_Queue_Values()
{
    int cnt = 0;

    cnt = Rear - Front;

    printf("\nCount of Elements in Queue is %d.",cnt);
    return cnt;
}

int Search_Queue_Values()
{
    int i = 0;

    if(Is_Queue_Empty())
    {
        printf("\n\nQueue is now Empty!!can't Search any Values...");
    }
    else
    {
        int cnt = 0;

        printf("\nEnter a value to search : ");
        scanf("%d",&cnt);

        for(i = Front ; i < Rear ; i++)
        {
            if(cnt == Queue[i])
            {
                break;
            }
        }

        if(i == Rear)
        {
            printf("\n\nGiven Element %d is not in Queue.",cnt);
        }
        else
        {
            printf("\nValue is at %d position.",i + 1);
        }
    }

    return 0;
}

int main()
{
    int No = 0;

    while(1)
    {
        printf("\n\t 1.Enqueue");
        printf("\n\t 2.Dequeue");
        printf("\n\t 3.Display");
        printf("\n\t 4.Search");
        printf("\n\t 5.Count");
        printf("\n\t 6.Exit");

        printf("\n\n Enter a choice : ");
        scanf("%d",&No);

        switch(No)
        {
            case 1:
                Enqueue();
                getch();
                system("cls");
                break;

            case 2:
                Dequeue();
                getch();
                system("cls");
                break;

            case 3:
                Queue_Display();
                getch();
                system("cls");
                break;

            case 4:
                Search_Queue_Values();
                getch();
                system("cls");
                break;

            case 5:
                Count_Queue_Values();
                getch();
                system("cls");
                break;

            case 6:
                goto down;
                break;

            default:
                printf("\n Please Enter Valid Choice!!!!");
                break;
        }
    }

    down:

    system("cls");

    printf("\n*****************Thank You!!!!!!!!!!!!!*********************");
}
