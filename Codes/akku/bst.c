#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* maximum(struct node *root){
	struct node *temp = root;
	
	while(temp &&temp->right != NULL){
		temp = temp->right;
	}
	return temp;
	
	
}

void display(struct node *root){
	if(root == NULL){
//		printf("EMpty tree\n");
		return;
	}

	display(root->left);
	printf("%d\t",root->data);
	display(root->right);
	
}

struct node* insert (struct node *root,int data){
	struct node *new_node = malloc(sizeof(struct node));
	new_node->data = data;
	new_node->left=new_node->right=NULL;
	if(root == NULL){
		root = new_node;
		return root;
	}
	if(data > root->data){
		root->right=insert(root->right,data);
	}
	else{
		root->left=insert(root->left,data);
	}
}

struct node* del_node(struct node * root,int key){
//	if(root == NULL){
//		return root;
//	}
//	if(key < root->data){
////		root  = root->left;
//		root->left = del_node(root->left,key);
//	}
//	else if(key > root->data){
//		root->right = del_node(root->right,key);
//	}
//	else{
//		if(root->left == NULL){
//			struct node*temp;
//			temp = root->right;
//			free(root);
//			return temp;
//		}
//		else if(root->right == NULL){
//			struct node*temp;
//			temp = root->left;
//			free(root);
//			return temp;
//		}
//		
//		else{
//			struct node* temp = maximum(root->left);
//			root->data = temp->data;
//			printf("root data %d\n",root->data);
//			root->left = del_node(root->left,temp->data); 
//			
//		}
//		
//	}
//	return root;
	if(root==NULL){
		printf("%s","Nothing found to Delete");
		return root;
	}
	else if(key<root->data){
		root->left=del_node(root->left,key);
	}
	else if(key>root->data){
		root->right=del_node(root->right,key);
	}
	else{
		struct node* temp;
		if(root->left==NULL){
			temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL){
			temp=root->left;
			free(root);
			return temp;
		}
		else{
			temp=maximum(root->left);
			root->data=temp->data;
			root->left=del_node(root->left,root->data);		
			
		}
		
	}
	return root;
}




int main(){
	struct node *root= NULL;
	int a[] = {6,4,3,5,8,7,9};
	int i =0;
	for(i = 0; i<5;i++){
		root=insert(root,a[i]);
	}
	display(root);
	root = del_node(root,6);
	display(root);
	return 0;
}
