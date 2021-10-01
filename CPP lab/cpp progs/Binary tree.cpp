#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
}*temp ,*p;
struct node* newno(int x)
{
	temp=(struct node*) malloc(sizeof(struct node));
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	
	return temp;	
}
struct node* preorder(struct node*root)
{
	printf("%d",root->data);
	preorder(root->left);
	preorder(root->right);
}
struct node* insert(struct node* root,int key)
{ 
	if(root==NULL)
	{
		return newno(key);
	}
	else if(key<root->data)
	{
		root->left=insert(root->left,key);
	}
	else if(key>root->data)
	{
		root->right=insert(root->right,key);
	}
}

int main()
{
	int n,i,a;
	printf("Enter the no fo elements");
	scanf("%d",&n);
	struct node* root=NULL;
	for(i=0;i<n;i++)
	{
		printf("Enter data");
		scanf("%d",&a);
		root=insert(root,a);
	}
	printf("THIS IS THE PRE-ORDER");
	preorder(root);

	return 0;
}
