//// CPP program to convert infix to prefix. 
//#include <bits/stdc++.h> 
//using namespace std; 
//
//// Function to check if given character is 
//// an operator or not. 
//bool isOperator(char c) 
//{ 
//	return (!isalpha(c) && !isdigit(c)); 
//} 
//
//// Function to find priority of given 
//// operator. 
//int getPriority(char C) 
//{ 
//	if (C == '-' || C == '+') 
//		return 1; 
//	else if (C == '*' || C == '/') 
//		return 2; 
//	else if (C == '^') 
//		return 3; 
//	return 0; 
//} 
//
//// Function that converts infix 
//// expression to prefix expression. 
//string infixToPrefix(string infix) 
//{ 
//	// stack for operators. 
//	stack<char> operators; 
//
//	// stack for operands. 
//	stack<string> operands; 
//
//	for (int i = 0; i < infix.length(); i++) { 
//
//		// If current character is an 
//		// opening bracket, then 
//		// push into the operators stack. 
//		if (infix[i] == '(') { 
//			operators.push(infix[i]); 
//		} 
//
//		// If current character is a 
//		// closing bracket, then pop from 
//		// both stacks and push result 
//		// in operands stack until 
//		// matching opening bracket is 
//		// not found. 
//		else if (infix[i] == ')') { 
//			while (!operators.empty() && 
//				operators.top() != '(') { 
//
//				// operand 1 
//				string op1 = operands.top(); 
//				operands.pop(); 
//
//				// operand 2 
//				string op2 = operands.top(); 
//				operands.pop(); 
//
//				// operator 
//				char op = operators.top(); 
//				operators.pop(); 
//
//				// Add operands and operator 
//				// in form operator + 
//				// operand1 + operand2. 
//				string tmp = op + op2 + op1; 
//				operands.push(tmp); 
//			} 
//
//			// Pop opening bracket from 
//			// stack. 
//			operators.pop(); 
//		} 
//
//		// If current character is an 
//		// operand then push it into 
//		// operands stack. 
//		else if (!isOperator(infix[i])) { 
//			operands.push(string(1, infix[i])); 
//		} 
//
//		// If current character is an 
//		// operator, then push it into 
//		// operators stack after popping 
//		// high priority operators from 
//		// operators stack and pushing 
//		// result in operands stack. 
//		else { 
//			while (!operators.empty() && 
//				getPriority(infix[i]) <= 
//					getPriority(operators.top())) { 
//
//				string op1 = operands.top(); 
//				operands.pop(); 
//
//				string op2 = operands.top(); 
//				operands.pop(); 
//
//				char op = operators.top(); 
//				operators.pop(); 
//
//				string tmp = op + op2 + op1; 
//				operands.push(tmp); 
//			} 
//
//			operators.push(infix[i]); 
//		} 
//	} 
//
//	// Pop operators from operators stack 
//	// until it is empty and add result 
//	// of each pop operation in 
//	// operands stack. 
//	while (!operators.empty()) { 
//		string op1 = operands.top(); 
//		operands.pop(); 
//
//		string op2 = operands.top(); 
//		operands.pop(); 
//
//		char op = operators.top(); 
//		operators.pop(); 
//
//		string tmp = op + op2 + op1; 
//		operands.push(tmp); 
//	} 
//
//	// Final prefix expression is 
//	// present in operands stack. 
//	return operands.top(); 
//} 
//
//// Driver code 
//int main() 
//{ 
//	string s = "(A-B/C)*(A/K-L)"; 
//	cout << infixToPrefix(s); 
//	return 0; 
//} 
/* This program converts infix expression to postfix expression.
 * This program assume that there are Five operators: (*, /, +, -,^) 
	in infix expression and operands can be of single-digit only.
 * This program will not work for fractional numbers.
 * Further this program does not check whether infix expression is 
 valid or not in terms of number of operators and operands.*/

#include<stdio.h>
#include<stdlib.h>      /* for exit() */
#include<ctype.h>     /* for isdigit(char ) */
#include<string.h>

