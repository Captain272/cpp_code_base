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
	if(start==NULL)
	{
		printf("Empty");
		return;
	}
	else
	{
		temp=start;
		start=start->next;
		free(temp);
		
	}
	
}
void end()
{

	if(start==NULL)
	{
		printf("Empty");
	}
	
	else
	
	{
		p=start;
		temp=p->next;
		while(temp->next!=NULL)
		{
			p=p->next;
			temp=temp->next;
		}
		free(p->next->next);
		p->next=NULL;
	}
	
}
void pos()
{
	int count=0,i=0,pos;
	
	if(start==NULL)
	{
		printf("Empty");
	}
	else
	{
		
	p=start;
	while(p->next!=NULL)
	{
		p=p->next;
		count++;
	}
		printf("%d",count);
		printf("enter the position");
		scanf("%d",&pos);
		if(pos<=count)
		{
		p=start;
		i=0;
		while(i<pos)
		{
			p=p->next;
			i++;
		}
		}
		temp=p->next;
		p->next=p->next->next;
		free(temp);
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
	printf("Enter to delete the elements the elements\n 1)beggining\t2end\t3position");
	scanf("%d",&choice);
	switch(choice)
	{
		case(1):
			begin();
			break;
		case(2):
			end();
			break;
		case(3):
			pos();
			break;
			
	}
	p=start;
	while(p!=NULL)
	{
		printf("%d",p->data);
	 	p=p->next;
	 }
	
}
