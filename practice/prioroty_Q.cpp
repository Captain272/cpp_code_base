#include<iostream>
using namespace std;

struct Q{
	int data;
	int pri;
	Q *next;
	Q *prev; 
	
}*F=NULL,*R=NULL;

void push(int data,int pri){
	Q* n=new Q;
	Q* p=new Q;
	n->data=data;
	n->pri=pri;
	n->next=NULL;
	n->prev=NULL;
	if(F==NULL){
		F=n;
		R=n;
	}
	else{
		p=F;
		while(pri<p->pri && p->next!=NULL){
			p=p->next;

		}
		if(p==F){
			n->next=F;
			F->prev=n;
			F=n;
			}
			else if(p!=R){
				n->prev=p->prev;
				p->prev=n;
				n->next=p;
			}
			else{
				p->next=n;
				n->prev=p;
				R=n;
			}
		
		

		
	}
}

void display(){
	Q* p=new Q;
	p=F;
	do{
		cout<<p->data<<ends<<p->pri<<endl;
		p=p->next;
	}
	while(p!=NULL);
}

int main()
{
//	int arr[7]={20,30,10,5,8,40};
	int arr[7]={40,8,5,10,30,20};
	for(int i=0;i<6;i++){
		push(arr[i],7-i);
		cout<<"Push complete for "<<arr[i]<<endl;
	}
	display();
}
