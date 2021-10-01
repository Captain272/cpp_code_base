#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//using namespace std;0

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

void display(){
	int i = 0;
	for(i =0;i<=length;i++){
		printf("%d\t",stack[i]);
	}
	printf("\n");
}

int main(){
    
    char equation[] = "231*+9-";
    int eq_len = strlen(equation);
    printf("%d\n",eq_len);
    int i =0;
    for( i = 0; i <eq_len;i++){
    	if(isdigit(equation[i])){
    		push(equation[i]-48);
		}
		else{
			int a = pop();
			int b = pop();
			switch(equation[i]){
//				case '^':
//					push(a**b);
//					break;
				case '+':
					push(a+b);
					break;
				case '-':
					push(b-a);
					break;
				case '*':
					push(a*b);
					break;
				case '/':
						push(b/a);
						break;				 
			}
		}
		display();
	}
	display();
    
    return 0;
}
