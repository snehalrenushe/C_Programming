///Stack Using Array(Switch)

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define MAX 5

int Stack[MAX];
int Top = -1;

void Push()
{
    int iNo = 0;

    printf("\n\n Enter a Number to Push : ");
    scanf("%d",&iNo);

    if(Is_Stack_Full())
    {
        printf("\n\nStack is full!!!Can't add new Values...");
        return;
    }
    else
    {
        Top++;
        Stack[Top] = iNo;
        printf("\n Element is Pushed...");
    }
}

int Is_Stack_Full()
{
    if(Top == MAX - 1)
    {
        return 1;
    }

    return 0;
}

void Pop()
{
    if(Is_Stack_Empty())
    {
        printf("\n\nStack is now Empty!!can't Delete any Values...");
    }
    else
    {
        printf("\n\nDeleted value from Stack is = %d ",Stack[Top]);
        Stack[Top] = 0;
        Top--;
    }
}

int Is_Stack_Empty()
{
    if(Top == -1)
    {
        return 1;
    }

    return 0;
}

void Stack_Display()
{
    if(Is_Stack_Empty())
    {
        printf("\n\nStack is now Empty!!can't Display any Values...");
    }
    else
    {
        int i = 0;

        printf("\n\nNow values in Stack are : \n ");

        for(i = Top ; i >= 0; i--)
        {
            printf("\n\t | %d |",Stack[i]);
        }
    }
}

int Count_Stack_Values()
{
    int cnt = 0;

    if(!Is_Stack_Empty())
    {
        while(cnt < Top)
        {
            cnt++;
        }
    }

    printf("\nCount of Elements in Stack is %d.",cnt + 1);
    return cnt;
}

int Search_Stack_Values()
{
    int i = 0;

    if(Is_Stack_Empty())
    {
        printf("\n\nStack is now Empty!!can't Search any Values...");
    }
    else
    {
        int cnt = 0;

        printf("\nEnter a value to search : ");
        scanf("%d",&cnt);

        for(i = 0 ; i <= Top ; i++)
        {
            if(cnt == Stack[i])
            {
                break;
            }
        }

        if(i == Top + 1)
        {
            printf("\n\nGiven Element %d is not in stack.",cnt);
        }
        else
        {
            printf("\nValue is at %d position.",i + 1);
        }
    }

    return -1;
}

int main()
{
    int No = 0;

    while(1)
    {
        printf("\n\t 1.Push");
        printf("\n\t 2.Pop");
        printf("\n\t 3.Display");
        printf("\n\t 4.Search");
        printf("\n\t 5.Count");
        printf("\n\t 6.Exit");

        printf("\n\n Enter a choice : ");
        scanf("%d",&No);

        switch(No)
        {
            case 1:
                Push();
                getch();
                system("cls");
                break;

            case 2:
                Pop();
                getch();
                system("cls");
                break;

            case 3:
                Stack_Display();
                getch();
                system("cls");
                break;

            case 4:
                Search_Stack_Values();
                getch();
                system("cls");
                break;

            case 5:
                Count_Stack_Values();
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