#define SIZE 100


/* declared here as global variable because stack[]
* is used by more than one fucntions */
char stack[SIZE];
int top = -1;

/* define push operation */

void push(char item)
{
	if(top >= SIZE-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top = top+1;
		stack[top] = item;
	}
}

/* define pop operation */
char pop()
{
	char item ;

	if(top <0)
	{
		printf("stack under flow: invalid infix expression");
		getchar();
		/* underflow may occur for invalid expression */
		/* where ( and ) are not matched */
		exit(1);
	}
	else
	{
		item = stack[top];
		top = top-1;
		return(item);
	}
}

/* define function that is used to determine whether any symbol is operator or not
(that is symbol is operand)
* this fucntion returns 1 if symbol is opreator else return 0 */

int is_operator(char symbol)
{
	if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
	{
		return 1;
	}
	else
	{
	return 0;
	}
}

/* define fucntion that is used to assign precendence to operator.
* Here ^ denotes exponent operator.
* In this fucntion we assume that higher integer value
* means higher precendence */

int precedence(char symbol)
{
	if(symbol == '^')/* exponent operator, highest precedence*/
	{
		return(3);
	}
	else if(symbol == '*' || symbol == '/')
	{
		return(2);
	}
	else if(symbol == '+' || symbol == '-')          /* lowest precedence */
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

void InfixToPostfix(char infix_exp[], char postfix_exp[])
{ 
	int i, j;
	char item;
	char x;

	push('(');                               /* push '(' onto stack */
	strcat(infix_exp,")");                  /* add ')' to infix expression */

	i=0;
	j=0;
	item=infix_exp[i];         /* initialize before loop*/

	while(item != '\0')        /* run loop till end of infix expression */
	{
		if(item == '(')
		{
			push(item);
		}
		else if( isdigit(item) || isalpha(item))
		{
			postfix_exp[j] = item;              /* add operand symbol to postfix expr */
			j++;
		}
		else if(is_operator(item) == 1)        /* means symbol is operator */
		{
			x=pop();
			while(is_operator(x) == 1 && precedence(x)>= precedence(item))
			{
				postfix_exp[j] = x;                  /* so pop all higher precendence operator and */
				j++;
				x = pop();                       /* add them to postfix expresion */
			}
			push(x);
			/* because just above while loop will terminate we have
			oppped one extra item
			for which condition fails and loop terminates, so that one*/

			push(item);                 /* push current oprerator symbol onto stack */
		}
		else if(item == ')')         /* if current symbol is ')' then */
		{
			x = pop();                   /* pop and keep popping until */
			while(x != '(')                /* '(' encounterd */
			{
				postfix_exp[j] = x;
				j++;
				x = pop();
			}
		}
		else
		{ /* if current symbol is neither operand not '(' nor ')' and nor
			operator */
			printf("\nInvalid infix Expression.\n");        /* the it is illegeal  symbol */
			getchar();
			exit(1);
		}
		i++;


		item = infix_exp[i]; /* go to next symbol of infix expression */
	} /* while loop ends here */
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");        /* the it is illegeal  symbol */
		getchar();
		exit(1);
	}
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");        /* the it is illegeal  symbol */
		getchar();
		exit(1);
	}


	postfix_exp[j] = '\0'; /* add sentinel else puts() fucntion */
	/* will print entire postfix[] array upto SIZE */

}

/* main function begins */
int main()
{
	char infix[SIZE], postfix[SIZE];         /* declare infix string and postfix string */

	/* why we asked the user to enter infix expression
	* in parentheses ( )
	* What changes are required in porgram to
	* get rid of this restriction since it is not
	* in algorithm
	* */
	printf("ASSUMPTION: The infix expression contains single letter variables and single digit constants only.\n");
	printf("\nEnter Infix expression : ");
	gets(infix);

	InfixToPostfix(infix,postfix);                   /* call to convert */
	printf("Postfix Expression: ");
	puts(postfix);                     /* print postfix expression */

	return 0;
}


