#include<iostream>
using namespace std;

int length=-1;
char stack[0];
int stack1[0];

void push(char data){
	stack[++length]=data;
}

void push1(int data){
	stack1[++length]=data;
}

char peek(){
	return stack[length];
}
int peek1(){
	return stack1[length];
}

char pop(){
	return stack[length--];
}
int pop1(){
	return stack1[length--];
}
void display(){
	for(int i=0;i<=length;i++){
		cout<<stack[i]<<ends;
	}
}
void display1(){
	for(int i=0;i<=length;i++){
		cout<<stack1[i]<<ends;
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

int ev(char c){
	int a;
	int b;
	a=pop1();
	b=pop1();
	switch(c){
	case '+':return a+b;
	case '-':return a-b;
	case '*':return a*b;
	case '/':return a/b;
}
}

//int ev2(char ce){
//	int a;
//	a=ce;
//	cout<<a;
//}

int main(){
//	string s="a+b*(c^d-e)^(f+g*h)-i";
//	int n=s.length();
//	string res;
//	for(int i=0;i<n;i++){
//		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
//			cout<<s[i];
////			cout<<pop();
//		}
//		else if(s[i]=='('){
//			push(s[i]);
//		}
//		else if(s[i]==')'){
//			while(length>-1 && peek()!='('){
//				cout<<peek();
//				pop();
//			}
//			if(peek()=='('){
//				pop();
//			}
//		}
//		else{
//			while(length>-1 && pre(s[i])<=pre(peek())){
//				cout<<peek();
//				pop();
//			}
//			push(s[i]);
//		}
//		
//	}
//	while(length>-1){
//		cout<<peek();
//		pop();
//	}
////	display();
//	cout<<res<<ends;


string s="231*+9-";
int l=s.length();
for(int i=0;i<l;i++){
	if(isdigit(s[i])){
		push1(s[i]-48);
//		display1();
//		cout<<s[i];
	}
	else{
		push1(ev(s[i]));
	}
	
}
//	cout<<ev2(peek());
	display1();
	
}
