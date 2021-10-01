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
	printf("enter th evalue");
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
int main()
{
	int n,i,j;
	printf("Enter the no of elements in the linked list");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		create();
	 }
	 p=start;
	 while(p!=NULL)
	 {
	 	printf("%d\t",p->data);
	 	p=p->next;
	 }
}
