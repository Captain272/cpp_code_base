#include<iostream>
using namespace std;

struct node{
	int data;
	node *left,*right;
}*start=NULL;

node* create(int data){
//	node* temp=node malloc(sizeof(node));
	node* temp=new node;
	temp->data=-data;
	temp->left=temp->right=NULL;
	return temp;
}

node* insert(node *root,int data){
	if(root==NULL){
		return root=create(data);
	}
	else{
		if(data<=root->data){
			root->left=insert(root->left,data);
		}
		else{
			root->right=insert(root->right,data);
		}
	}
	return root;
}

void inorder(node *root){
	if(root!=NULL){
		cout<<root->data<<ends;
		inorder(root->left);
		inorder(root->right);
	}
}

node* min_val(node* root){
	node* temp=root;
	while(temp && temp->left!=NULL){
		temp=temp->left;
	}
	return temp;
}

//node* del(node *root,int data,node *prev){
//	node* temp=new node;
//	if(data<root->data && root->left!=NULL){
//		del(root->left,data,root);
//	}
//	else if(data>root->data && root->right!=NULL){
//		del(root->right,data,root);
////		return root	
//		}
//	else if(root==NULL){
//		cout<<"\nBosdike\n";
//		return root;
//	}
////	node* temp=new node;
//	else if(root->left!=NULL && root->right!=NULL){
////		return root;
//	}
//	else if(root->left==NULL && root->right==NULL){
//		delete(root);
//	}
//	else{
//		if(prev->left==root){
//			prev->left=NULL;
//			delete(root);
//		}
//		else{
//			prev->right=NULL;
//			delete(root);
//		}
//	}
//	
//	
//	
//}

int main(){
	int arr[7]={6,4,3,5,8,7,9};
	int n=sizeof(arr)/sizeof(arr[0]);
//	node* root=NULL;
	for(int i=0;i<n;i++){
		start=insert(start,arr[i]);
	}
	inorder(start);
	cout<<endl;
//	delete(start,9,start);
	inorder(start);
//	display2(start);
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<ends;
//	}
}
