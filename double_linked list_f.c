#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *ladd;
	struct node *radd;
};
struct node *start=NULL, *temp, *new1, *next ,*prev;

void main()
{
	int choice;
	do
	{
		printf("\n------------------linked list---------------");
		printf("\n 1. create");
		printf("\n 2. display");  
		printf("\n 3. display_rev");  
		printf("\n 4. insert_first");
		printf("\n 5. insert_last");
		printf("\n 6. insert_middle");
		printf("\n 7. delete_first");  
		printf("\n 8. delete_last"); 
		printf("\n 9. delete_middle");            
		printf("\n 10. exit");
		printf("\n --------------------------");
		printf("\n enter your choice");
		scanf ("%d",&choice);
		
		switch(choice)
		{
			case 1: create();break;
			case 2: display();break;
			case 3: display_rev();break;
			case 4: insert_first();break;
			case 5: insert_last();break;
			case 6: insert_middle();break;
			case 7: delete_first();break;
			case 8: delete_last();break;
			case 9: delete_middle();break;		
			case 0: exit(0);
			default:printf("invalid choice");
		}
	}while (choice!=0);
    getch();
}

create()
{
	char ch;
	int n;
	printf("enter any number");
	scanf("%d",&n);
	
	start=(struct node *)malloc(sizeof(struct node));
	
	start->data=n;
	start->ladd=start->radd=NULL;
	
	temp=start;
	printf("\nwant u contine");
	ch=getche();
	while(ch=='y'||ch=='Y')
	{
		printf("\nenter next number");
	    scanf("%d",&n);
	    
	    new1=(struct node *)malloc(sizeof(struct node));
	    
	    new1->data=n;
	    new1->ladd=new1->radd=NULL;
	    
	    temp->radd=new1;
	    new1->ladd=temp;
	    temp=temp->radd;
	    
	    printf("want u continue");
	    ch=getche();
	}
}

display()
{
	if(start==NULL)
	    printf("linked list is empty");
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			printf("\nlist element is %5d",temp->data);
			temp=temp->radd;
		}
	}
}

display_rev()
{
	if(start==NULL)
	    printf("linked list is empty");
	else
	{
		temp=start;
		while(temp->radd!=NULL)
		{
			temp=temp->radd;
		}
		while(temp!=NULL)
		{
			printf("\nlist element is %5d",temp->data);
			temp=temp->ladd;
		}
	}
}

insert_first()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	
	new1=(struct node *)malloc(sizeof(struct node));
	
	new1->data=n;
	new1->ladd=new1->radd=NULL;
	
	new1->radd=start;
	start->ladd=new1;
	
	start=new1;
}

insert_last()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	
	new1=(struct node *)malloc(sizeof(struct node));
	
	new1->data=n;
	new1->ladd=new1->radd=NULL;
	
	temp=start;
	
	while(temp->radd!=NULL)
	{
		temp=temp->radd;
	}
	
	temp->radd=new1;
	new1->ladd=temp;
}

insert_middle()
{
	int n,i=1,pos;
	printf("enter any num");
	scanf("%d",&n);
	
	new1=(struct node *)malloc(sizeof(struct node));
	
	new1->data=n;
	new1->ladd=new1->radd=NULL;
	
	printf("enter your posiion");
	scanf("%d",&pos);
	
	next=start;
	while(i<pos)
	{
		prev=next;
		next=next->radd;
		i++;
	}
	
	prev->radd=new1;
	new1->ladd=prev;
	
	new1->radd=next;
	next->ladd=new1;
}

delete_first()
{
	int n;
	if(start==NULL)
	    printf("linked list is empty");
	else
	{
		n=start->data;
		
		temp=start;
		start=start->radd;
		temp->radd=NULL;
		printf("deleted node is %d",n);
		free(temp);
	}    	    
}

delete_last()
{
	int n;
	if(start==NULL)
	    printf("linked list is empty");
	else
	{
		temp=start;
		while(temp->radd!=NULL)
		{
			prev=temp;
		    temp=temp->radd;
		}
		n=temp->data;
		prev->radd=NULL;			
		printf("deleted node is %d",n);
		free(temp);
    }
}

delete_middle()
{
	int n,pos,i;
	if(start==NULL)
	printf("list not found");
	
	else
	{
		printf("enter the position");
		scanf("%d",&pos); 
		
		i=1;
		next=start;
		while(i<pos)
	   {
		prev=next;
		next=next->radd;
		i++;
	   }   
    
	temp=next;
	next=next->radd;
	
	prev->radd=next;
	next->ladd=prev;
	printf("deleted node is %d",temp->data);
	free(temp);
   }
}  
