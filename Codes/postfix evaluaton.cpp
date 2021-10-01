#include <iostream>
using namespace std;
int isalnum(char ch)
{
	if(ch>=48 && ch<=57)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isoperator(char ch)
{
	if(ch>=33 && ch<=47)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int operate(int a,int b,char ar)
{
	int s;
	switch(ar)
	{
		case ('+'):
		{
			s= a+b;
			break;
		}
		case ('-'):
		{
			s=a-b;
			break;
		}
		case ('*'):
		{
			s=a*b;
			break;
		}
		case ('/'):
		{
			s=a/b;
			break;
		}
	}
	return (char)(s+48);
	
	
} 

struct node
{
	struct node* prev;
	int data;
	struct node* next;
}*pointing=NULL,*temp=NULL;

node* push(int data)
{
	temp=new node;
	temp->data=data;
	if (pointing==NULL)
	{
		pointing=temp;
		pointing->prev=NULL;
		pointing->next=NULL;
	}
	else
	{
		pointing->next=temp;
		temp->prev=pointing;
		pointing=temp;
		pointing->next=NULL;
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
		pointing=NULL;
	}
	else
	{
		pointing=pointing->prev;
		delete(pointing->next);
	}
}
int pops(void)
{
	int p;
	p=pointing->data;
	return p ;
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
	
	string ar;
	cout<<"enter expresion";
	cin>>ar;
	for(int i=0;ar[i]!='\0';i++)
	{
		if(isalnum(ar[i]))
		{
			push(ar[i]);
		}
		else if(isoperator(ar[i]))
		{
			int a,b,c;
			a=pops();
			cout<<a-48<<endl;
			pop();
			b=pops();
			cout<<b-48<<endl;
			pop();
			c=operate(a-48,b-48,ar[i]);
			push(c);
			cout<<endl;
		}
	}
	cout<<"Hence the result is"<<ends<<peek()-48;
	
	
	
}

