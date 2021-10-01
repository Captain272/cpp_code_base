#include<iostream>
using namespace std;

void sort(int arr[],int n){
	int m=0;
	for(int i=0;i<n;i++){
		m=i;
		for(int j=i+1;j<n;j++){
			if(arr[m]>arr[j]){
				int temp=arr[m];
				arr[m]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

struct node{
	int data;
	struct node* next;
};

node* insert(node* root,int data){
//	struct node* s=start;
	struct node* temp=new node;
	temp->data=data;
	temp->next=NULL;
	if(root==NULL){
		return temp;
//		cout<<temp->data<<"->"<<ends;
	}
	else{
			root->next=insert(root->next,data);
		}

//		while(root->next!=NULL){
//			root=root->next;
//		}
//		root->next=temp;
		
}


int hash(int arr[][5],int n,int m,node* map2[4]){
	int map[n];
	cout<<"\nBEFORE SORT OF INDIVIDUAL ARRAY\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<ends;
		}
		cout<<endl;
	}
	
	cout<<"\nAFTER SORT OF INDIVIDUAL ARRAY\n";
	for(int i=0;i<4;i++){
		sort(arr[i],m);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<ends;
		}
		cout<<endl;
	}
	
	for(int i=0;i<n;i++){
		map[i]=arr[i][0];
	}
	sort(map,n);
//	struct node* map2[n]; 
	
	for(int i=0;i<n;i++){
		map2[i]=NULL;
	}
	
	for(int i=0;i<n;i++){
		map2[i]=insert(map2[i],map[i]);
//		cout<<map2[i]->data;
	}
	
	cout<<"\nAFTER HASH\n";
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map[i]==arr[j][0]){
				
				for(int k=1;k<m;k++){
//					cout<<arr[j][k]<<"->";
//					node* temp=map2[i];
//					while(map2[i]!=NULL){
//						map2[i]=map2[i]->next;
//					}
					map2[i]=insert(map2[i],arr[j][k]);
//					map2[i]=temp;
				}
//				node* temp=map2[i];
//				while(temp!=NULL){
//					cout<<temp->data;
//					temp=temp->next;
//				}
//				cout<<endl<<" | "<<endl<<"\\/ "<<endl;
				arr[j][0]=-120;
				break;
//				cout<<endl;
			}
		}
	}
	
}
int main()
{
//	int n=9;
//	cout<<"Enter b: ";
//	cin>>n
//	int arr[n]={9,8,7,6,5,4,3,2,1};
//	
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<ends;
//	}
//	sort(arr,n);
//	cout<<endl<<"Sorted";
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<ends;
//	}
//
	int n=4,m=5;
	int arr[4][5]={{5,4,3,2,1},
					{10,9,8,7,6},
					{8,7,4,3,2},
					{7,5,3,2,1}};
					
//	for(int i=0;i<n;i++){
//		sort(arr[i],m);
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cout<<arr[i][j]<<ends;
//		}
//		cout<<endl;
//	}
	
	struct node* map2[n]; 
	cout<<"BEFORE HASH\n";
	hash(arr,n,m,map2);
	node* temp;

	cout<<"ARRAY\t<----------linked list---------->\n";
	for(int i=0;i<n;i++){
			temp=map2[i];
			while(temp!=NULL){
				cout<<temp->data<<"\t->";
				temp=temp->next;
			}
			cout<<"NULL"<<endl;
	}
	
}
