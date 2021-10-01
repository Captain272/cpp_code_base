#include<iostream>
using namespace std;
struct node
{
	int  data;
	node* left;
	node* right;
}*root=NULL,*temp=NULL,*p=NULL;

node * create(int a)
{
	node* temp=new node;
	temp->data=a;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	return temp;

}
node* insert(int a,node* p)
{
		if(p==NULL)
	{
		create(a);
	}
	else if(a<p->data)
	{
		//cout<<"Left check";
		p->left=insert(a,p->left);
		
	}
	else if(a>p->data)
	{
		//cout<<"Right check";
		p->right=insert(a,p->right);
		
	}
}
node* preorder(node* p)
{
	if(p!=NULL)
	{
	cout<<p->data;
	preorder(p->left);
	preorder(p->right);
}
}

void display()
{
	temp=root;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->right;
	}
}
int main()
{
	int a;
	cout<<"Enter the root element";
	cin>>a;
	root=create(a);
	int n[6]={4,3,5,8,7,9};
//	cout<<"Enter the No. of elements: ";
//	cin>>n;
	
	for(int i=1;i<6;i++)
	{
		insert(n[i],root);
	}
	
//	cout<<"HI";
//	cout<<root->data;
//	cout<<root->right->right->data;
	p=root;
	preorder(root);
}
