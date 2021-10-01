#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int q[];
int f=-1;
int r=-1;
int len=5;

void insert(int data){
	int i=0;
	if(r==len-1){
		printf("Overflow");
	}
	else if(f==-1 && r==-1){
		f=0;
		r=0;
		q[f]=data;
	}
	else{
	
		for(i=r;i>=f;i--){
			if(data>q[i]){
				q[i+1]=q[i];
			}
			else{
				break;
			}
		}
		r++;
	}
	q[i+1]=data;
}

void dele(){
	if(r==-1){
		printf("Underflow");
	}
	else{
		f++;
	}
}

void display(){
	int i=0;
	for(i=f;i<=r;i++){
		printf("%d\t",q[i]);
	}
	
}

int main(){
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	insert(50);
	display();
//	insert(50);
	
}


