#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	int data;
	node*  next;
}*start,*p,*temp;
node* create(int d)
{
	temp=(struct node*)malloc(sizeof (struct node));
	temp->data=d;
	temp->next=NULL;
	if(start== NULL)
	{
		start=temp;
		p=start;
	}
	else
	{
		p->next=temp;
		p=temp;
	}
	
}

void push(int d)
{
	create(d);
}
void pop()
{
	temp=start;
	while(temp->next!=p)
	{
		temp=temp->next;
	}
	p=temp;
	p->next=NULL;
	if(temp->next==NULL)
	{
		printf("NULL");
	}
}
void display()
{
	printf("HELLO\n");
	temp=start;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main()
{
	
	int i=0;
	for(i=0;i<10;i++)
	{
		push(i);
	}
	display();
	pop();
	display();
	string ="AB*CD+-E+";
}
