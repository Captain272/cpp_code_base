//BINARY TREE

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
}*temp=NULL,*p=NULL,*start=NULL;
//static int c=0;
node* create(int data)
{
//	int a;
//	printf("Enter the data");
//	scanf("%c",&a);
	
	temp=(struct node*)malloc(sizeof(struct node));
	p=(struct node*)malloc(sizeof(struct node));
//	if(c==0)
//	{
//	temp->data=a;
//	temp->left=create();
//	temp->right=create();
//	start=temp;
//	c++;
//}
//	else
//	{
//
//	if(a!=-1)
//	{
//	temp->data=a;	
//	temp->left=create();
//	temp->right=create();
//	}
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	p=start;
	if(start==NULL){
		start=temp;
		cout<<start->data<<ends<<start->left<<ends<<start->right<<endl;
	}
	else{
		while(p!=NULL){
			if(temp->data>p->data){
				cout<<endl<<temp->data<<" is greater than "<<p->data<<endl;
				p=p->right;
				cout<<endl<<p->data<<endl;
			}
			else{
				cout<<endl<<temp->data<<" is smaller than "<<p->data<<endl;
				p=p->left;
				cout<<endl<<p->data<<endl;
			}
		}
		p=temp;
//		p=NULL;
//		temp=NULL;
	}
}

void display(node* node)
{
//	if(node)
//	{
//		printf("%d\t",node->data);
//		display(node->left);
//		display(node->right);
//	}
//	else if(start==NULL)
//	{
//		printf("NOthing to dispaly");
//	}
	if(start==NULL){
		cout<<"\nThe tree is empty\n";
	}
	else if (node==NULL){
		cout<<ends;
	}
	else if(node){
		cout<<node->data;
		display(node->left);
		display(node->right);
		}
}

int main()
{
	int in=0;
//	printf("1)creation\n2)Display\n3Exit");
//	scanf("%d",&in);
	int data;
	while(in!=3)
	{
		printf("\n1)creation\n2)Display\n3Exit\n");
		scanf("%d",&in);
		if(in==1)
		{	cout<<"\nEnter the data you want:";
			cin>>data;
			create(data);
		}
		else if(in==2)
		{
			display(start);
		}
		else
		{
			printf("\nEnter the correct choice");
		}
	}

}
