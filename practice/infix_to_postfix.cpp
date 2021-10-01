#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

int length=-1;
char stack[100];


void push(char data){
	stack[++length]=data;
//		cout<<data<<" Is inserted\n";
//	length++;
}

void display(){
	if(length!=-1){
	for(int i=0;i<length;i++){
		cout<<stack[i]<<endl;
	}
	}
	else{
		cout<<"\nThe stack is empy dude\n";
	}
}

char pop(){
//	char f;
//	f=stack[length-1];
//	stack[length]=0;
//	length--;
//	return f;
return stack[length--];
}

char peek(){
	return stack[length];
}

int isempty(){
	if(length==-1){
		return 0;
	}
	else{
		return 1;
	}
}

int pre(char c){
	if(c=='^'){
		return 3;
	}
	else if(c=='*' || c=='/'){
		return 2;
	}
	else if(c=='+' || c=='-'){
		return 1;
	}
	else{
		return -1;
	}
	
}




int main(){
	
	string s = "a+b*(c^d-e)^(f+g*h)-i";
	string result;
//	push('N');
//	display();
	int l=s.length();

	
//	cout<<l;
	for(int i=0;i<l;i++){
//		
////		display();
//		cout<<endl<<length<<ends;
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
			result+=s[i];
		}
		else if(s[i]=='('){
			push('(');
//			display();
		}
		else if(s[i]==')'){
			while(length!=-1 && peek()!='('){
//				cout<<peek()<<ends;
//				cout<<endl;
//				display();
//				char t=pop();
				result+=pop();
//				pop();
			}
			if(peek()=='('){
//				cout<<"Yes it is ( brfore "<<s[i+1]<<endl;
				pop();
			}
		}
		else{
			while(length!=-1 && pre(s[i])<=pre(peek())){
//				char t=pop();
				result+= pop();
//				pop();
			}
			push(s[i]);
		}
	}
	
	while(length>-1){
//		char t=pop();
		result+=pop();
//		pop();
	}
	display();
cout<<result;
}
