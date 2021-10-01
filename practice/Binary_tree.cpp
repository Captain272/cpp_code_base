//#include<iostream>
//using namespace std;
//
//struct node{
//	int data;
//	struct node *right;
//	struct node *left;
//}*start=NULL,*p=NULL;
//
//void insert(int data){
//	node* temp=new node;
//	node* p=new node;
//	temp->data=data;
//	temp->left=NULL;
//	temp->right=NULL;
//	p=start;
//	if(start==NULL){
//		start=temp;
//		cout<<"it is root data";
//	}
//	else{
//		while(p!=NULL){
//			if(data>p->data){
//				cout<<data<<" is greater than "<<p->data<<endl;
//				if(p->right!=NULL){
//					p=p->right;
//				}
//				else{
//					p->right=temp;
//					break;
//				}
//				
//			}
//			else{
//				cout<<data<<" is smaller than "<<p->data<<endl;
//				if(p->left!=NULL){
//				p=p->left;
//				}
//				else{
//					p->left=temp;
//					break;
//				}
//			}
//		}
//		p=temp;
//		
//		
//	}
//	
//}
//
//void display(node* root){
//	node* p=new node;
//	p=root;
////	cout<<"Displaying the content";
//	if(p){
//		cout<<p->data;
//		cout<<endl;
//		display(root->left);
//		cout<<ends;
//		display(root->right);
//	}
//}
//
//int main(){
//	cout<<"Hello World";//6 4 3 5 8 7 9
//	int arr[7]={6,4,3,5,8,7,9};
//	for(int i=0;i<7;i++){
//		insert(arr[i]);
////		cout<<"insertion done for \n"<<i;
//	}
//	display(start);
//}
#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
}*start=NULL,*p=NULL;




void insert(node* start,int data,node* temp){
	node* p=new node;
	p=start;
	while(p!=NULL){
		if(data>p->data){
			if(p->right==NULL){
				p->right=temp;
				break;
			}
			else{
				p=p->right;
			}
		}
		else{
			if(p->left==NULL){
				p->left=temp;
				break;
			}
			else{
				p=p->left;
			}
		}
	}
}


void create(int data){
	node* temp=new node;
	node* p=new node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	if (start==NULL){
		start=temp;
	}
	else{
		insert(start,data,temp);
	}
}

void display(node* root){
	node* p=new node;
	p=root;
	if(p){
		cout<<p->data;
		display(p->left);
		display(p->right);
	}
}


int main(){
	int arr[7]={5,4,9,6,8,7,3};
	for(int i=0;i<7;i++){
		create(arr[i]);
	}
	for(int i=0;i<7;i++){
		cout<<arr[i]<<ends;
	}
	
	display(start);
}
































