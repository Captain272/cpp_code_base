// CPP program to print the number which 
// contain the digit d from 0 to n 
#include <bits/stdc++.h> 
using namespace std; 

// Returns true if d is present as digit 
// in number x. 
bool isDigitPresent(int x, int d) 
{ 
	// Breal loop if d is present as digit 
	while (x > 0) 
	{ 
		if (x % 10 == d) 
			break; 

		x = x / 10; 
	}  
	return (x > 0); 
} 
 
void printNumbers(int n, int d) 
{ 
	int count=0;
	 
	for (int i = 0; i <= n; i++) 

	{
		
		if (i == d || isDigitPresent(i, d)) 
		{
		
			cout << i << " "; 
			count++;
	    }
	}	
	cout<<count;
} 
int main() 
{ 
	int n = 1000, d = 5; 
	printNumbers(n, d); 
	return 0; 
} 

