#include<iostream>
using namespace std;
struct node
{
	node* prev;
	int data;
	node* next;
}*start,*temp,*p;

node* create(int n)
{
	
	

	for(int i=0;i<n;i++)
	{
		node *temp=new node;
		cout<<"\n\nENTER THE DATA TO IN Q";
		int v;
		cin>>
		v;
		temp->prev=NULL;
		temp->next=NULL;
		temp->data=v;

		if(start==NULL)
		{
			cout<<"This is the starting node";
			start=temp;
			p=start;
			
		}
		else
		{
			p->next=temp;
			temp->prev=p;
			p=p->next;
			p->next=NULL;
		}
	}
	
}
void display()
{
	temp=start;
//cout<<start->data<<temp->data<<p->data;
	cout<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}

void popend()
{	
	temp=p;
	p=p->prev;
	p->next=NULL;
	delete(temp);
}
void poprear()
{
	temp=start;
	start=start->next;
	start->prev=NULL;
	delete(temp);
	
}

int main()
{
	cout<<"WELCOME TO THE QUEUE SHOW:";
	int n;
	cout<<"\n\nEnter the length of the q";
	cin>>n;
	create(n);
//	create(2);
//	create(3);
//	create(4);
	display();
	popend();
	display();
	poprear();
	display();
	
	
}
