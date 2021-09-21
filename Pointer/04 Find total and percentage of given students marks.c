#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

static int cnt = 0;

struct stud
{
    int Roll_No;
    char Name[30];
    int Cnt_Sub;
    struct Sub*;
    int Total;
    float Per;
};

struct Sub
{
    char subject[20];
    int marks;
};

void Accept_Student_Details(struct stud *ptr)
{
    int i = 0;

    printf("\n\nEnter Students Details => ");

    printf("\nEnter Roll No of Student = ");
    scanf("%d",&(ptr->Roll_No));

    printf("\nEnter Name of Student = ");
    scanf("%s",&(ptr->Name));

    printf("\nEnter Count of Subjects = ");
    scanf("%d",&(ptr->Cnt_Sub));

    (ptr->Sub) = (struct Sub*)malloc((ptr->Cnt_Sub) * sizeof(struct Sub));

    for(i = 0 ; i < ptr->Cnt_Sub ; i++)
    {
        printf("\nEnter a %d subject : ",i + 1);
        scanf("%s",&(ptr->Sub[i].subject));

        printf("\nEnter marks of %d subject : ",i + 1);
        scanf("%d",&(ptr->Sub[i].marks));

        ptr->Total += (ptr->subject[i].marks);
    }

    ptr->Per = (ptr->Total)/(ptr->Cnt_Sub);

    return;
}

void Display_Student_Details(struct stud *ptr)
{
    int i = 0;

    printf("\n\nStudents Details are => ");

    printf("\nEnter Roll No of Student = %d",ptr->Roll_No);
    scanf("%d",&(ptr->Roll_No));

    printf("\nEnter Name of Student = %s",ptr->Name);

    printf("\nEnter Count of Subjects = %d",ptr->Cnt_Sub);

    (ptr->Sub) = (struct Sub*)malloc((ptr->Cnt_Sub) * sizeof(struct Sub));

    for(i = 0 ; i < ptr->Cnt_Sub ; i++)
    {
        printf("\n %d subject is %s: ",i + 1,ptr->Sub[i].subject);

        printf("\n marks of %d subject are : ",i + 1,ptr->Sub[i].marks);
    }

    printf("\n Total marks are %d",ptr->Total);
    printf("\n Percentage are %f",ptr->Per);

    return;
}

int main()
{
    struct stud sptr;

    Accept_Student_Details(&sptr);
    Display_Student_Details(&sptr);

    getch();

    return;
}
