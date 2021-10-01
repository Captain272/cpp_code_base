#include<iostream>
using namespace std;
int stack[0];
int length=-1;

void push(int data){
	stack[++length]=data;
}

int pop(){
	return stack[length--];
}

int peek(){
	return stack[length];
}

struct node{
	int data;
	node *left,*right;
}*start=NULL;

node* create(int data){
	node* temp=new node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

node* insert(node *root,int  data){
	if(root==NULL){
		return root=create(data);
	}
	else if(data<root->data){
		root->left=insert(root->left,data);
	}
	else{
		root->right=insert(root->right,data);
	}
}

void display(node *root){
	if(root){
		cout<<root->data;
		display(root->left);
		display(root->right);
	}
}
void display2(node *root){
	node* temp=root;
	while()
}

int main(){
	int arr[6]={2,4,3,5,8,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		start=insert(start,arr[i]);
	}	
	display(start);
}
