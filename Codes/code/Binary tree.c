//BINARY TREE

#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
}*temp=NULL,*p=NULL,*start=NULL;
int c=0;
node* create()
{
	int a;
	cout<<"Enter the data";
	cin>>a;
	
	temp=(struct node*)malloc(sizeof(struct node));
	if(c==0)
	{
	temp.data=a;
	temp.left=create();
	temp.right=create();
	strat=temp;
	c++;
}
	else
	{

	if(a!=-1)
	{
	temp.data=a;	
	temp.left=create();
	temp.right=create();
	}
}
void dispaly(struct node* node)
{
	if(node)
	{
		cout<<node->data;
		display(node->left);
		display(node->right);
	}
}

int main()
{
	int in;
	cout<<"1)creation\n2)Display\n3Exit)";
	cin>>in;
	while(in!=3)
	{
		if(in==1)
		{
			create();
		}
		else if(in==2)
		{
			display();
		}
		else
		{
			cout<<"Enter the correct choice";
		}
	}

}
