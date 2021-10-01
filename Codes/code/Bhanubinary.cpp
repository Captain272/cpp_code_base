//BINARY TREE

#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
}*temp=NULL,*p=NULL,*start=NULL;
static int c=0;
node* create()
{
	int a;
	printf("Enter the data");
	printf("HELLO");
	scanf("%d",&a);
	
	temp=(struct node*)malloc(sizeof(struct node));
	if(a==-1)
	{
	return NULL;
}
	else
	{
	
	if(c==0)
	{
	if(a!=-1)
	{
	temp->data=a;	
	temp->left=create();
	temp->right=create();
	start=temp;
	c++;
	}
	else
	{
	temp->data=a;	
	temp->left=create();
	temp->right=create();
	c++;
	}
	
	return temp;
}

}

}
void display(struct node* node)
{
	if(node)
	{		
		++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ++++++++++++
		printf("%d",node->data);
		display(node->left);
		display(node->right);
	}
	else
	{
		printf("NOthing to dispaly");
	}
}

int main()
{
	int in;
	
	struct node* node;
	printf("Enter 1");
	scanf("%d",&in);
	while(in!=3)
	{
		printf("1)creation\n2)Display\n3Exit");
		scanf("%d",&in);
		if(in==1)
		{
			node=create();
		}
		else if(in==2)
		{
			display(node);
		}
		else
		{
			printf("Enter the correct choice");
		}
	}

}
