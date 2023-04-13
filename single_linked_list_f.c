#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *add;
};
struct node *start=NULL, *new1, *next, *temp;

int main()
{
    int choice;
    do
    {
        printf("\n-------------single linked list---------------");
        printf("\n 1.create");
        printf("\n 2.display");
        printf("\n 3.exit");
        printf("\n------------------------------------");
        printf("\n enter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: create();break;
            case 2: display(); break;
            case 3: exit(0);
            default: printf("invalid choice");
        }
    }while(choice!=3);
    return 0;
}

create()
{
	int n;
	char ch;
	printf("enter an element\n");
	scanf ("%d",&n);
	start=(struct node*)malloc(sizeof(struct node));
	start->data=n;
	start->add=NULL;
	temp =start;
	printf("want to continue\n");
	ch=getche();
	while(ch =='y' || ch =='Y')
	{
		printf("enter next element\n");
        scanf("%d",&n);
        new1=(struct node*) malloc(sizeof(struct node));
        new1->data =n;
        new1->add=NULL;
        temp->add = new1;
        temp = temp->add;
        printf("want to continue\n");
        ch=getche();
    }
}

display()
{
    if(start==NULL)
	   printf("list is not found");
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->add;
		}
	}
}

insert_first()
{
    if(start==NULL)
	   printf("list is not found");
	else
    {
        int n;
        printf("\n Enter the number");
        scanf("%d",&n);

    }
}
