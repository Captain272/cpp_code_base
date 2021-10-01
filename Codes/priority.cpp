#include<iostream>
using namespace std;

struct node
{
	struct node* prev;
	int data;
	struct node* next;
}*pointing=NULL,*temp=NULL,*start=NULL,*spec=NULL;

node* push(int data)
{
	temp=new node;
	temp->data=data;
	if (pointing==NULL)
	{
		pointing=start;
		pointing=temp;
		pointing->prev=NULL;
		pointing->next=NULL;
	}
	else
	{
		spec=start;
	while(spec->data<data)
	{
		spec=spec->next;
	}
	pointing=start;
	while(pointing!=temp)
	{
		pointing=pointing->next;
	}
	pointing->next=temp;
	temp->prev=pointing;
	temp->next=spec;
	spec->prev=temp;
	
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
		start=NULL;
		pointing=NULL;
	}
	else
	{
		pointing=pointing->prev;
		delete(pointing->next);
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
	int a;
	char e='a';
	cout<<"enter the no to be inserted";
	cin>>a;
	cout<<"To end the process enter 'E'";
	while(e!='E')
	{
		cout<<"enter the no to be inserted";
		cin>>a;
		push(a);
		
	}
}
