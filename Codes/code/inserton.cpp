#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node* next;
}*start=NULL,*temp,*p;


void create()
{
	int x;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter th value");
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	if(start == NULL)
	{
		start=temp;
		p=temp;
	}
	else
	{
		p->next=temp;
		p=p->next;
	}
	p->next=NULL;
}
void begin()
{
	int x;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the value u want at the front");
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->next=start;
		start=temp;
	}
	
}
void end()
{
	int x;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value to be added at the end");
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	p=start;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		p->next=temp;
		temp->next=NULL;
	}
	
}
void pos()
{
	int x,pos,count,i;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the element u want at node");
	scanf("%d",&x);
	p=start;
	while(p->next!=NULL)
	{
		p=p->next;
		count++;
	}
	temp->data=x;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		printf("%d",count);
		printf("enter the position");
		scanf("%d",&pos);
		if(pos<count)
		{
			p=start;
		for(i=0;i<pos-1;i++)
		{
			p=p->next;
			temp->next=p->next;
			p->next=temp;
		}
		}
	}
	
}



int main()
{
	int i,j,n,choice;
	printf("Enter the no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		create();
	}
	printf("Enter to add the elements\n 1)beggining\t2end\t3position");
	scanf("%d",&choice);
	switch(choice)
	{
		case(1):
			begin();
		case(2):
			end();
		case(3):
			pos();
			
	}
	p=start;
	while(p!=NULL)
	{
		printf("%d",p->data);
	 	p=p->next;
	 }
	
}
