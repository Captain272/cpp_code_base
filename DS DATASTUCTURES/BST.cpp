#include<iostream>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
}*temp=NULL,*p=NULL,*start=NULL;

node* create(int a)
{
	node* temp = new node;
	temp->data=a;
	temp->left=NULL;
	temp->right=NULL;
	if(start==NULL)
	{
//		cout<<"added succesfully root node!!!!!!!!!";
		start=temp;
//		cout<<start->data;
	}
	
	return temp;
}

node* add(int a,node* p)
{
	if(p==NULL)
	{	
//		cout<<"came into add section\n";
		create(a);
	}
	else if(p->data<a)
	{
		p->right=add(a,p->right);
	}
	else if(p->data>a)
	{
		p->left=add(a,p->left);
	}
}

node* preorder(node* root)
{
	if(root!=NULL)
	{
		cout<<root->data;
		preorder(root->left);
		preorder(root->right);
	}
}
node* search(int a,node* root)
{
//	if(root!=NULL)
//	{
	if(root->data==a)
	{
		cout<<"found the element "<<a;
	}
	else if(root->data<a)
	{
		search(a,root->right);
	}
	else if(root->data>a)
	{
		search(a,root->left);
	}
	else if(root==NULL)
	{
		cout<<"NOT FOUND";
	}
}
//	else
//	{
//		cout<<"NOT FOUND";
//	}
//}

int main()
{
	int a=9;
		for(int i=1;i<a;i++)
	{
		add(i,start);
	}
	preorder(start);
	cout<<"the code after is not working\n";
	cout<<start->data;
	search(40,start);
	
}
