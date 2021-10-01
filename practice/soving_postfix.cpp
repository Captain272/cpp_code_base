//#include<iostream>
//#include<string.h>
//using namespace std;
//
//int length=-1;
//int stack[0];
//void push(int data){
////	int* p;
////	p=&data;
////	p=stack;
////	for(int i=0;i<=length;i++){
////		p++;
////	}
//	stack[++length]=data;
////		cout<<data<<" Is inserted\n";
////	length++;
//}
//
//void display(){
//	if(length>-1){
//	for(int i=0;i<length;i++){
//		cout<<stack[i]<<ends;
//	}
//	}
//	else{
//		cout<<"\nThe stack is empy dude\n";
//	}
//}
//
//int pop(){
//	return stack[length--];
////	int f;
////	f=stack[length-1];
////	stack[length-1]=0;
////	length--;
////	return f;
//}
//
//int peek(){
//	return stack[length];
//}
//
//int isempty(int *stack){
//	if(length==0){
//		return 0;
//	}
//	else{
//		return 1;
//	}
//}
//
//
////void result(char *exp){
////	int stack2[0];
////	int k;
////	for(int i=0;exp[i];i++){
////		cout<<exp[i]<<endl;
////		if(isdigit(exp[i])){
////			cout<<exp[i]<<"is digit"<<endl;
////			k=*(exp+i);
////			push(k,stack2);
////		}
////	}
////	display(stack2);
////}
//int main(){
//	string exp="231*+9-";
//
////	int stack[0];
////	for(int j=0;j<6;++j)
////	{
////		push(j,stack);
////	}
////	int n=5;
////	push(&n,stack);
////	display(stack);
////	pop(stack);
////	display(stack);
////	result(exp);
////	display(stack);
////	for(int i=0;i<length;i++){
////		cout<<stack[i];
////	}
////	push(2,stack);
////	push(3,stack);
////	push(1,stack);
////	push(9,stack);
////	push(2,stack);
////	push(3,stack);
////	push(1,stack);
////	push(9,stack);
////	push(2,stack);
////	push(3,stack);
////	push(1,stack);
////	push(9,stack);
//	for(int i=0;exp[i];++i){
//		
//		if(isdigit(exp[i])){
//			int k;
//			k=exp[i];
////			cout<<k<<endl;
//			push(k-48);
//		}
//		else{
//			int val1=pop();
//			int val2=pop();
//			cout<<val1<<ends<<exp[i]<<ends<<val2<<endl;
//			
//			switch(exp[i])
//			{
//				case '+':push(val2+val1);break;
//				case '-':push(val2-val1);break;
//				case '*':push(val2*val1);break;
//				case '/':push(val2/val1);break;
//			}
//		}
//		display();
//	}
//	cout<<pop();
////	display();
//
//	
//	
//}


#include<iostream>


int stack[100];
int length = -1;

void push(int data){
    stack[++length] = data;
}

int pop(){
    return stack[length--];
}

int peek(){
    return stack[length];
}

int press(char c){
    switch (c)
    {
    case '^':
        return 3;
        break;
    case '*' || '/':
        return 2;
        break;
    case '+' || '-' :
        return 1;
        break;
    default:
        return -1;
        break;
    }
}


int main(){
    
    char equation[] = "123+*8-";
    int eq_len = strlen(equation);
    printf("%d\n",eq_len);
    return 0;
}
