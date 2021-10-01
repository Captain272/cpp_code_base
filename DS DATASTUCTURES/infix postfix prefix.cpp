#include<iostream>
using namespace std;
#include<stdlib.h>
struct node
{
	int data;
	node*  next;
}*start,*p,*temp;
node* create(int d)
{
	temp=(struct node*)malloc(sizeof (struct node));
	temp->data=d;
	temp->next=NULL;
	if(start== NULL)
	{
		start=temp;
		p=start;
	}
	else
	{
		p->next=temp;
		p=temp;
	}
	
}

void push(int d)
{
	create(d);
}
void pop()
{
	temp=start;
	while(temp->next!=p)
	{
		temp=temp->next;
	}
	p=temp;
	p->next=NULL;
//	if(temp->next==NULL)
//	{
//		cout<<"NULL";
//	}
}
int isalnum(char ch)
{
	if(ch>=65 && ch<=90)
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
int peek(void)
{
	if(p==NULL)
	{
		//printf("Enter the stack is empty \n");
		return 0;
	}
	else
	{
	return (p->data);
	}
}
void infixtopostfix(string a ,int s)
{
	//cout<<"HELLO";
	for(int i=0;i<s;i++)
	{
		char b=a[i];
		if(isalnum(b))
		{
			cout<<b;
		}
		else if(isoperator(b))
		{
			
			char t=peek();
			if((t=='(') or (t=='\0'))
			{
				push(b);
			}
			else if(b=='(')
			{
				push(b);
			}
			else if(b==')')
			{
				while(b!='(')
				{
					pop();
				}
			}
		
		
			
		}
	}
	
}

int main()
{
	string a ="A+B+C";
	int s=9;
	cout<<a<<endl;
	infixtopostfix(a,s);
	
}
