#include<stdio.h>
#include<conio.h>

struct student
{
    int rollno;
    char name[20];
    float per;
};

void main()
{
    struct student s1;
    printf("enter of information of student");

    printf("\n enter name");
    scanf("%s",&s1.name);

    printf("\n enter percentage");
    scanf("%f",&s1.per);

    printf("student records are");

    printf("\n name %s",s1.name);
    printf("\n percentage %f",s1.per);
    getch();
}
