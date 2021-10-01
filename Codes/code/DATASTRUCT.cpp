#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
}*start=NULL,*temp,*p;

node* create()
{
	int x;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the no");
	scanf("%d",&x);
	temp->data=x;
	/*if(start==NULL)
	{
		temp->next=NULL;
		start=temp;
		p=temp;
	}
	else
	{
		p->next=temp;
		p=p->next;
	}
	p->next=NULL;
	temp=p;*/
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

int main()
{
	int n,i;
	printf("Enter the npdes u want ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		create();
	}
	p=start;
	/*while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}*/
	 while(p!=NULL)
	 {
	 	printf("%d",p->data);
	 	p=p->next;
	 }
}
