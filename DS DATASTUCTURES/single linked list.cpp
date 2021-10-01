#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	node* next;
}*temp,*start,*p,*c;
node* create(int d)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=d;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
		p=start;
	}
	else
	{
		p->next=temp;
		p=temp;
		p->next=NULL;
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
node* insert(int d)
{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE VALUE TO INSERT");
	int a,g=2;
	scanf("%d",&a);
	temp->data=a;
	temp->next=NULL;
	c=start;
	while(g!=d)
	{
		c=c->next;
		g++;
	}
	printf("\n%d %d\n",c->data,c->next->next->data);
	temp->next=c->next;//5 1 2 3 4 5 3 9
	c->next=temp;
//	printf("\n%d %d\n",c->data,c->next->data);
//	printf("\n%d %d\n",temp->data,temp->next->next->next->data);
	printf("PROCESS COMPLETED insertaed!!!!!!!!!!\n");
}

node* del(int d)
{
	int g=2;
	c=start;
	while(g!=d)
	{
		c=c->next;
		g++;
	}
	c->next=c->next->next;
	printf("DELETED\n");
}
node* rev()
{
	int g=0;
	int i,k=0;
	c=start;
	temp=start->next;
	while(c!=p)//5 1 2 3 4 5 3 9
	{
		
		g++;
		
		c=c->next;
		temp=temp->next;
	//	printf("%d",g);
//		printf("%d",c->data);
//		printf("%d",temp->data);
	}
	g--;
	for(i=g;i>=0;i--)
	{	
		k=0;
		c=start;
		while(k!=i)
	{
		
		k++;
	//	printf("%d",c->data);
		c=c->next;
	//	printf("%d",c->data);
	}
		if(c==start)
		{
			c->next->next=c;
			c->next=NULL;
			
		}
		else{
		
		c->next->next=c;//next->next->
	}
	//printf("Completed%d",i);
	}
	printf("HI HELLO\n");
	temp=start;
	start=p;
	p=temp;
	printf("number\n%d",start->next->next->next->next->data);
	
}
int searching(int d)
{
	int i=0;
	c= start;
	while(c!=NULL)
	{
		i++;
		if(d==c->data)
		{
			printf("%d Found",d);
			return i;
		}
		c=c->next;
	}
	//printf("NOT FOUND");
}
void duplicate()
{
	
	int k;
	temp=start;
	while(temp!=NULL)
	{
		//printf("DUPLICATING");
		c=temp->next;
		while(c!=NULL)
	{
		if(temp->data==c->data)
	{
		k=searching(c->data);
		del(k);
		printf("deflefted");
	}
	c=c->next;
	}
	
	temp=temp->next;
	}
}

int main()
{
	int n=0,x=0,i=0;
	printf("ENTER THE NO OF ELEMENTS\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("ENETER THE VALUE");
		scanf("%d",&x);
		create(x);
	}
	printf("TO DELETE THE SPECIFIC,ENTER THE INDEX");
	int a=0;
	scanf("%d",&a);
	insert(a);
	display();
	//printf("ENetr the index  element to delete");
	del(a);
	display();
	printf("TO REVERSE THE LIST");
	rev();
	display();
	int z;
	z=searching(1);
	printf("%d",z);
	duplicate();
	display();
}
