//STACKS
#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node* prev;
	int data;
	struct node* next;
}*pointing=NULL,*temp=NULL;

node* push(int data)
{
	temp=(struct node*) malloc (sizeof(struct node));
	temp->data=data;
	if (pointing==NULL)
	{
		pointing=temp;
		pointing->prev=NULL;
		pointing->next=NULL;
	}
	else
	{
		pointing->next=temp;
		temp->prev=pointing;
		pointing=temp;
		pointing->next=NULL;
	}
}
struct node* pop(void)
{
	if(pointing==NULL)
	{
		printf("Stack is under flow");
	}
	else if(pointing->prev==NULL)
	{
		pointing=NULL;
	}
	else
	{
		pointing=pointing->prev;
		free(pointing->next);
	}
}


int peek(void)
{
	if(pointing==NULL)
	{
		printf("Enter the stack is empty \n");
		return 0;
	}
	else
	{
	return (pointing->data);
	}
}	
	
int main()
{
	int choice;
	while(choice!=4)
	{
	printf("Enter the coice 1)Push '\t' 2)pop '\t' 3) peek '\t' 4)Exit \n");
	scanf("%d",&choice);

	switch(choice)
	{
		case(1):
			{
				int no;
				printf("Enter the number");
				scanf("%d",&no);
				push(no);
				break;
			}
		case(2):
		{
			pop();
			break;
		}
		case(3):
		{
			printf("%d", peek());
			break;
		}
		default:
			{
				printf("enter the correct value");
				break;
			}
	}
}
	
	
}
