#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};

node *start;

void insert(int data){
	node* s=start;
	node* t=new node;
	t->data=data;
	t->next=NULL;
	if(start==NULL){
		start=t;
	}
	else{
		while(s->next!=NULL){
			s=s->next;
		}
		s->next=t;
	}
}

void print(){
	node* s=start;
	do{
		cout<<s->data;s=s->next;
	}
	while(s->next!=NULL);
}

void pop(){
	node* s=start;
	while(s->next->next!=NULL){
		s=s->next;		
	}
	delete(s->next->next);
	s->next=NULL;
	
	
}

int main(){
	
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(16);
	print();
	pop();
	print();	
	
	
}
