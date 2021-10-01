#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char stack[100];
int length = -1;
int i;
char result[] = "";


//void print_result(){
//	int len = strlen(result);
//	printf("%s\n","REsult");
//	for(i = 0;i<len;i++){
//		printf("%c",result[i]);
//	}
//	printf("\n");
//}


void display(){
	int i=0;
	printf("stack\n");
	for(i=0;i<=length;i++){
		printf("%c\t",stack[i]);
	}
	printf("\n");
}

void push(int data){
	stack[++length] = data;
}

char pop(){
	return stack[length--];
}

char peek(){
	return stack[length];
}

int press(char c){
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
	char equation[] = "a+b*(c^d-e)^(f+g*h)-i";
	
	
	int len = strlen(equation);
	
	for(i = 0;i<len;i++){
//		display();
		if((equation[i] >= 'a' && equation[i]<= 'z')  || (equation[i] >='A' && equation[i] <= 'Z') ){
			printf("%c",equation[i]);
//			strcat(result,equation[i]);
//			print_result();
//			result []= result[] + equation[i];
		}
		else if(equation[i] =='('){
			push(equation[i]);
		}
		else if(equation[i] == ')'){
			while(length != -1 && peek()!= '('){
//				result += pop();
//				strcat(result,pop());
				printf("%c",peek());
				pop();
			}
			if(peek() == '('){
				pop();
			}
		}
		else{
			while(length != -1 && press(equation[i]) <= press(peek()) ){
//				result  = result + pop();
//				strcat(result,pop());
				printf("%c",peek());
				pop();
			}
			push(equation[i]);
		}
		
	}
	while(length != -1){
//		result += pop();
//		strcat(result,pop());
		printf("%c",peek());
		pop();
	}
	
//	print_result();
	
	


	return 0;
}
