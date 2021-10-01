#include<iostream>
using namespace std;

struct Q{
	int data;
	Q *next;
}*f=NULL,*r=NULL;

void push(int data){
	Q* n=new Q;
	Q* p=new Q;
	n->data=data;
	n->next=NULL;
	if(f==NULL){
		f=n;
		r=n;
	}
	else{
		r->next=n;
		r=n;
		
	}
	
}

void display(){
	Q* p=f;
	while(p!=r){
		cout<<p->data<<ends;
		p=p->next;
	}
}

void pop(){
	Q* p=new Q;
	p=f;
	cout<<"Poped "<<f->data<<endl;
	f=f->next;
	delete(p);
	
}

int main(){
	int arr[7]={10,205,4,60,70,23,56};
	for(int i=0;i<7;i++){
		push(arr[i]);
		cout<<"pused "<<arr[i]<<endl;
	}
	display();
	for(int i=0;i<7;i++){
		pop();
	}
}
