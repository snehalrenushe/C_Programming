///Stack Implementation using Array

#include<stdio.h>
#include<conio.h>
#define MAX 5

int Stack[MAX];
int Top = 0;

void Push(unsigned int N)
{
    if(Is_Stack_Full())
    {
        printf("\n\nStack is full!!!Can't add new Values...");
        return;
    }

    Stack[Top] = N;
    Top++;
}

int Is_Stack_Full()
{
    if(Top == MAX)
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
        printf("\n\nDeleted value from Stack is = %d ",Stack[Top - 1]);
        Stack[Top - 1] = 0;
        Top--;
    }
}

int Is_Stack_Empty()
{
    if(Top == 0)
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

        for(i = Top - 1 ; i >= 0; i--)
        {
            printf("\n\t |%4d|",Stack[i]);
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

    return cnt;
}

int Search_Stack_Values(int N)
{
    if(Is_Stack_Empty())
    {
        printf("\n\nStack is now Empty!!can't Search any Values...");
    }
    else
    {
        int cnt = 0;

        while(cnt < Top)
        {
            if(Stack[cnt] == N)
            {
                return cnt + 1;
            }

            cnt++;
        }
    }

    return -1;
}

int main()
{
    int Temp = 0;

    Push(100);
    Push(200);
    Push(300);
    Push(400);
    Push(500);

    Stack_Display();

    getch();

    Temp = Search_Stack_Values(200);

    if(Temp < 0)
    {
        printf("\n\tValue is not Found...");
    }
    else
    {
        printf("\n\tValue is at %d position...",Temp);
    }

    getch();

    printf("\n\nCount of values in Stack is %d.",Count_Stack_Values());

    Pop();
    Pop();
    Pop();
    Pop();

    getch();

    Temp = Search_Stack_Values(200);

    if(Temp < 0)
    {
        printf("\n  Value is not Found...");
    }
    else
    {
        printf("\n\tValue is at %d position...",Temp);
    }

    getch();

    printf("\n\nCount of values in Stack is %d.",Count_Stack_Values());
    Stack_Display();

    return 0;

}
